extern void displayListCode(void);
extern void preventSongRestartDeadlock(int write_slot, int song, float volume);
extern int increment_event_count(ALEventQueue* evtq, ALEvent* event, ALMicroTime delta);
extern int decrease_event_count(ALEventQueue* evtq, ALEvent* event);
extern void decrease_event_count_2(ALLink* eventListItem, ALEventQueue* evtqueue);