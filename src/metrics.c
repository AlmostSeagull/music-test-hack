#include "../include/common.h"

static int events_max_usage[4] = {0, 0, 0, 0};
static int events_current_count[4] = {0, 0, 0, 0};
static int events_max_timer[4] = {0, 0, 0, 0};

static int voices_max_usage[4] = {0, 0, 0, 0};
static int voices_current_count[4] = {0, 0, 0, 0};
static int voices_max_timer[4] = {0, 0, 0, 0};

static int updates_max_usage = 0;
static int updates_current_count = 0;
static int updates_max_timer = 0;

static int dead_voices = 0;

static char* number_string[3] = {"", "", ""};

#define MAX_DISPLAY_TIME 45

int increment_event_count(ALEventQueue* evtqueue, ALEvent* event, ALMicroTime delta){
	alEvtqPostEvent(evtqueue, event, delta);
	for (int i = 0; i < sizeof(SeqPlayers); i++){
		if(&SeqPlayers[i]->evtq == evtqueue){
			measureEvents(SeqPlayers[i]);
		}
	}
}

int decrease_event_count(ALEventQueue* evtqueue, ALEvent* event){
	for (int i = 0; i < sizeof(SeqPlayers); i++){
		if(&SeqPlayers[i]->evtq == evtqueue){
			measureEvents(SeqPlayers[i]);
		}
	}
	alEvtqNextEvent(evtqueue, event); // Putting this before the for-loop makes audio go insane
}

void decrease_event_count_2(ALLink* eventListItem, ALEventQueue* evtqueue){
	alLink(eventListItem, evtqueue);
	for (int i = 0; i < sizeof(SeqPlayers); i++){
		if(&SeqPlayers[i]->evtq == evtqueue){
			measureEvents(SeqPlayers[i]);
		}
	}
}

void measureEvents(ALCSPlayer* player){
	ALLink* currentNode = (ALLink*) 0;
	for(int i = 0; i < 4; i++){
		if(SeqPlayers[i] == player){
			events_current_count[i] = 64;
			currentNode = &player->evtq.freeList.next;
			while(currentNode != 0){
				events_current_count[i] --;
				currentNode = currentNode->next;
			}
			if(events_max_usage[i] <= events_current_count[i]){
				events_max_usage[i] = events_current_count[i];
				events_max_timer[i] = MAX_DISPLAY_TIME;
			}
		}
	}
}

void decrease_metrics_max_timers(){
	for (int i = 0; i < 4; i++){
		if(events_max_timer[i] > 0){
			events_max_timer[i] -= 1;
			if(events_max_timer[i] == 0){
				events_max_usage[i] = 0;
			}
		}
		if(voices_max_timer[i] > 0){
			voices_max_timer[i] -= 1;
			if(voices_max_timer[i] == 0){
				voices_max_usage[i] = 0;
			}
		}		
	}
	
	if(updates_max_timer > 0){
		updates_max_timer -= 1;
		if(updates_max_timer == 0){
			updates_max_usage = 0;
		}
	}
}

void resetMaxMetrics(){
	for(int i = 0; i < 4; i++){
		events_max_usage[i] = 0;
		events_max_timer[i] = 0;

		voices_max_usage[i] = 0;
		voices_max_timer[i] = 0;
	}

	updates_max_usage = 0;
	updates_max_timer = 0;
}

ALVoiceState* updateVoicesUsedAllocate(ALCSPlayer* player, char note, char velocity, char channel){
	ALVoiceState* resultingVoiceState = cseqpAllocateVoice(player, note, velocity, channel);
	int slot = getSongWriteSlot(MusicTrackChannels[0]);
	int playerAddress = (int) player;
	voices_current_count[slot] = (int) *(char*)(playerAddress + 0x89); // ALCSPlayer->occupiedVoices, not present in libaudio.h
	// Update the variables that facilitate the (max in past X frames) metrics
	if(voices_max_usage[slot] <= voices_current_count[slot]){
		voices_max_usage[slot] = voices_current_count[slot];
		voices_max_timer[slot] = MAX_DISPLAY_TIME;
	}
	return resultingVoiceState;
}

void updateVoicesUsedFree(ALCSPlayer* player, ALVoice* voice){
	cseqpFreeVoice(player, voice);
	int slot = getSongWriteSlot(MusicTrackChannels[0]);
	int playerAddress = (int) player;
	voices_current_count[slot] = (int) *(char*)(playerAddress + 0x89); // ALCSPlayer->occupiedVoices, not present in libaudio.h
	if(voices_max_usage[slot] <= voices_current_count[slot]){
		voices_max_usage[slot] = voices_current_count[slot];
		voices_max_timer[slot] = MAX_DISPLAY_TIME;
	}
}

void updateUpdatesUsed(int* pVoice, int type, int* param){
	int* paramList = &synthesizer->paramList;
	int availableUpdates = 112;
	for (int i = 0; i <= 112; i++){
		if (*(int*)(paramList) == 0){
			availableUpdates = i;
			break;
		} else {
			paramList = *(int*)(paramList);
		}
	}
	updates_current_count = 112 - availableUpdates;
	if(updates_max_usage <= updates_current_count){
		updates_max_usage = updates_current_count;
		updates_max_timer = MAX_DISPLAY_TIME;
	}
	setParam(pVoice, type, param);
}

void updateUpdatesUsed2(int* param){
	freeParam(param);
	int* paramList = &synthesizer->paramList;
	int availableUpdates = 112;
	for (int i = 0; i <= 112; i++){
		if (*(int*)(paramList) == 0){
			availableUpdates = i;
			break;
		} else {
			paramList = *(int*)(paramList);
		}
	}
	updates_current_count = 112 - availableUpdates;
	if(updates_max_usage <= updates_current_count){
		updates_max_usage = updates_current_count;
		updates_max_timer = MAX_DISPLAY_TIME;
	}
}

int getVoicesUsed(){
	int slot = getSongWriteSlot(MusicTrackChannels[0]);
	if (voices_max_timer[slot] > 0){
		return voices_max_usage[slot];
	} else {
		return voices_current_count[slot];
	}
}

int getEventsUsed(){
	if (MusicTrackChannels[0] == 0){
		return 0;
	}
	int slot = getSongWriteSlot(MusicTrackChannels[0]);
	if (events_max_timer[slot] > 0){
		return events_max_usage[slot];
	} else {
		return events_current_count[slot];
	}
}

int getUpdatesUsed(){
	if (updates_max_timer > 0){
		return updates_max_usage;
	} else {
		return updates_current_count;
	}
}

void voiceDies(){
	dead_voices++;
	musicBugMonitor();
}

void voiceDies2(){
	dead_voices++;
}

int getDeadVoices(){
	return dead_voices;
}

char* padNumber(int num, int length){
	number_string[0] = 0;
	number_string[1] = 0;
	number_string[2] = 0;
	if ((length == 3 && num < 100 && num > 9) || (length == 2 && num < 10)){
		dk_strFormat(number_string, "0%d", num);
	} else if (length == 3 && num < 10){
		dk_strFormat(number_string, "00%d", num);
	} else {
		dk_strFormat(number_string, "%d", num);
	}
	return number_string;
}