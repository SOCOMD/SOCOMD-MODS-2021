#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"SOCOMD_QStore_LOWVIS","SOCOMD_QStore_RUS","SOCOMD_QStore"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"socomd_core"};
        author = "";
        authors[] = {"SOCOMD J4"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"