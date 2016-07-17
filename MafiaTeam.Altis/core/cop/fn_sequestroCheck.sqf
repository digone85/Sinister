/*
	File: fn_sequestroCheck.sqf
	Author: Al Morise (Sink)
	Description:
	Rimuove equipaggiamento illegale dalla unit
*/

private ["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if (isNull _unit) exitWith {};
if (player distance _unit > 5 || !alive player || !alive _unit) exitWith {};
_action = [format ["Apreender os objetos ilegais de %1?",name _unit],"Confirma o pedido de apreensão","Sim","Não"] call BIS_fnc_guiMessage;
if(_action) then {
hint format["Apreendendo os objetos ilegais de %1. Por favor, espere...",name _unit];
[[player],"life_fnc_sequestra",_unit,false] spawn life_fnc_MP;
sleep 3;
hint "Objetos ilegais apreendidos.";
};
