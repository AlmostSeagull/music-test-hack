typedef enum maps {
	/* 0x000 */ MAP_TESTMAP,
    /* 0x001 */ MAP_FUNKY,
    /* 0x002 */ MAP_DKARCADE,
    /* 0x003 */ MAP_HELMBARREL_LANKYMAZE,
    /* 0x004 */ MAP_JAPESMOUNTAIN,
    /* 0x005 */ MAP_CRANKY,
    /* 0x006 */ MAP_JAPESMINECART,
    /* 0x007 */ MAP_JAPES,
    /* 0x008 */ MAP_JAPESDILLO,
    /* 0x009 */ MAP_JETPAC,
    /* 0x00A */ MAP_KOSH_VEASY,
    /* 0x00B */ MAP_SNOOP_NORMALNOLOGO,
    /* 0x00C */ MAP_JAPESSHELL,
    /* 0x00D */ MAP_JAPESPAINTING,
    /* 0x00E */ MAP_AZTECBEETLE,
    /* 0x00F */ MAP_SNIDE,
    /* 0x010 */ MAP_AZTECTINYTEMPLE,
    /* 0x011 */ MAP_HELM,
    /* 0x012 */ MAP_TURTLES_VEASY,
    /* 0x013 */ MAP_AZTEC5DTDK,
    /* 0x014 */ MAP_AZTECLLAMATEMPLE,
    /* 0x015 */ MAP_AZTEC5DTDIDDY,
    /* 0x016 */ MAP_AZTEC5DTTINY,
    /* 0x017 */ MAP_AZTEC5DTLANKY,
    /* 0x018 */ MAP_AZTEC5DTCHUNKY,
    /* 0x019 */ MAP_CANDY,
    /* 0x01A */ MAP_FACTORY,
    /* 0x01B */ MAP_FACTORYCARRACE,
    /* 0x01C */ MAP_HELM_INTROSGAMEOVER,
    /* 0x01D */ MAP_FACTORYPOWERSHED,
    /* 0x01E */ MAP_GALLEON,
    /* 0x01F */ MAP_GALLEONSEASICKSHIP,
    /* 0x020 */ MAP_BATTYBARREL_VEASY,
    /* 0x021 */ MAP_JAPESUNDERGROUND,
    /* 0x022 */ MAP_ISLES,
    /* 0x023 */ MAP_HELMBARREL_TARGET,
    /* 0x024 */ MAP_FACTORYCRUSHER,
    /* 0x025 */ MAP_JAPESBBLAST,
    /* 0x026 */ MAP_AZTEC,
    /* 0x027 */ MAP_GALLEONSEALRACE,
    /* 0x028 */ MAP_NINTENDOLOGO,
    /* 0x029 */ MAP_AZTECBBLAST,
    /* 0x02A */ MAP_TROFFNSCOFF,
    /* 0x02B */ MAP_GALLEON5DSDIDDYLANKYCHUNKY,
    /* 0x02C */ MAP_GALLEONTREASURECHEST,
    /* 0x02D */ MAP_GALLEONMERMAID,
    /* 0x02E */ MAP_GALLEON5DSDKTINY,
    /* 0x02F */ MAP_GALLEON2DS,
    /* 0x030 */ MAP_FUNGI,
    /* 0x031 */ MAP_GALLEONLIGHTHOUSE,
    /* 0x032 */ MAP_HELMBARREL_MUSHROOMBOUNCE,
    /* 0x033 */ MAP_GALLEONMECHFISH,
    /* 0x034 */ MAP_FUNGIANTHILL,
    /* 0x035 */ MAP_BATTLEARENA_BEAVERBRAWL,
    /* 0x036 */ MAP_GALLEONBBLAST,
    /* 0x037 */ MAP_FUNGIMINECART,
    /* 0x038 */ MAP_FUNGIDIDDYBARN,
    /* 0x039 */ MAP_FUNGIDIDDYATTIC,
    /* 0x03A */ MAP_FUNGILANKYATTIC,
    /* 0x03B */ MAP_FUNGIDKBARN,
    /* 0x03C */ MAP_FUNGISPIDER,
    /* 0x03D */ MAP_FUNGIMILLFRONT,
    /* 0x03E */ MAP_FUNGIMILLREAR,
    /* 0x03F */ MAP_FUNGIMUSHROOMSLAM,
    /* 0x040 */ MAP_FUNGIGIANTMUSHROOM,
    /* 0x041 */ MAP_SNOOP_NORMAL,
    /* 0x042 */ MAP_MAUL_HARD,
    /* 0x043 */ MAP_SNATCH_NORMAL,
    /* 0x044 */ MAP_MAUL_EASY,
    /* 0x045 */ MAP_MAUL_NORMAL,
    /* 0x046 */ MAP_FUNGIMUSHROOMLEAP,
    /* 0x047 */ MAP_FUNGISHOOTINGGAME,
    /* 0x048 */ MAP_CAVES,
    /* 0x049 */ MAP_BATTLEARENA_KRITTERKARNAGE,
    /* 0x04A */ MAP_SNATCH_EASY,
    /* 0x04B */ MAP_SNATCH_HARD,
    /* 0x04C */ MAP_DKRAP,
    /* 0x04D */ MAP_MMAYHEM_EASY,
    /* 0x04E */ MAP_BARRAGE_EASY,
    /* 0x04F */ MAP_BARRAGE_NORMAL,
    /* 0x050 */ MAP_MAINMENU,
    /* 0x051 */ MAP_NFRTITLESCREEN,
    /* 0x052 */ MAP_CAVESBEETLERACE,
    /* 0x053 */ MAP_FUNGIDOGADON,
    /* 0x054 */ MAP_CAVES5DITINY,
    /* 0x055 */ MAP_CAVES5DILANKY,
    /* 0x056 */ MAP_CAVES5DIDK,
    /* 0x057 */ MAP_CASTLE,
    /* 0x058 */ MAP_CASTLEBALLROOM,
    /* 0x059 */ MAP_CAVESROTATINGROOM,
    /* 0x05A */ MAP_CAVES5DCCHUNKY,
    /* 0x05B */ MAP_CAVES5DCDK,
    /* 0x05C */ MAP_CAVES5DCDIDDYLOW,
    /* 0x05D */ MAP_CAVES5DCTINY,
    /* 0x05E */ MAP_CAVES1DC,
    /* 0x05F */ MAP_CAVES5DICHUNKY,
    /* 0x060 */ MAP_SALVAGE_NORMAL,
    /* 0x061 */ MAP_KLUMSY,
    /* 0x062 */ MAP_CAVESTILEFLIP,
    /* 0x063 */ MAP_SORTIE_EASY,
    /* 0x064 */ MAP_CAVES5DIDIDDY,
    /* 0x065 */ MAP_KLAMOUR_EASY,
    /* 0x066 */ MAP_BASH_VEASY,
    /* 0x067 */ MAP_SEARCHLIGHT_VEASY,
    /* 0x068 */ MAP_BBOTHER_EASY,
    /* 0x069 */ MAP_CASTLETOWER,
    /* 0x06A */ MAP_CASTLEMINECART,
    /* 0x06B */ MAP_MULTIPLAYERBATTLEARENA,
    /* 0x06C */ MAP_CASTLECRYPTLANKYTINY,
    /* 0x06D */ MAP_MULTIPLAYERARENA1,
    /* 0x06E */ MAP_FACTORYBBLAST,
    /* 0x06F */ MAP_GALLEONPUFFTOSS,
    /* 0x070 */ MAP_CASTLECRYPTDKDIDDYCHUNKY,
    /* 0x071 */ MAP_CASTLEMUSEUM,
    /* 0x072 */ MAP_CASTLELIBRARY,
    /* 0x073 */ MAP_KOSH_EASY,
    /* 0x074 */ MAP_KOSH_NORMAL,
    /* 0x075 */ MAP_KOSH_HARD,
    /* 0x076 */ MAP_TURTLES_EASY,
    /* 0x077 */ MAP_TURTLES_NORMAL,
    /* 0x078 */ MAP_TURTLES_HARD,
    /* 0x079 */ MAP_BATTYBARREL_EASY,
    /* 0x07A */ MAP_BATTYBARREL_NORMAL,
    /* 0x07B */ MAP_BATTYBARREL_HARD,
    /* 0x07C */ MAP_MAUL_INSANE,
    /* 0x07D */ MAP_SNATCH_INSANE,
    /* 0x07E */ MAP_SNOOP_VEASY,
    /* 0x07F */ MAP_SNOOP_EASY,
    /* 0x080 */ MAP_SNOOP_HARD,
    /* 0x081 */ MAP_MMAYHEM_NORMAL,
    /* 0x082 */ MAP_MMAYHEM_HARD,
    /* 0x083 */ MAP_BARRAGE_HARD,
    /* 0x084 */ MAP_SALVAGE_HARD,
    /* 0x085 */ MAP_SALVAGE_EASY,
    /* 0x086 */ MAP_SORTIE_NORMAL,
    /* 0x087 */ MAP_SORTIE_HARD,
    /* 0x088 */ MAP_BBOTHER_NORMAL,
    /* 0x089 */ MAP_BBOTHER_HARD,
    /* 0x08A */ MAP_SEARCHLIGHT_EASY,
    /* 0x08B */ MAP_SEARCHLIGHT_NORMAL,
    /* 0x08C */ MAP_SEARCHLIGHT_HARD,
    /* 0x08D */ MAP_KLAMOUR_NORMAL,
    /* 0x08E */ MAP_KLAMOUR_HARD,
    /* 0x08F */ MAP_KLAMOUR_INSANE,
    /* 0x090 */ MAP_PPPANIC_VEASY,
    /* 0x091 */ MAP_PPPANIC_EASY,
    /* 0x092 */ MAP_PPPANIC_NORMAL,
    /* 0x093 */ MAP_PPPANIC_HARD,
    /* 0x094 */ MAP_BASH_EASY,
    /* 0x095 */ MAP_BASH_NORMAL,
    /* 0x096 */ MAP_BASH_HARD,
    /* 0x097 */ MAP_CASTLEDUNGEON,
    /* 0x098 */ MAP_HELM_INTROSTORY,
    /* 0x099 */ MAP_ISLES_DKTHEATRE,
    /* 0x09A */ MAP_FACTORYJACK,
    /* 0x09B */ MAP_BATTLEARENA_ARENAAMBUSH,
    /* 0x09C */ MAP_BATTLEARENA_MOREKRITTERKARNAGE,
    /* 0x09D */ MAP_BATTLEARENA_FORESTFRACAS,
    /* 0x09E */ MAP_BATTLEARENA_BISHBASHBRAWL,
    /* 0x09F */ MAP_BATTLEARENA_KAMIKAZEKREMLINGS,
    /* 0x0A0 */ MAP_BATTLEARENA_PLINTHPANIC,
    /* 0x0A1 */ MAP_BATTLEARENA_PINNACLEPALAVER,
    /* 0x0A2 */ MAP_BATTLEARENA_SHOCKWAVESHOWDOWN,
    /* 0x0A3 */ MAP_CASTLEBASEMENT,
    /* 0x0A4 */ MAP_CASTLETREE,
    /* 0x0A5 */ MAP_HELMBARREL_RANDOMKREMLING,
    /* 0x0A6 */ MAP_CASTLESHED,
    /* 0x0A7 */ MAP_CASTLETRASH,
    /* 0x0A8 */ MAP_CASTLEGREENHOUSE,
    /* 0x0A9 */ MAP_JAPESLOBBY,
    /* 0x0AA */ MAP_HELMLOBBY,
    /* 0x0AB */ MAP_TREEHOUSE,
    /* 0x0AC */ MAP_ISLES_INTROSTORYROCK,
    /* 0x0AD */ MAP_AZTECLOBBY,
    /* 0x0AE */ MAP_GALLEONLOBBY,
    /* 0x0AF */ MAP_FACTORYLOBBY,
    /* 0x0B0 */ MAP_TRAININGGROUNDS,
    /* 0x0B1 */ MAP_TBARREL_DIVE,
    /* 0x0B2 */ MAP_FUNGILOBBY,
    /* 0x0B3 */ MAP_GALLEONSUBMARINE,
    /* 0x0B4 */ MAP_TBARREL_ORANGE,
    /* 0x0B5 */ MAP_TBARREL_BARREL,
    /* 0x0B6 */ MAP_TBARREL_VINE,
    /* 0x0B7 */ MAP_CASTLECRYPT,
    /* 0x0B8 */ MAP_ENGUARDEARENA,
    /* 0x0B9 */ MAP_CASTLECARRACE,
    /* 0x0BA */ MAP_CAVESBBLAST,
    /* 0x0BB */ MAP_CASTLEBBLAST,
    /* 0x0BC */ MAP_FUNGIBBLAST,
    /* 0x0BD */ MAP_FAIRYISLAND,
    /* 0x0BE */ MAP_MULTIPLAYERARENA2,
    /* 0x0BF */ MAP_RAMBIARENA,
    /* 0x0C0 */ MAP_MULTIPLAYERARENA3,
    /* 0x0C1 */ MAP_CASTLELOBBY,
    /* 0x0C2 */ MAP_CAVESLOBBY,
    /* 0x0C3 */ MAP_ISLES_SNIDEROOM,
    /* 0x0C4 */ MAP_CAVESDILLO,
    /* 0x0C5 */ MAP_AZTECDOGADON,
    /* 0x0C6 */ MAP_TRAININGGROUNDS_ENDSEQUENCE,
    /* 0x0C7 */ MAP_CASTLEKUTOUT,
    /* 0x0C8 */ MAP_CAVESSHACKDIDDYHIGH,
    /* 0x0C9 */ MAP_HELMBARREL_ROCKETBARREL,
    /* 0x0CA */ MAP_HELMBARREL_LANKYSHOOTING,
    /* 0x0CB */ MAP_KROOLDK,
    /* 0x0CC */ MAP_KROOLDIDDY,
    /* 0x0CD */ MAP_KROOLLANKY,
    /* 0x0CE */ MAP_KROOLTINY,
    /* 0x0CF */ MAP_KROOLCHUNKY,
    /* 0x0D0 */ MAP_BLOOPERSENDING,
    /* 0x0D1 */ MAP_HELMBARREL_HIDDENKREMLING,
    /* 0x0D2 */ MAP_HELMBARREL_FLOORISLAVA,
    /* 0x0D3 */ MAP_HELMBARREL_CHUNKYSHOOTING,
    /* 0x0D4 */ MAP_HELMBARREL_RAMBI,
    /* 0x0D5 */ MAP_KLUMSYENDING,
    /* 0x0D6 */ MAP_KROOLSHOE,
    /* 0x0D7 */ MAP_KROOLARENA,
} maps;

typedef enum flagtypes {
	/* 0x000 */ FLAGTYPE_PERMANENT,
	/* 0x001 */ FLAGTYPE_GLOBAL,
	/* 0x002 */ FLAGTYPE_TEMPORARY,
} flagtypes;