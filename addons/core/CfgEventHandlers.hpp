class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};
class Extended_Init_EventHandlers {
    class bma3_bushmaster_unarmed_F {
        class bushie_Damage_eh {
            init = "[_this select 0] execVM '\socomd_core\functions\utils\fn_BushMasterInit.sqf'";
        };    
    };

    class Man {
        class DefaultSkill_eh {
            init="_cfg = (configfile >> 'CfgVehicles' >> (typeOf (_this select 0)) >> 'skill');if(isNumber _cfg) then { (_this select 0) setSkill (getNumber(_cfg));};";
        };
    };
};
