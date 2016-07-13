/*
file: fn_robShops.sqf
Description:
Executes the rob shob action!
*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
//_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (https://community.bistudio.com/wiki/addAction). Give it a try and post below ;)
_action = [_this,2] call BIS_fnc_param;//Action name

if(side _robber != civilian) exitWith { hint "Você não pode roubar este caixa!" };
if(_robber distance _shop > 5) exitWith { hint "Você precisa estar dentro de 5m para roubá-lo!" };

if !(_kassa) then { _kassa = 600; };
if (_rip) exitWith { hint "O roubo já está em andamento!" };
if (vehicle player != _robber) exitWith { hint "Saia do seu veículo!" };

if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "Você não me ameaça! Saia daqui seu merda!" };
if (_kassa == 0) exitWith { hint "Não há dinheiro no caixa!" };

_rip = true;
_kassa = 100000 + round(random 150000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);
if(_chance >= 10) then { hint "O caixa acionou o alarme silencioso, a polícia foi alertada!"; [[1,format["ALARME! - CASA DA MOEDA: %1 está sendo roubado!", _shop]],"life_fnc_broadcast",west,false] spawn life_fnc_MP; };
[[1,format["%1 está roubando a casa da moeda!", profileName]],"life_fnc_broadcast",true,false] spawn BIS_fnc_MP;
_marker = createMarker [format["Marker%1",_shop], _pos];
_marker setMarkerColor "ColorRed";
_marker setMarkerText "!ATENÇÃO! Tentativa de roubo!!!";
_marker setMarkerType "mil_warning";

[[getPlayerUID _robber,name _robber,"212"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;

_cops = (west countSide playableUnits);
if(_cops < 1) exitWith{[[_vault,-1],"disableSerialization;",false,false] spawn life_fnc_MP; hint "Não há policiais suficientes para roubar o Banco Central!";};
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Roubo em progresso, mantenha-se próximo (10m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
while{true} do
{
sleep 2;
_cP = _cP + 0.01;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["Roubo em progresso, mantenha-se próximo (10m) (%1%2)...",round(_cP * 100),"%"];
if(_cP >= 1) exitWith {};
if(_robber distance _shop > 10.5) exitWith { };
if!(alive _robber) exitWith {};
};
if!(alive _robber) exitWith { _rip = false; };
if(_robber distance _shop > 10.5) exitWith { deleteMarker "Marker200"; _shop switchMove ""; hint "Você precisa ficar dentro de 10m para registrar o roubo! - Agora o registro está bloqueado."; 5 cutText ["","PLAIN"]; _rip = false; };
5 cutText ["","PLAIN"];

titleText[format["Você roubou R$%1, fuja antes que a polícia chegue!",[_kassa] call life_fnc_numberText],"PLAIN"];
life_cash = life_cash + _kassa;

_rip = false;
life_use_atm = false;
sleep (50 + random(180));
life_use_atm = true;
if!(alive _robber) exitWith {};
[[getPlayerUID _robber,name _robber,"211"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
[[_robber],"life_fnc_wantedFetchForCivilian",_robber,false] spawn life_fnc_MP;
};
sleep 18000;
_action = _shop addAction["Roubar Caixa do Banco",life_fnc_robBank];
_shop switchMove "";
