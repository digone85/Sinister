private["_veh, _newPos"];
_veh = cursorTarget;

if(isNull _veh) exitWith {}; 
exitWith {titleText["Isto não é um carro.","PLAIN"];
};
if({alive _x} count crew _veh > 0) exitWith {titleText["Tem alguém dentro do carro.","PLAIN"];
}; 
if(damage _veh > 0.02) exitWith {titleText["Você não pode desvirar o veículo quando ele está danificado.","PLAIN"];
};
titleText["Fique longe. O veículo será desvirado em 4 segundos.","PLAIN"];
sleep 4;
_newPos = getPosASL _veh;
_newPos set [2, (_newPos select 2)+1];
_veh setVectorUp (surfaceNormal _newPos);
_veh setPosASL _newPos;
