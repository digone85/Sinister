/*
	File: init.sqf
	Author: 
	
	Description:
	
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\fn_statusBar.sqf";
[] execVM "scripts\safezone.sqf";
[] execVM "scripts\time.sqf";
[] execVM "scripts\fastrope.sqf";
[] execVM "scripts\effects.sqf";

[
    5*60, // seconds to delete dead bodies (0 means don't delete)
    5*60, // seconds to delete dead vehicles (0 means don't delete)
    0, // seconds to delete immobile vehicles (0 means don't delete)
    0, // seconds to delete dropped weapons (0 means don't delete)
    0, // seconds to deleted planted explosives (0 means don't delete)
    5*60 // seconds to delete dropped smokes/chemlights (0 means don't delete)
] execVM 'scripts\cleanup.sqf';

StartProgress = true;

//fuck you fog
[] spawn {
	while{true} do {
		sleep 10;
		200 setFog 0;
		sleep 590;
	};
};
//fuck you rain
[] spawn {
	while{true} do {
		sleep 10;
		200 setRain 0;
		sleep 590;
	};
};
