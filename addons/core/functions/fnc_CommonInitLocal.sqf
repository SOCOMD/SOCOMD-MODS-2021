#include "script_component.hpp"
//Increase drag limit for ACE box draging (800 -> 10000)
missionNamespace setVariable ["ACE_maxWeightDrag", 10000];

// make the bushmaster not have thermal visible
["bma3_bushmaster_base_F", "InitPost", {(_this select 0) disableTIEquipment true;}, true, [], true] call CBA_fnc_addClassEventHandler;

// make the static weapons not have thermal visible
["StaticWeapon", "InitPost", {(_this select 0) disableTIEquipment true;}, true, [], true] call CBA_fnc_addClassEventHandler;

["Helicopter", "InitPost", {
    (_this select 0) addEventHandler["Local", {
            params ["_entity", "_isLocal"];
            if(_isLocal isEqualTo false) exitWith {};

            _vehicle = vehicle _entity;
            if(isNull _vehicle) exitWith {};

            _allCargo = _vehicle getVariable ["ASL_Cargo", []];
            if(count _allCargo <= 0) exitWith {};

            {
                [_x, clientOwner] remoteExecCall ['setOwner',2];
            } foreach _allCargo;
        }];
    },true, [], true
] call CBA_fnc_addClassEventHandler;

["ACRE_VRC110", "InitPost", {[_this select 0] call FUNC(ACRERackInit);}, true, [], true] call CBA_fnc_addClassEventHandler;



if(local player) then {
    player addEventHandler["Put", {
        params ["_unit", "_container", "_item"];
        if(_container isKindOf "SOCOMD_Void_Box") then {
            clearWeaponCargoGlobal _container;
            clearMagazineCargoGlobal _container;
            clearItemCargoGlobal _container;
        };
    }];
};