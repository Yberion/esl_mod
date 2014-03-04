#include "cg_local.h"

//
// Cvar callbacks
//

static void CG_SVRunningChange( void ) {
	cgs.localServer = sv_running.integer;
}

static void CG_ForceModelChange( void ) {
	int i;

	for ( i=0; i<MAX_CLIENTS; i++ ) {
		const char *clientInfo = CG_ConfigString( CS_PLAYERS+i );

		if ( !VALIDSTRING( clientInfo ) )
			continue;

		CG_NewClientInfo( i, qtrue );
	}
}

static void CG_TeamOverlayChange( void ) {
	// If team overlay is on, ask for updates from the server.  If its off,
	// let the server know so we don't receive it
	if ( cg_drawTeamOverlay.integer > 0 && cgs.gametype >= GT_SINGLE_PLAYER)
		trap->Cvar_Set( "teamoverlay", "1" );
	else
		trap->Cvar_Set( "teamoverlay", "0" );
}


//
// Cvar table
//

typedef struct cvarTable_s {
	vmCvar_t	*vmCvar;
	char		*cvarName;
	char		*defaultString;
	void		(*update)( void );
	uint32_t	cvarFlags;
} cvarTable_t;

#define XCVAR_DECL
	#include "cg_xcvar.h"
#undef XCVAR_DECL

static const cvarTable_t cvarTable[] = {
	#define XCVAR_LIST
		#include "cg_xcvar.h"
	#undef XCVAR_LIST
};
static const size_t cvarTableSize = ARRAY_LEN( cvarTable );

void CG_RegisterCvars( void ) {
	size_t i = 0;
	const cvarTable_t *cv = NULL;

	for ( i=0, cv=cvarTable; i<cvarTableSize; i++, cv++ ) {
		trap->Cvar_Register( cv->vmCvar, cv->cvarName, cv->defaultString, cv->cvarFlags );
		if ( cv->update )
			cv->update();
	}
}

void CG_UpdateCvars( void ) {
	size_t i = 0;
	const cvarTable_t *cv = NULL;

	//[ESL_MOD PROTECTION CVAR UNLOCKER]-->

	int j = 0;
	int cvarValue = 0;
	char buf[64] = { 0 };
	const char *esl_tabCmd[] = {	"bot_report", "bot_pause", "bot_testclusters", "bot_testsolid", "bot_thinktime", "bot_visualizejumppads", "bot_debug",
									"bot_developer", "cm_noCurves", "cm_noAreas", "com_dropsim", "com_terrainPhysics", "com_showtrace", "cm_playerCurveClip",
									"debuggraph", "d_patched", "d_altRoutes", "fixedtime", "graphshift", "graphscale", "graphheight", "r_drawTerrain",
									"r_terrainTessellate", "r_noserverghoul2", "r_noportals", "r_lockpvs", "r_offsetunits", "r_offsetfactor", "r_clear",
									"r_shownormals", "r_showsky", "r_debugSurface", "r_logFile", "r_verbose", "r_speeds", "r_showcluster", "r_novis", "r_nocull",
									"r_ignore", "r_drawentities", "r_norefresh", "r_measureOverdraw", "r_skipBackEnd", "r_portalOnly", "r_lightmap", "r_drawfog",
									"r_drawworld", "r_nocurves", "r_debugSort", "r_showImages", "r_directedScale", "r_roofCeilFloorDist", "r_roofCullCeilDist",
									"r_cullRoofFaces", "r_znear", "r_singleShader", "r_fullbright", "r_DynamicGlowSoft", "r_DynamicGlowPasses", "RMG_distancecull",
									"s_debugdynamic", "s_testsound", "s_show", "timescale", "viewlog" /* 65 */, "cg_gunX", "cg_gunY", "cg_gunZ", "cg_centertime",
									"cg_animspeed", "cg_debuganim", "cg_debugsaber", "cg_debugposition", "cg_debugevents", "cg_noplayeranims", "cg_thirdPersonRange",
									"cg_thirdPersonAngle", "cg_thirdPersonPitchOffset", "cg_thirdPersonVertOffset", "cg_thirdPersonHorzOffset", "cg_cameraOrbit",
									"com_cameraMode", "cg_thirdPersonAlpha" /* 83 */ };

	const int esl_tabValue[] = {	0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 32, 1, 3, 0, 0, 0, -2, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
									1, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 1, 128, 256, 0, 4, 0, 0, 1, 5, 5000, 0, 0, 0, 1, 0 /* 65 */, 0, 0, 0, 3, 1, 0, 0, 0, 0,
									0, 80, 0, 0, 16, 0, 0, 0, 1 /* 83 */ };

	static const size_t esl_tabCmdSize = ARRAY_LEN( esl_tabCmd );

//<--[ESL_MOD PROTECTION CVAR UNLOCKER]

	for ( i=0, cv=cvarTable; i<cvarTableSize; i++, cv++ ) {
		if ( cv->vmCvar ) {
			int modCount = cv->vmCvar->modificationCount;
			trap->Cvar_Update( cv->vmCvar );
			if ( cv->vmCvar->modificationCount != modCount ) {
				if ( cv->update )
					cv->update();

			//[ESL_MOD PROTECTION CVAR UNLOCKER]-->

				for (j = 0; j < esl_tabCmdSize ; j++)
				{
					int esl_cvarCheck = 0;

					trap->Cvar_VariableStringBuffer(esl_tabCmd[j], buf, sizeof(buf));
					esl_cvarCheck = atoi( buf );

					if(!Q_stricmp(cv->cvarName, esl_tabCmd[j]) && (esl_cvarCheck != esl_tabValue[j]))
					{
						cvarValue = esl_tabValue[j];
						trap->Cvar_Set( esl_tabCmd[j], va("%d", cvarValue));
						trap->Print( va("^3%s ^7is cheat protected !\n", cv->cvarName) );
					}
				}

				if(!Q_stricmp(cv->cvarName, "cg_thirdPersonTargetDamp") && cg_thirdPersonTargetDamp.integer != 0.5)
				{
					trap->Cvar_Set( "cg_thirdPersonTargetDamp", "0.5" );
					trap->Print( va("^3%s ^7is cheat protected !\n", cv->cvarName) );
				}

				if(!Q_stricmp(cv->cvarName, "r_ambientScale") && r_ambientScale.integer != 0.6)
				{
					trap->Cvar_Set( "r_ambientScale", "0.6" );
					trap->Print( va("^3%s ^7is cheat protected !\n", cv->cvarName ) );
				}

			//<--[ESL_MOD PROTECTION CVAR UNLOCKER]

			}
		}
	}
}
