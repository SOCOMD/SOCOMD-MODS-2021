#include "script_component.hpp"

[QGVAR(Event_ketamineLocal), {_this call func(ketamineLocal);}] call CBA_fnc_addEventHandler;
[QGVAR(Event_naloxoneLocal), {_this call func(naloxoneLocal);}] call CBA_fnc_addEventHandler;
