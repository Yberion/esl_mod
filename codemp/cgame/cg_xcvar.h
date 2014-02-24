
#ifdef XCVAR_PROTO
	#define XCVAR_DEF( name, defVal, update, flags ) extern vmCvar_t name;
#endif

#ifdef XCVAR_DECL
	#define XCVAR_DEF( name, defVal, update, flags ) vmCvar_t name;
#endif

#ifdef XCVAR_LIST
	#define XCVAR_DEF( name, defVal, update, flags ) { & name , #name , defVal , update , flags },
#endif

XCVAR_DEF( bg_fighterAltControl,				"0",					NULL,					CVAR_SYSTEMINFO )
XCVAR_DEF( broadsword,							"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_animBlend,						"1",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_animSpeed,						"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_auraShell,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_autoSwitch,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_bobPitch,							"0.002",				NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_bobRoll,							"0.002",				NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_bobUp,							"0.005",				NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_cameraOrbit,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_cameraOrbitDelay,					"50",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_centerTime,						"3",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_chatBeep,							"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_chatBox,							"10000",				NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_chatBoxHeight,					"350",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_crosshairHealth,					"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_crosshairSize,					"24",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_crosshairX,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_crosshairY,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_currentSelectedPlayer,			"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_draw2D,							"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_draw3DIcons,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawAmmoWarning,					"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawCrosshair,					"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawCrosshairNames,				"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawEnemyInfo,					"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawFPS,							"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawFriend,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawGun,							"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawIcons,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawRadar,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawRewards,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawScores,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawSnapshot,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawStatus,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawTeamOverlay,					"0",					CG_TeamOverlayChange,	CVAR_ARCHIVE )
XCVAR_DEF( cg_drawTimer,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_drawVehLeadIndicator,				"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_dynamicCrosshair,					"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_dynamicCrosshairPrecision,		"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_debugAnim,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_debugGun,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_debugSaber,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_debugPosition,					"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_debugEvents,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_duelHeadAngles,					"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_dismember,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_deferPlayers,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_errorDecay,						"100",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_fallingBob,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_footsteps,						"3",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_forceModel,						"0",					CG_ForceModelChange,	CVAR_ARCHIVE )
XCVAR_DEF( cg_fov,								"80",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_fovAspectAdjust,					"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_fovViewmodel,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_fovViewmodelAdjust,				"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_fpls,								"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_g2TraceLod,						"2",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_ghoul2Marks,						"16",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_gunX,								"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_gunY,								"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_gunZ,								"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_hudFiles,							"ui/jahud.txt",			NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_jumpSounds,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_lagometer,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_marks,							"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_noFXSoundSets,					"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_noPlayerAnims,					"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_noPredict,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_noProjectileTrail,				"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_noTaunt,							"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_oldPainSounds,					"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_predictItems,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_renderToTextureFX,				"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_repeaterOrb,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_runPitch,							"0.002",				NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_runRoll,							"0.005",				NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_saberClientVisualCompensation,	"1",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_saberContact,						"1",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_saberDynamicMarks,				"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_saberDynamicMarkTime,				"60000",				NULL,					CVAR_NONE )
XCVAR_DEF( cg_saberModelTraceEffect,			"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_saberTrail,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_scorePlums,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_stereoSeparation,					"0.4",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_shadows,							"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_simpleItems,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_showMiss,							"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_showVehBounds,					"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_showVehMiss,						"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_smoothCamera,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_smoothClients,					"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_snapshotTimeout,					"10",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_speedTrail,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_stats,							"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_teamChatBeep,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_teamChatsOnly,					"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_thirdPerson,						"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_thirdPersonAlpha,					"1.0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_thirdPersonAngle,					"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_thirdPersonCameraDamp,			"0.3",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_thirdPersonHorzOffset,			"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_thirdPersonPitchOffset,			"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_thirdPersonRange,					"80",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_thirdPersonSpecialCam,			"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_thirdPersonTargetDamp,			"0.5",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_thirdPersonVertOffset,			"16",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_timescaleFadeEnd,					"1",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_timescaleFadeSpeed,				"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cg_viewsize,							"100",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cg_weaponBob,						"1",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( cl_paused,							"0",					NULL,					CVAR_ROM )
XCVAR_DEF( com_buildScript,						"0",					NULL,					CVAR_NONE )
XCVAR_DEF( com_cameraMode,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( com_optvehtrace,						"0",					NULL,					CVAR_NONE )
XCVAR_DEF( debugBB,								"0",					NULL,					CVAR_NONE )
XCVAR_DEF( forcepowers,							DEFAULT_FORCEPOWERS,	NULL,					CVAR_USERINFO|CVAR_ARCHIVE )
XCVAR_DEF( g_synchronousClients,				"0",					NULL,					CVAR_SYSTEMINFO )
XCVAR_DEF( model,								DEFAULT_MODEL,			NULL,					CVAR_USERINFO|CVAR_ARCHIVE )
XCVAR_DEF( pmove_fixed,							"0",					NULL,					CVAR_SYSTEMINFO )
XCVAR_DEF( pmove_float,							"0",					NULL,					CVAR_SYSTEMINFO )
XCVAR_DEF( pmove_msec,							"8",					NULL,					CVAR_SYSTEMINFO )
XCVAR_DEF( r_autoMap,							"0",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( r_autoMapX,							"496",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( r_autoMapY,							"32",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( r_autoMapW,							"128",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( r_autoMapH,							"128",					NULL,					CVAR_ARCHIVE )
XCVAR_DEF( sv_running,							"0",					CG_SVRunningChange,		CVAR_ROM )
XCVAR_DEF( teamoverlay,							"0",					NULL,					CVAR_ROM|CVAR_USERINFO )
XCVAR_DEF( timescale,							"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( ui_about_gametype,					"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_about_fraglimit,					"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_about_capturelimit,				"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_about_duellimit,					"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_about_timelimit,					"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_about_maxclients,					"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_about_dmflags,					"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_about_mapname,					"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_about_hostname,					"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_about_needpass,					"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_about_botminplayers,				"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_myteam,							"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm1_c0_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm1_c1_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm1_c2_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm1_c3_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm1_c4_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm1_c5_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm1_cnt,							"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm2_c0_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm2_c1_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm2_c2_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm2_c3_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm2_c4_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm2_c5_cnt,						"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm2_cnt,							"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )
XCVAR_DEF( ui_tm3_cnt,							"0",					NULL,					CVAR_ROM|CVAR_INTERNAL )

//[ESL_MOD PROTECTION CVAR UNLOCKER]-->

XCVAR_DEF( cg_thirdPersonTargetDamp,			"0.5",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_ambientScale,						"0.6",					NULL,					CVAR_CHEAT )
XCVAR_DEF( bot_report,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( bot_pause,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( bot_testclusters,					"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( bot_testsolid,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( bot_thinktime,						"100",					NULL,					CVAR_CHEAT )
XCVAR_DEF( bot_visualizejumppads,				"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( bot_debug,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( bot_developer,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cm_noCurves,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cm_noAreas,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( com_dropsim,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( com_terrainPhysics,					"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( com_showtrace,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cm_playerCurveClip,					"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( debuggraph,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( d_patched,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( d_altRoutes,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( fixedtime,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( graphshift,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( graphscale,							"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( graphheight,							"32",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_drawTerrain,						"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_terrainTessellate,					"3",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_noserverghoul2,					"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_noportals,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_lockpvs,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_offsetunits,						"-2",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_offsetfactor,						"-1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_clear,								"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_shownormals,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_showsky,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_debugSurface,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_logFile,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_verbose,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_speeds,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_showcluster,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_novis,								"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_nocull,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_ignore,							"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_drawentities,						"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_norefresh,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_measureOverdraw,					"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_skipBackEnd,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_portalOnly,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_lightmap,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_drawfog,							"2",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_drawworld,							"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_nocurves,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_debugSort,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_showImages,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_directedScale,						"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_roofCeilFloorDist,					"128",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_roofCullCeilDist,					"256",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_cullRoofFaces,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_znear,								"4",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_singleShader,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_fullbright,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_DynamicGlowSoft,					"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( r_DynamicGlowPasses,					"5",					NULL,					CVAR_CHEAT )
XCVAR_DEF( RMG_distancecull,					"5000",					NULL,					CVAR_CHEAT )
XCVAR_DEF( s_debugdynamic,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( s_testsound,							"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( s_show,								"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( timescale,							"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( viewlog,								"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_gunX,								"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_gunY,								"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_gunZ,								"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_centertime,						"3",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_animspeed,						"1",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_debuganim,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_debugsaber,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_debugposition,					"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_debugevents,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_noplayeranims,					"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_thirdPersonRange,					"80",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_thirdPersonAngle,					"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_thirdPersonPitchOffset,			"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_thirdPersonVertOffset,			"16",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_thirdPersonHorzOffset,			"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_cameraOrbit,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( com_cameraMode,						"0",					NULL,					CVAR_CHEAT )
XCVAR_DEF( cg_thirdPersonAlpha,					"1",					NULL,					CVAR_CHEAT )

//<--[ESL_MOD PROTECTION CVAR UNLOCKER]

//[BASEJKA.COM PROTECTION LAG UNLOCKER]-->

XCVAR_DEF( cl_timenudge,						"0",					NULL,					CVAR_NONE )
XCVAR_DEF( cl_maxpackets,						"15",					NULL,					CVAR_NONE )

//<--[BASEJKA.COM PROTECTION LAG UNLOCKER]

#undef XCVAR_DEF
