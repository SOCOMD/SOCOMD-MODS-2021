#include "script_component.hpp"

[{
    params ["_args","_pfhId"];
    _args params ["_veh"];
    _smoke = objNull; 
    _veh addEventHandler ["Deleted", {   
        _pfhId call CBA_fnc_removePerFrameHandler;
        if ( ! isNull _smoke) then { 
        deleteVehicle _smoke;  
        }; 
    }]; 
    
    _motor = _veh getHit "motor"; 
    if (_motor == 1 && isNull _smoke) then { 
        _smoke = "#particlesource" createVehicleLocal position _veh;
        _smoke setParticleClass "AirObjectDestructionSmoke";
        _smoke attachTo [_veh,[0,0,0.8]];
    }; 
    if( _motor < 1.0 && ! isNull _smoke ) then { 
        deleteVehicle _smoke; 
    }; 
}, 1, [_this select 0]] call CBA_fnc_addPerFrameHandler;