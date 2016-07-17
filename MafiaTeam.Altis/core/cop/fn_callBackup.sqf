/*
    Script file made by: Maximum
    Idea based off: Liemans script - did way to much to achieve the same thing.
    Description: Lets a officer request backup VIA scroll menu, made for AltisLifeRPG.com
*/
if(!life_callBackup) exitWith {hint "Você já solicitou reforço aguarde!"};
_backupTime = 60;
[[player,_backupTime],"life_fnc_backupCall",west,false] call life_fnc_MP;
life_callBackup = false;
sleep _backupTime + 320;
life_callBackup = true;
hint format ["%1 você já pode solicitar reforço novamente!",name player];
