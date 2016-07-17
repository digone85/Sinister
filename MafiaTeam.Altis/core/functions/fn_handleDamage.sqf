#include "..\..\script_macros.hpp"
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = SEL(_this,0);
_part = SEL(_this,1);
_damage = SEL(_this,2);
_source = SEL(_this,3);
_projectile = SEL(_this,4);

//Handle the tazer first (Top-Priority).
if(!isNull _source) then {
	if(_source != _unit) then {
		_curWep = currentWeapon _source;
		if(_projectile in ["B_9x21_Ball","B_556x45_dual"] && _curWep in ["hgun_P07_snds_F","arifle_SDAR_F"]) then {
			if(side _source == west && playerSide == civilian) then {
				private["_distance"];
				_distance = if(_projectile == "B_556x45_dual") then {100} else {35};
				_damage = false;
				if(_unit distance _source < _distance) then {
					if(!life_istazed && !life_isknocked && !(_unit GVAR ["restrained",false])) then {
						if (vehicle player != player) then {
							if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
								player action ["Eject",vehicle player];
								[_unit,_source] spawn life_fnc_tazed;
							};
						} else {
							[_unit,_source] spawn life_fnc_tazed;
						};
					};
				};
			};

			//Temp fix for super tasers on cops.
			if(side _source == west && (playerSide == west OR playerSide == independent)) then {
				_damage = false;
			};
		};
	};
};

	//THIS IS WHERE THE NEW VDM STOPPER IS ADDED - REMOVE IF BUGGED
	if (vehicle _unit == _unit) then
	{
	if ( _source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Boat" ) then
	{
	diag_log "_Source is Vehicle, Not a player driving a vehicle"
	}
	else
	{
	

	_isVehicle = vehicle _source;
	if (_isVehicle isKindOf "Air" OR _isVehicle isKindOf "Car" OR _isVehicle isKindOf "Boat") then
	{
	_damage = 0.001;
	[[player,"amovppnemstpsraswrfldnon"],"life_fnc_animSync",true,false] spawn life_fnc_MP;
	};
	};
	};
	

	

	

	[] call life_fnc_hudUpdate;
	_damage;
