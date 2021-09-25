#include "script_component.hpp"

if (!hasinterface) exitwith {};

if (ACE_player typeOf == "SOCOM_Homestead") then {
    ace_zeus_zeus = objNull;
    ["ace_zeus_createZeus", ACE_player] call CBA_fnc_serverEvent;
};