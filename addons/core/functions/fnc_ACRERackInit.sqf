#include "script_component.hpp"
_rack = _this select 0;
_rackId = typeof _rack;

_vehicle = [_rackId] call acre_sys_rack_fnc_getVehicleFromRack;
if(_vehicle == objNull) exitWith {};

[_vehicle, _rackId] spawn {
	_vehicle = _this select 0;
	_rackId = _this select 1;

	waitUntil {(_vehicle getVariable ["acre_sys_rack_initialized", False])};

	if(!(local _vehicle)) exitWith {};

	waitUntil {
		_radioId = [_rackId] call acre_api_fnc_getMountedRackRadio;
		_valid = (_radioId != "" && _radioId != "ACRE_PRC152");
		_valid
	};

	_radioId = [_rackId] call acre_api_fnc_getMountedRackRadio;
	if(_radioId == "") exitWith {};

	[_radioId, 1] call acre_api_fnc_setRadioChannel;
	[_radioId, 0.7] call acre_sys_radio_fnc_setRadioVolume;
	[_radioId, "setState", ["audioPath", "INTAUDIO"]] call acre_sys_data_fnc_dataEvent;
};