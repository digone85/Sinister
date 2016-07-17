#include <macro.h>
/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek)
    
    DESCRIPTION:
    Stops players from throwing grenades in safety zones.
    
    CONFIGURATION:
    Edit the #defines below.
*/

#define SAFETY_ZONES [["safe_area_1", 300], ["safe_area_2", 300], ["safe_area_3", 300], ["safe_area_4", 300], ["safe_area_5", 85], ["safe_area_5_1", 50], ["safe_area_5_2", 70], ["safe_area_5_3", 50], ["safe_area_5_4", 50], ["safe_area_6", 140], ["safe_area_6_1", 140]] // Syntax: [["marker1", radius1], ["marker2", radius2], ...]

// Exemplo: [["marker1", radius1], ["marker2", radius2], ...]

#define MESSAGE "Você está em uma safe zone, é proibido cometer crimes aqui!"

     if (isDedicated) exitWith {};
     waitUntil {!isNull player};

    switch (playerSide) do
{
	case west:
	{
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
				_x allowDamage false;
			};
	};
	
	case civilian:
	{


     player addEventHandler ["Fired", {
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
				 deleteVehicle (_this select 6);
				 titleText [MESSAGE, "PLAIN", 3];
             };
        }];  
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
				_x allowDamage false;
			};
	};
	
	case independent:
	{

     player addEventHandler ["Fired", {
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
				 deleteVehicle (_this select 6);
				 titleText [MESSAGE, "PLAIN", 3];
             };
        }];  
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
				_x allowDamage false;
			};
	};
};

