#include "script_component.hpp"
[ACE_player] params ["_unit"]; 
_items = vestItems _unit;
switch (vest _unit) do { 
 case "acwp_pc_operator_s7_closed" :{_unit addVest "acwp_pc_operator_s7_open"}; 
 case "acwp_pc_operator_radioback_s7_closed" :{_unit addVest "acwp_pc_operator_radioback_s7_open"}; 
 case "acwp_pc_operator_top_s7_closed" :{_unit addVest "acwp_pc_operator_top_s7_open"}; 
 case "acwp_pc_tacp_antennaup_s7_closed" :{_unit addVest "acwp_pc_tacp_antennaup_s7_open"}; 
 case "acwp_pc_tacp_antenna_s7_closed" :{_unit addVest "acwp_pc_tacp_antenna_s7_open"}; 
};
[{ 
 isNull findDisplay 177382
},{ 
 params ["_unit","_items"]; 

 switch (vest _unit) do { 
  case "acwp_pc_operator_s7_open" :{_unit addVest "acwp_pc_operator_s7_closed"}; 
  case "acwp_pc_operator_radioback_s7_open" :{_unit addVest "acwp_pc_operator_radioback_s7_closed"}; 
  case "acwp_pc_operator_top_s7_open" :{_unit addVest "acwp_pc_operator_top_s7_closed"}; 
  case "acwp_pc_tacp_antennaup_s7_open" :{_unit addVest "acwp_pc_tacp_antennaup_s7_closed"}; 
  case "acwp_pc_tacp_antenna_s7_open" :{_unit addVest "acwp_pc_tacp_antenna_s7_closed"}; 
 };{
_unit addItemToVest _x;
} forEach _items;  
},[_unit, _items]] call CBA_fnc_waitUntilAndExecute;
