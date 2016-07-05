[] spawn {
    disableSerialization;
    DS_really_loud_sounds = {[60,15] call fnc_usec_pitchWhine;for "_i" from 1 to 15 do {playSound format ["%1",_this select 0];};};
    DS_double_cut = {1 cutText [format ["%1",_this select 0],"PLAIN DOWN"];2 cutText [format ["%1",_this select 0],"PLAIN"];};
    DS_slap_them = {_randomnr = [2,-1] call BIS_fnc_selectRandom;(vehicle player) SetVelocity [_randomnr * random (4) * cos getdir (vehicle player), _randomnr * random (4) * cos getdir (vehicle player), random (4)];};
    
    fnc_usec_pitchWhine =
    {
        _visual = _this select 0;
        _sound = _this select 1;
        //affect the player
        0 fadeSound 0;
        playMusic ["PitchWhine",0];
        if (!r_player_unconscious) then
        {
            _visual call fnc_usec_bulletHit;
            _sound fadeSound 1;
        };
        r_pitchWhine = true;
        [] spawn
        {
            sleep 32;
            r_pitchWhine = false;
        };
    };
    
    while {true} do {
        waitUntil {((!isNull findDisplay 63) && (!isNull findDisplay 55))};
        if (ctrlText ((findDisplay 55) displayCtrl 101) == "\A3\ui_f\data\igui\rscingameui\rscdisplayvoicechat\microphone_ca.paa") then
        {
            if (ctrlText ((findDisplay 63) displayCtrl 101) == localize "str_channel_side") then
            {
                [] spawn {
                    if (isNil "reset_timer") then {
                        reset_timer = true;
                        sleep 90;
                        disconnect_me = nil;
                        warn_one = nil;
                        warn_two = nil;
                        warn_three = nil;
                        warn_last = nil;
                        reset_timer = nil;
                    };
                };
                if (isNil "disconnect_me") then {disconnect_me = 0;} else {disconnect_me = disconnect_me + 1;};
                if (disconnect_me == 0) then {
                    if (isNil "warn_one") then {
                        warn_one = true;
                        systemChat ("Por favor não fale no side, seu primeiro aviso!!");
                        [] spawn DS_slap_them;
                        //player setDamage 0.20;
                        //["beat04"] spawn DS_really_loud_sounds;
                        //["Proibido falar no side!!"] spawn DS_double_cut;
                        playSound "flashbang";
                    };
                };
                if (disconnect_me == 1) then {
                    if (isNil "warn_two") then {
                        warn_two = true;
                        systemChat ("Por favor não fale no side, seu segundo aviso!!");
                        [] spawn DS_slap_them;
                        //player setDamage 0.60;
                        //["beat04"] spawn DS_really_loud_sounds;
                       // ["Proibido falar no side!!"] spawn DS_double_cut;
                        playSound "flashbang";
                    };
                };
                if (disconnect_me == 2) then {
                    if (isNil "warn_three") then {
                        warn_three = true;
                        systemChat ("Por favor não fale no side, este é seu ultimo aviso!!");
                        systemChat ("Você sera kickado!!");
                        //player setDamage 0.80;
                        [] spawn DS_slap_them;
                        //["beat04"] spawn DS_really_loud_sounds;
                        //["Proibido falar no side!! Este é seu ultimo aviso"] spawn DS_double_cut;
                        playSound "flashbang";
                    };
                };
                if (disconnect_me >= 3) then {
                    if (isNil "warn_last") then {
                        playSound "flashbang";
                        warn_last = true;
                        playMusic ["PitchWhine",0];
                        [] spawn DS_slap_them;
                        //["beat04"] spawn DS_really_loud_sounds;
                        ["Nós avisamos você!!"] spawn DS_double_cut;
                        1 fademusic 10;
                        1 fadesound 10;
                        disableUserInput true;
                        startLoadingScreen ["Você foi kickado por falar no side!! Nós avisamos você!!"];
                        //progressLoadingScreen 0.2;sleep 2;["All_Haha"] spawn DS_really_loud_sounds;
                        progressLoadingScreen 0.4;sleep 2.25;
                        //progressLoadingScreen 0.6;sleep 2;["All_Haha"] spawn DS_really_loud_sounds;
                        progressLoadingScreen 0.8;sleep 2.25;
                        //progressLoadingScreen 1.0;sleep 2;["All_Haha"] spawn DS_really_loud_sounds;
                        endLoadingScreen;sleep 0.5;
                        disableUserInput false;
                        endMission "LOSER";
                    };
                };
            };
        };
        sleep 1;
    };
};