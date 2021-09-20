#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"socomd_main"};
        author = "";
        authors[] = {"SOCOMD J4"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
