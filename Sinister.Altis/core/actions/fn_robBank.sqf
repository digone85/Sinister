/*
file: fn_robShops.sqf
Description:
Executes the rob shob action!
Editado por Imperador
*/
private["_robber","_shop","_name","_kassa","_ui","_progress","_pgText","_cP","_pos"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
_action = [_this,2] call BIS_fnc_param;//Action name
_pos = GetPos _shop;
if(playersNumber west < 0) exitWith { hint "Não há 6 policias online para roubar este estabelecimento!"};
if(side _robber != civilian) exitWith { hint "Você não pode roubar a casa da moeda!" };
if (vehicle player != _robber) exitWith { hint "Você precisa sair do veículo!" };
if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "Você nao pode roubar este estabelecimento sem uma arma!" };
if(_shop getVariable ["coolDown",false]) exitWith {hint "Você só pode roubar este estabelecimento novamente depois de 3 horas!"};
if(_shop getVariable["rip",false]) exitWith {hint "Este estabelecimento já está sendo roubado!"};

_shop setVariable ["rip",true,true];


_kassa = 200000 + round(random 150000);
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);
if(_chance >= 10) then { hint "O frentista acionou o alarme, a polícia foi avisada!"; [[1,format["ALARM! - Posto de Gasolina: %1 está sendo roubada!", _shop]],"life_fnc_broadcast",west,false] spawn life_fnc_MP; };
[[1,format["%1 está roubando a casa da moeda!", profileName]],"life_fnc_broadcast",true,false] spawn BIS_fnc_MP;
_marker = createMarker [format["Marker%1",_shop], _pos];
_marker setMarkerColor "ColorRed";
_marker setMarkerText "!ATENÇÃO! Tentativa de roubo!!!";
_marker setMarkerType "mil_warning";

[[getPlayerUID _robber,name _robber,"212"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;


//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Roubo em progresso, mantenha-se em (10m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do
{
	sleep 2.3; //5 = 15 minute robbery
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["Roubo em progresso, mantenha-se em (10m) (%1%2)...",round(_cP * 100),"%"];
	if(_cP >= 1) exitWith {_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];};
	if(_robber distance _shop > 10) exitWith {_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];};
	if!(alive _robber) exitWith {_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];};
	if(life_isTazed) exitWith {_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];};
	playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", player]; //loop that shit
};

if(!(alive _robber)) exitWith 
{
	deletemarker _marker; 
	[_shop] spawn
	{
		private["_shop"];
		_shop = _this select 0;
		_shop setVariable ["coolDown",true,true];
		sleep 300;
		_shop setVariable ["coolDown",false,true];
	};
	_shop setVariable ["rip",false,true];
};
if(_robber distance _shop > 10) exitWith 
{ 
	_shop switchMove ""; 
	hint "Você precisa estar mais ou menos em 10m de distância para roubar a casa! - A caixa registrador está fechada!"; 
	5 cutText ["","PLAIN"]; 
	deletemarker _marker;
    _ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];
	//[["sounds\pol_gas_fail"],"life_fnc_clientSound",west,false] spawn BIS_fnc_MP;
	[_shop] spawn
	{
		private["_shop"];
		_shop = _this select 0;
		_shop setVariable ["coolDown",true,true];
		sleep 300;
		_shop setVariable ["coolDown",false,true];
	};
	_shop setVariable ["rip",false,true];
};
if(life_isTazed) exitWith
{
	_shop switchMove ""; 
	hint "Você foi eletrocutado, e o roubo falhou!"; 
	5 cutText ["","PLAIN"]; 
	deletemarker _marker;
    _ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];
	[_shop] spawn
	{
		private["_shop"];
		_shop = _this select 0;
		_shop setVariable ["coolDown",true,true];
		sleep 300;
		_shop setVariable ["coolDown",false,true];
	};
	_shop setVariable ["rip",false,true];
};
5 cutText ["","PLAIN"];


_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];
titleText[format["Você roubou $%1, agora corre antes que a polícia chegue!",[_kassa] call life_fnc_numberText],"PLAIN"];
life_cash = life_cash + _kassa;
[[getPlayerUID _robber,name _robber,"211"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
deletemarker _marker;
life_use_atm = false;
sleep (60 + random(180));
life_use_atm = true;
[[1,format["MAFIA NEWS: A casa da moeda foi roubada em um total de $%1", [_kassa] call life_fnc_numberText]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;

[_shop] spawn
{
	private["_shop"];
	_shop = _this select 0;
	_shop setVariable ["coolDown",true,true];
	sleep 18000;
	_shop setVariable ["coolDown",false,true];
};
_shop switchMove "";
_shop setVariable ["rip",false,true];
_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];
