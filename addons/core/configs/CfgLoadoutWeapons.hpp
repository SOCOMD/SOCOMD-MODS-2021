#include "\z\socomd\addons\core\script_component.hpp"
class CfgLoadoutWeapons {
	class Rifle_556 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_556x45_30Rnd", 8}
		};
	};

	class RifleGL_556 { 
		magazines[] = {
			{"SOCOMD_Item_Magazine_556x45_30Rnd", 8},
			{"1Rnd_HE_Grenade_shell", 8}
		};
		commandGrenades[] = {
			{"UGL_FlareRed_F", 2},
			{"1Rnd_SmokeRed_Grenade_shell", 2},
			{"ACE_HuntIR_M203", 3}
		};
	};
	class Rifle_545 {
		magazines[] = {
			{"CUP_30Rnd_545x39_AK74M_M", 8}
		};
	};

	class MachineGun_556 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_556x45_200Rnd_Tracer", 5}
		};
	};

	class MachineGun_762 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_762x51_100Rnd_Tracer", 6}
		};
	};
	class MachineGun_762_heavy {
		magazines[] = {
			{"SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", 6}
		};
	};

	class Rifle_762 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_762x51_20Rnd", 8}
		};
	};
	class Sniper_762x54R {
		magazines[] = {
			{"CUP_10Rnd_762x54_SVD_M", 14}
		};
	};
	
	class Rifle_300 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_300_5Rnd", 12}
		};
	};
	class SSO_Rifle_338 {
		magazines[] ={
			{"AGE_10Rnd_338_Mag",8}
		};
	};

	class SOCOMD_SSO_RPK {
		magazines[]={
			{"CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",7}
		};
	};
	class SOCOMD_pkp_acc {
		magazines[]={
			{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",5}
		};		
	};
	class SOCOMD_SSO_AK_GL {
		magazines[] = {
			{"CUP_30Rnd_545x39_AK74M_camo_M", 8},
			{"CUP_1Rnd_HE_GP25_M", 8}
		};
		commandGrenades[] = {
			{"CUP_FlareRed_GP25_M", 2},
			{"CUP_1Rnd_SmokeRed_GP25_M", 2},
			{"ACE_HuntIR_M203", 3}
		};
	};
	class Recon_Barret  {
		magazines[] = {
			{"SOCOMD_Item_Magazine_Barret", 6}
		};
	};
	class Recon_338 {
		magazines[] = {
			{"5Rnd_338LM_Magazine", 7},
			{"5Rnd_APDS_338LM_Magazine", 2}
		};
	};
	class PISTOL_USP {
		magazines[] ={
			{"ACWP_18Rnd_9x21_Mag_USP",3}
		};		
	}
	class PISTOL_HP {
		magazines[] ={
			{"ACWP_13Rnd_9x21_Mag_HP",3}
		};		
	}
	class PISTOL_GLOCK {
		magazines[] ={
			{"ACWP_19Rnd_9x21_Mag_glock",3}
		};		
	}
	class Launcher {
		magazines[] = {};
	};
	class SOCOMD_RPG7{
		
		magazines[] ={
			{"CUP_PG7VM_M",1},
			{"CUP_OG7_M",2}
		};
	};
};