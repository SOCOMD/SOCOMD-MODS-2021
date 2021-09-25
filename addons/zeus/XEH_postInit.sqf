#include "script_component.hpp"

if (!hasinterface) exitwith {};

if (typeOf Ace_player == "SOCOM_Homestead") then {
    _curatormodule = createvehicle ["moduleCurator_F", [0, 0, 0], [], 0.5, "NONE"];
    _curatormodule setVariable ["bis_fnc_moduleexecute_activate", true, true];
    _curatormodule setVariable ["bis_fnc_moduleinit_iscuratorplaced", false, true];
    _curatormodule setVariable ["forced", 0, true];
    _curatormodule setVariable ["bis_fnc_moduleinit_status", true, true];
    _curatormodule setVariable ["bis_fnc_initmodules_activate", true, true];
    _curatormodule setVariable ["bis_fnc_initmodules_priroty", 1, true];
    _curatormodule setVariable ["bis_fnc_moduleexecute_first", false, true];
    _curatormodule setVariable ["addons", 3, true];
    
    // Add addons to curator
    _cfgAddons = "true" configClasses (configFile >> "CfgPatches");
    _addons = [];
    {
        _addons = _addons + [configname _x];
    }forEach(_cfgAddons);
    _curatormodule addcuratoraddons _addons;
    Ace_player assignCurator _curatormodule;
};