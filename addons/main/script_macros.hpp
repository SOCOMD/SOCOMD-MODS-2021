#include "\z\ace\addons\main\script_macros.hpp"

//Scope
#define private	0
#define protected 1
#define public 2

//Side
#define NO_SIDE -1
#define EAST 0
#define WEST 1
#define RESISTANCE 2
#define CIVILIAN 3
#define NEUTRAL 4
#define ENEMY 5
#define FRIENDLY 6
#define LOGIC 7

//SOCOMD
#define AUTHOR_STR "SOCOMD Mod"
#define FACTION_STR "SOCOMD"

#define UNIT_SOCOMD_UNARMED "SOCOMD_Unarmed"
#define UNIT_SOCOMD_HOMESTEAD "SOCOMD_Homestead"
#define UNIT_SOCOMD_RIFLEMAN "SOCOMD_Rifleman"
#define UNIT_SOCOMD_PILOT "SOCOMD_Pilot"
#define UNIT_SOCOMD_CREWMAN "SOCOMD_Crewman"

//#define true			1
//#define false			0

#define QUOTE(var1) #var1

#define ITEM01(id) id
#define ITEM02(id) id,id
#define ITEM03(id) id,id,id
#define ITEM04(id) id,id,id,id
#define ITEM05(id) id,id,id,id,id
#define ITEM06(id) id,id,id,id,id,id
#define ITEM07(id) id,id,id,id,id,id,id
#define ITEM08(id) id,id,id,id,id,id,id,id
#define ITEM09(id) id,id,id,id,id,id,id,id,id
#define ITEM10(id) id,id,id,id,id,id,id,id,id,id
#define ITEM11(id) id,id,id,id,id,id,id,id,id,id,id
#define ITEM12(id) id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM13(id) id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM14(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM15(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM16(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM17(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM18(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM19(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM20(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM30(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id


////////////////////////////////////////////////////////////////////////////////
// LOADOUT DEFINES

#define TRANSPORT_MAGAZINE(id,qty) class _xx_##id { magazine = #id; count = qty; };
#define TRANSPORT_ITEM(id,qty) class _xx_##id { name = #id; count = qty; };
#define TRANSPORT_WEAPON(id,qty) class _xx_##id { weapon = #id; count = qty; };
#define TRANSPORT_BACKPACK(id,qty) class _xx_##id { backpack = #id; count = qty; };



// Rifles
#define ITEM_VEHICLE_M4							"ACWP_M4A5_145_troy_AFG_kit"

#define ITEM_PRIMARY_GL	    			        "ACWP_M4A5_145_7rail_GL"
#define ITEM_PRIMARY_M4		         			"ACWP_M4A5_145_troy_base"
#define ITEM_PRIMARY_MARKSMAN		            "ACWP_sr25"
#define ITEM_PRIMARY_MACHINEGUN		            "CUP_lmg_minimi_railed"
#define ITEM_PRIMARY_RECON		                "bnae_falkor_camo1_virtual"
#define ITEM_PRIMARY_SMG	                    "CUP_smg_MP5A5"
#define ITEM_PRIMARY_CREWMAN                    "SMA_Steyr_AUG_F"

#define ITEM_DEFAULT_HANDGUN                    "ACWP_USP"


// Secondary i.e launchers
#define ITEM_DEFAULT_LAUNCHER		        	"SOCOMD_Carl_Gustav"

#define ITEM_DEFAULT_HEADGEAR			        "acwp_airframe_mc"