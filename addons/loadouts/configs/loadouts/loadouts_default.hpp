#include "\z\socomd\addons\loadouts\script_component.hpp"
//////////////////////////////////////////////////////////////////////
// COMMON SOCOMD LOADOUT ITEMS

class Inventory_E {};

class SOCOMD_Uniforms {
	Snow = "USP_OVERWHITE_G3C_MC_SOCOMD";
};

class SOCOMD_Commander{
	primary			= "ACWP_M4A5_145_7rail_GL";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	isCommander		= 1;
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
};
class SOCOMD_TACP{
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	isCommander		= 1;
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
};
class SOCOMD_Leader{
	primary			= "ACWP_M4A5_145_7rail_GL";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	isCommander		= 1;
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
};
class SOCOMD_2IC : SOCOMD_Leader {};
class SOCOMD_Rifleman{
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
};
class SOCOMD_MachineGunner{
	primary			= "CUP_lmg_minimi_railed";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
};
class SOCOMD_Medic{
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
};

class SOCOMD_Marksman{
	primary			= "ACWP_sr25";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	binocular		= "ACE_Yardage450";
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
};
class SOCOMD_Recon {
	primary		    = "Recon_338";
	handgun			= ITEM_DEFAULT_HANDGUN
	handgunMagazine = ITEM_DEFAULT_HANDGUN_MAGAZINE;
	headgear		= ITEM_DEFAULT_HEADGEAR;
	binocular		= LEADER_BINOCS;
	gps			    = "ItemMicroDAGR";
	isRecon			= 1;
	class Uniform
	{
		type = "USP_G3C_KP_MC_RECON";
	};
	class Vest {
		type = ITEM_VEST_RECON;
		class Inventory	{
			LOADOUT_ITEM(5Rnd_338LM_Magazine, 7)
			LOADOUT_ITEM(5Rnd_APDS_338LM_Magazine, 2)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_RECON;
		class Inventory	{
		};
	};
};

class SOCOMD_Recon_Assistant {
	primary			= "ACWP_sr25";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	isRecon			= 1;
	class Uniform
	{
		type = "USP_G3C_KP_MC_RECON";
	};
	class Backpack {
		type = ITEM_BACKPACK_RECON;
		class Inventory	{
		};
	};
};

class SOCOMD_AT {
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	secondary		= "SOCOMD_Carl_Gustav";
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
	class Backpack {
		type = ITEM_BACKPACK_AT;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(tf47_m3maaws_HEAT, 1)
			LOADOUT_ITEM(tf47_m3maaws_HE, 1)
		};
	};
};

class SOCOMD_Sapper {
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
	class Backpack {
		class Inventory	{
			LOADOUT_ITEM(ACE_VMH3, 1)
		};
	};
};
class SOCOMD_Breacher {
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= ITEM_DEFAULT_HEADGEAR;
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
	class Vest {
		class Inventory	{
			LOADOUT_ITEM(CUP_6Rnd_B_Beneli_74Pellets, 5)
		};
	};

	class Backpack {
		class Inventory	{
			LOADOUT_ITEM(SOCOMD_Shotgun, 1)
		};
	};
};
class SOCOMD_Logistician {
	
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= ITEM_DEFAULT_HEADGEAR;	
};
class SOCOMD_Pilot {	
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
};
class SOCOMD_Crewman {	
	class Uniform
	{
		type = "USP_G3C_KP_MC_SOCOMD";
	};
};