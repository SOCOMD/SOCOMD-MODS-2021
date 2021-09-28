#include "script_component.hpp"
_args = _this;
_player = _args select 0;
_weaponId = _args select 1;

_loadoutWeaponConfig = (missionConfigFile >> "CfgLoadoutWeapons" >> _weaponId);
if(isNull _loadoutWeaponConfig) then {
    _loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);
};

//Return if no config is available
if(isNull _loadoutWeaponConfig) exitWith { };

_currentPrimary = primaryWeapon _player;

_primary = _player getVariable ["SOCOMD_prev_primary", _currentPrimary];

_primaryMagazines = ["SOCOMD_Item_Magazine_556x45_30Rnd", "1Rnd_HE_Grenade_shell", "UGL_FlareRed_F", "1Rnd_SmokeRed_Grenade_shell", "ACE_HuntIR_M203"];
_primaryMagazines = _primaryMagazines + getArray(configFile >> "CfgWeapons" >> _primary >> "magazines");
_primaryMagazines = _primaryMagazines + getArray(configFile >> "CfgWeapons" >> _primary >> "EGLM" >> "magazines");
_primaryMagazineWells = getArray(configFile >> "CfgWeapons" >> _primary >> "magazineWell");

//Get magazines from magazine wells
{
    _magazineWellConfig = (configFile >> "CfgMagazineWells" >> _x);
    for "_i" from 0 to (count _magazineWellConfig) - 1 do {
        _primaryMagazines = _primaryMagazines + getArray(_magazineWellConfig select _i);
    };
}foreach(_primaryMagazineWells);

//Remove primary magazines from player
{
    _primaryMagazine = _x;
    {
        if(_x isKindOf [_primaryMagazine, configFile >> 'CfgMagazines']) then {
             _player removeMagazines _x;
        };
    }foreach(magazines _player);
}foreach(_primaryMagazines);

//Set Primary Weapon
_unitLoadout = getUnitLoadout _player;

_primaryLoadout = _unitLoadout select 0;
if(count _primaryLoadout <= 0) then {
    _primaryLoadout = [_weaponId, "", "", "", [], [], ""];
}
else {
    _primaryLoadout set [0, _weaponId];
    _primaryLoadout set [4, []];
    _primaryLoadout set [5, []];
};

_unitLoadout set [0, _primaryLoadout];

[_player, _unitLoadout] call FUNC(SetUnitLoadout);

//Give Magazines
_loadoutId = _player getVariable ["SOCOMD_LOADOUTID","failed"];
_loadoutMagazines = getArray (_loadoutWeaponConfig >> "magazines");
if(count _loadoutMagazines > 0) then  {
    {
        _magazine = _x select 0;
        _magazineCount = _x select 1;
        if( _loadoutId ==  "SOCOMD_Rifleman" ) then  {
            _magazineCount = _magazineCount + 4;
        };
        _player addMagazines[_magazine, _magazineCount];
    } forEach _loadoutMagazines;
};

// commandGrenades
if (_loadoutId ==  "SOCOMD_Commander" || _loadoutId ==  "SOCOMD_2IC" || _loadoutId ==  "SOCOMD_Leader") then {
    commandGrenades = getArray (_loadoutWeaponConfig >> "commandGrenades");
    if(count commandGrenades > 0) then  {
        {
            _magazine = _x select 0;
            _magazineCount = _x select 1;
            _player addMagazines[_magazine, _magazineCount];
        } forEach commandGrenades;
    };
};