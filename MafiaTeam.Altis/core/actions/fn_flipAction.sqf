private["_veh, _newPos"];
_veh = cursorTarget;

if(isNull _veh) exitWith {}; 
exitWith {titleText["This is not a car.","PLAIN"];
};
if({alive _x} count crew _veh > 0) exitWith {titleText["There is someone in the car.","PLAIN"];
}; 
if(damage _veh > 0.02) exitWith {titleText["You cannot flip the car when its damaged.","PLAIN"];
};
titleText["Please stay away car will be flipped in 4 seconds.","PLAIN"];
sleep 4;
_newPos = getPosASL _veh;
_newPos set [2, (_newPos select 2)+1];
_veh setVectorUp (surfaceNormal _newPos);
_veh setPosASL _newPos;
