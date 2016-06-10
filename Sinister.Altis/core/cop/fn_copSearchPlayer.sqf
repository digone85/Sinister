/*
	File: fn_copSearchPlayer.sqf
	Author: Pojus/Pearlwar [ALI] Altis Life Italia
    Modificato da: Al Morise(Sink)
	Description:
	Ricerca armi e caricatori nei giocatori
*/
private ["_unit","_displayName","_weaponLegal","_weaponIllegal","_weapAccessories","_magazineLegal","_magazineIllegal","_bpack","_weaponsAmmoFull","_magazinesAmmoFull","_backpack","_vest","_headgear"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_weapon = "";
_magazine = "";
_bpack = "";
_veste = "";
_vestContainer = "";
_uniformeItems = "";
_cappello = "";
    //_unit = cursorTarget;
	if (isNull _unit) exitWith {};
	hint "Verificação de equipamentos em curso...";
	sleep 2;
	if (player distance _unit > 5 || !alive player || !alive _unit) exitWith {hint "Você não pode fazer a verificação nessa pessoa."};
	_primaryWeapon = primaryWeapon _unit;
	_handgunWeapon = handgunWeapon _unit;
	_vest = vest _unit;
	_headgear = headgear _unit;
	_illegalAccessory = false;
	if(_primaryWeapon != "") then 
	{
	_displayName = getText(configFile >> "CfgWeapons" >> _primaryWeapon >> "displayName");
	_weapMagazine = primaryWeaponMagazine _unit;
	_weapAccessories = primaryWeaponItems _unit;
	{
	if(_x in life_illegal_stuffs) exitWith { _illegalAccessory = true;
	};
	}
	forEach _weapAccessories;
	if(_primaryWeapon in life_illegal_stuffs || _illegalAccessory) then {
	_weapon = format["<t color='#FF0000'>%1%2</t><br/>", _weapon, _displayName];
	} else {
	_weapon = format["<t color='#00FF00'>%1%2</t><br/>", _weapon, _displayName];
	};
	if(count _weapMagazine > 0) then {
	_magazineName = getText(configFile >> "CfgMagazines" >> (_weapMagazine select 0) >> "displayName");
	if((_weapMagazine select 0) in life_illegal_stuffs) then {
	_weapon = format["<t color='#FF0000'>%1%2</t><br/>", _weapon, _magazineName];
	} else {
	_weapon = format["<t color='#00FF00'>%1%2</t><br/>", _weapon, _magazineName];
	};
	};
	};
    if(_illegalAccessory) then { _illegalAccessory = false;
	};
    if(_handgunWeapon != "") then {
	_displayName = getText(configFile >> "CfgWeapons" >> _handgunWeapon >> "displayName");
	_weapMagazine = handgunMagazine _unit;
	_weapAccessories = handgunItems _unit;
	{
	if(_x in life_illegal_stuffs) exitWith { _illegalAccessory = true;
	};
	}
	forEach _weapAccessories;
	if(_handgunWeapon in life_illegal_stuffs || _illegalAccessory) then {
	_weapon = format["<t color='#FF0000'>%1%2</t><br/>", _weapon, _displayName];
	} else { _weapon = format["<t color='#00FF00'>%1%2</t><br/>", _weapon, _displayName];
	};
	if(count _weapMagazine > 0) then {
	_magazineName = getText(configFile >> "CfgMagazines" >> (_weapMagazine select 0) >> "displayName");
	if((_weapMagazine select 0) in life_illegal_stuffs) then {
	_weapon = format["<t color='#FF0000'>%1%2</t><br/>", _weapon, _magazineName];
	} else {
	_weapon = format["<t color='#00FF00'>%1%2</t><br/>", _weapon, _magazineName];
	};
	};
	};
    if(_weapon == "") then {
	_weapon = "Nenhuma arma equipada<br/>";
	};
	if(backPack _unit != "") then {
    _backpack = backpackItems _unit;
    if(count _backpack > 0) then {
	{
	if(isClass (configFile >> "CfgWeapons" >> _x)) then {
	_displayName = getText(configFile >> "CfgWeapons" >> _x >> "displayName");
	}else {
	if(isClass (configFile >> "CfgMagazines" >> _x)) then {
	_displayName = getText(configFile >> "CfgMagazines" >> _x >> "displayName");
	} else {
	if(isClass(configFile >> "CfgVehicles" >> "Vest_"+_x)) then {
	_displayName = getText(configFile >> "CfgVehicles" >> "Vest_"+_x >> "displayName");
	} else {
	if(isClass(configFile >> "CfgVehicles" >> "Headgear_"+_x)) then {
	_displayName = getText(configFile >> "CfgVehicles" >> "Headgear_"+_x >> "displayName");
	}else {
	_displayName = _x;
	};
	};
	};
	};
	if(_x in life_illegal_stuffs) then {
	_bpack = format["<t color='#FF0000'>%1%2</t><br/>", _bpack,_displayName];
	} else {
	_bpack = format["<t color='#00FF00'>%1%2</t><br/>", _bpack,_displayName];
	};
	}
	forEach _backpack;
    } else {
	_bpack = "A mochila está vazia.<br/>";
    };
	} else {
	_bpack = "Essa pessoa não tem uma mochila.<br/>";
	};
	if( _vest != "" ) then {
	_vestItems = vestItems _unit;
	if(isClass (configFile >> "CfgVehicles" >> "Vest_"+_vest)) then {
	_displayName = getText(configFile >> "CfgVehicles" >> "Vest_"+_vest >> "displayName");
	}else {
	_displayName = _vest;
	};
	if(!(_vest in life_illegal_stuffs)) then {
	_veste = format["<t color='#00FF00'>%1</t><br/>",_displayName];
	}else {
	_veste = format["<t color='#FF0000'>%1</t><br/>",_displayName];
	};
	if(count _vestItems > 0) then {
	{
	if(isClass (configFile >> "CfgWeapons" >> _x)) then {
	_displayName = getText(configFile >> "CfgWeapons" >> _x >> "displayName");
	}else {
	if(isClass (configFile >> "CfgMagazines" >> _x)) then {
	_displayName = getText(configFile >> "CfgMagazines" >> _x >> "displayName");
	} else {
	if(isClass(configFile >> "CfgVehicles" >> "Vest_"+_x)) then {
	_displayName = getText(configFile >> "CfgVehicles" >> "Vest_"+_x >> "displayName");
	} else {
	if(isClass(configFile >> "CfgVehicles" >> "Headgear_"+_x)) then {
	_displayName = getText(configFile >> "CfgVehicles" >> "Headgear_"+_x >> "displayName");
	}else {
	_displayName = _x;
	};
	};
	};
	};
	if(_x in life_illegal_stuffs) then {
	_vestContainer = format["<t color='#FF0000'>%1%2</t><br/>", _vestContainer,_displayName];
	} else {
	_vestContainer = format["<t color='#00FF00'>%1%2</t><br/>", _vestContainer,_displayName];
	};
	}forEach _vestItems;
	}else {
	_vestContainer = "O colete está vazio. <br/>";
	};
	} else {
	_veste = "Essa pessoa não tem um colete.<br/>";
	};
	if(_headgear != "") then {
	if(isClass(configFile >> "CfgVehicles" >> "Headgear_"+_headgear)) then {
	_displayName = getText(configFile >> "CfgVehicles" >> "Headgear_"+_headgear >> "displayName");
	}else { _displayName = _headgear;
	};
	if(!(_headgear in life_illegal_stuffs)) then {
	_cappello = format["<t color='#00FF00'>%1</t><br/>",_displayName];
	}else {
	_cappello = format["<t color='#FF0000'>%1</t><br/>",_displayName];
	};
	} else {
	_cappello = "Essa pessoa não tem um chapéu.<br/>";
	};
	if(uniform _unit != "") then {
	_uniformItems = uniformItems _unit;
	if(count _uniformItems > 0) then {
	{
	if(isClass (configFile >> "CfgWeapons" >> _x)) then {
	_displayName = getText(configFile >> "CfgWeapons" >> _x >> "displayName");
	}else {
	if(isClass (configFile >> "CfgMagazines" >> _x)) then {
	_displayName = getText(configFile >> "CfgMagazines" >> _x >> "displayName");
	} else {
	if(isClass(configFile >> "CfgVehicles" >> "Vest_"+_x)) then {
	_displayName = getText(configFile >> "CfgVehicles" >> "Vest_"+_x >> "displayName");
	} else {
	if(isClass(configFile >> "CfgVehicles" >> "Headgear_"+_x)) then {
	_displayName = getText(configFile >> "CfgVehicles" >> "Headgear_"+_x >> "displayName");
	}else {_displayName = _x;
	};
	};
	};
	};
	if(_x in  life_illegal_stuffs) then {
	_uniformeItems = format["<t color='#FF0000'>%1%2</t><br/>", _uniformeItems,_displayName];
	} else {
	_uniformeItems = format["<t color='#00FF00'>%1%2</t><br/>", _uniformeItems,_displayName];
	};
	}forEach _uniformItems;
	}else {
	_uniformeItems = "O uniforme está vazio.<br/>";
	};
	} else {
	_uniformeItems = "Essa pessoa não tem um uniforme.<br/>";
	};
	hint parseText format["<t color='#FFFFFF'><t size='1'>Armas Equipadas:</t></t><br/><t size ='0.7'>%1</t><br/><t color='#FFFFFF'><t size='1'>Conteúdo da Mochila</t></t><br/><t size ='0.7'>%2</t><br/><t color='#FFFFFF'><t size='1'>Colete</t></t><br/><t size ='0.7'>%3</t><br/><t color='#FFFFFF'><t size='1'>Conteúdo do Colete</t></t><br/><t size ='0.7'>%4</t><br/><t color='#FFFFFF'><t size='1'>Cabeça</t></t><br/><t size ='0.7'>%5</t><br/><t color='#FFFFFF'><t size='1'>Conteúdo do Uniforme</t></t><br/><t size ='0.7'>%6</t><br/>", _weapon,_bpack,_veste,_vestContainer,_cappello,_uniformeItems];
	
