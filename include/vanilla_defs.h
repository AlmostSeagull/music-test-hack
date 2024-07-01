// Functions
extern void setFlag(s32 flagIndex, s32 value, flagtypes flagType);
extern s32 checkFlag(s32 flagIndex, flagtypes flagType);
extern void* dk_malloc(s32 size);
extern void dk_free(void* mallocPtr);
extern void playSound(s16 soundIndex, s32 volume, f32 unk1, f32 pitch, s32 unk3, s32 unk4);
extern void initiateTransition(s32 map, s32 exit);
extern s32* getFlagBlockAddress(s8 flagType);
extern s32 isAddressActor(void* address);
extern s32 getTimestamp();
extern void dmaFileTransfer(s32 romStart, s32 romEnd, s32 ramStart);
extern void deleteActor(void* actor);
extern s32 spawnActor(s32 actorID, s32 actorBehaviour);
extern void spawnTextOverlay(s32 style, s32 x, s32 y, s8* string, s32 timer1, s32 timer2, u8 effect, u8 speed);
extern f32 dk_sqrt(f32 __x);
extern void dk_strFormat(s8* destination, s8* source, ...);
extern void dk_multiply(f64 val1, f64 val2, s32 unk1, s32 unk2);
extern f64 convertTimestamp(f64 unk0, f64 unk1, u32 unk2, u32 unk3);
extern void resetMap();
extern void prepKongColoring();
extern void* dk_memcpy(void* _dest, void* _src, s32 size);
extern void SaveToGlobal();
extern s32 DetectGameOver();
extern s32 DetectAdventure();
extern void displaySprite(void* control_pointer, void* sprite, s32 x, s32 y, s32 scale, s32 gif_updatefrequency, s32 movement_style);
extern void alterSize(void* object, s32 size);
extern void unkSizeFunction(void* object);
extern void spawnRocketbarrel(void* object, s32 unk);
extern void playSong(s32 songIndex, f32 volume);
extern void playCutscene(void* actor, s32 cutscene_index, s32 cutscene_type);
extern void setHUDItemAsInfinite(s32 item_index, s32 player_index, s8 isInfinite);
extern void copyFromROM(s32 rom_start, void* write_Location, void* file_size_location, s32 unk1, s32 unk2, s32 unk3, s32 unk4);
extern s32 getActorSpawnerID(void* actor);
extern void textOverlayCode(void);

extern s32 hasTurnedInEnoughCBs(void);
extern s32 getWorld(maps map, s32 lobby_is_isles);
extern void tagKong(s32 kong_actor_index);
extern void clearGun(void* player);
extern void clearTagSlide(void* player);
extern void cancelMusic(s32 song, s32 unk0);
extern void removeGorillaGone(void* actor);
extern void playAnimation(void* player, s32 anim_index);
extern void handleAnimation(void* actor);
extern void assessFlagMapping(s32 map, s32 id);
extern void coinCBCollectHandle(s32 player, s32 obj, s32 is_homing);
extern s32 playSFXFromObject(s32 object_index, s16 sfx, s8 unk0, s8 unk1, s8 unk2, s8 unk3, f32 unk4);
extern void displayItemOnHUD(s32 item, s32 unk0, s32 unk1);
extern s32 printDebugText(char* string, s32 v1, s32 v2, s32 v3, s32 v4);
extern void dumpReturns(void* info);
extern s32 __osGetThreadId(void* thread);
extern void setAction(int action, void* actor, int player_index);
extern void handlePoleGrabbing(void* actor, int player_index, int allow_vines);

extern void initiateTransitionFade(maps map, int cutscene, int gamemode);

extern Gfx* initDisplayList(Gfx* dl);
extern Gfx* displayImage(Gfx* dl, int texture_index, int unk3, codecs codec_index, int width, int height, int x, int y, float xScale, float yScale, int unk11, float unk12);
extern Gfx* textDraw(Gfx* dl, int style, int x, int y, char* str);
extern int cstring_strlen(char* str);
extern int getTextStyleHeight(int style);
extern Gfx* displayText(Gfx* dl, int style, int x, int y, void* text_pointer, char unk0);

extern void audioForcePlay(int slot);
extern void setSlotTempo(int slot, int tempo);
extern void setSongTempo(int song, float tempo);
extern void restartSong(int write_slot, int song, float volume);
extern char getSongWriteSlot(short song);
extern void alCSPStop(ALCSPlayer* seqp);
extern void alCSPPlay(ALCSPlayer* seqp);
extern ALVoiceState* cseqpAllocateVoice(ALCSPlayer* player, char note, char velocity, char channel);
extern void cseqpFreeVoice(ALCSPlayer* player, ALVoice* voice);
extern void unkSynthFunction(int curSamples, char unkChar, int effectsBus, int* unkInt);

extern int samplesTilNextCallback(void* player);

// Vanilla data
extern f32 TransitionSpeed;
extern s8 CutsceneWillPlay;
extern s8 KRoolRound;
extern KongBase MovesBase[6];
extern s32 PlayerOneColor;
extern s8 Mode;
extern s8 TBVoidByte;
extern s32 CurrentMap;
extern s32 DestMap;
extern s32 DestExit;
extern u16 ParentMap;
extern s8 StorySkip;
extern s8 HelmTimerShown;
extern s8 TempFlagBlock[0x10];
extern submapInfo SubmapData;
extern s8 HelmTimerPaused;
extern s32 LagBoost;
extern s32 FrameLag;
extern s32 FrameReal;
extern s32 RNG;
extern s8 LogosDestMap;
extern s8 LogosDestMode;
extern s8 Gamemode;
extern void* ObjectModel2Pointer; // TODO: Object model 2 struct array
extern s32 ObjectModel2Timer;
extern s32 ObjectModel2Count;
extern s32 ObjectModel2Count_Dupe;
extern s16 CutsceneIndex;
extern s16 CutsceneTimer;
extern s8 CutsceneActive;
extern s16 PreviousCameraState;
extern s16 CurrentCameraState;
extern s16 CameraStateChangeTimer;
extern s8 IsAutowalking;
extern WarpInfo PositionWarpInfo;
extern s16 PositionWarpBitfield;
extern f32 PositionFloatWarps[3];
extern u16 PositionFacingAngle;
extern s8 ChimpyCam;
extern s8 ScreenRatio;
extern actorData* CurrentActorPointer;
extern s8 LoadedActorCount;
extern loadedActorArr LoadedActorArray[64];
extern void* ActorSpawnerArrayPointer;
extern RGB MenuSkyTopRGB;
extern RGB MenuSkyRGB;
extern actorData* ActorArray[];
extern s16 ActorCount;
extern s16 ButtonsEnabledBitfield;
extern s8 JoystickEnabledX;
extern s8 JoystickEnabledY;
extern s8 MapState;
extern Controller ControllerInput;
extern Controller NewlyPressedControllerInput;
extern playerData* Player;
extern SwapObjectData* SwapObject;
extern s8 Character;
extern cameraData* Camera;
extern s8 ISGActive;
extern u32 ISGTimestampMajor; // TODO: libultra type (OSTime)
extern u32 ISGTimestampMinor;
extern s8 ISGPreviousFadeout;
extern u32 CurrentTimestampMajor; // TODO: libultra type (OSTime)
extern u32 CurrentTimestampMinor;
extern InventoryBase CollectableBase;
extern s8 ModelTwoTouchCount;
extern s16 ModelTwoTouchArray[4];
extern s8 TransitionProgress;
extern Controller BackgroundHeldInput;
extern u32 PauseTimestampMajor; // TODO: libultra type (OSTime)
extern u32 PauseTimestampMinor;
extern u32 HelmStartTimestampMajor; // TODO: libultra type (OSTime)
extern u32 HelmStartTimestampMinor;
extern s32 HelmStartTime;
extern s16 p1PressedButtons; // TODO: libultra type
extern s16 p1HeldButtons; // TODO: libultra type
extern s8 player_count;
extern s32* sprite_table[0xAF];
extern s8 sprite_translucency;
extern s32* bbbandit_array[4];
extern s8 StoredDamage;
extern void* ActorSpawnerPointer;
extern f32 LZFadeoutProgress;
extern hudData* HUD;

extern s8 preventSongPlaying;
extern ALCSPlayer* SeqPlayers[4];
extern u8 SongInWriteSlot[4];
extern s16 MusicTrackChannels[12];
extern s16 songVolumes[176];
extern ALSynth* synthesizer;

extern collected_item_struct* CollectedObjects;
extern collected_item_struct* LatestCollectedObject;
extern s32 StackTraceX;
extern s32 StackTraceY;
extern s32 StackTraceSize;
extern s32 StackTraceStartX;
extern stack_trace_address_struct StackTraceAddresses[19];
extern char* ReasonExceptions[20];
extern unsigned char ReasonCode;
extern int ReasonValues[3];