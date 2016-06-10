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
[] execVM "zlt_fastrope.sqf";

StartProgress = true;
