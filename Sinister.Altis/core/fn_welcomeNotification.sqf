/*
	File: fn_welcomeNotification.sqf
	Author:

	Description:
	Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayctrl 2400;
_textSpoiler = _display displayctrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='8' shadow='0'><img image='textures\placas\welcome.jpg' /></t><br /><br />";
_message = _message + "<a href='https://www.facebook.com/groups/107843866273991/' color='#56BDD6'>Clique Aqui</a> para acessar o nosso Facebook.<br /><br />";
_message = _message + "<a href='http://hostgamesmafia.forumeiros.com/forum' color='#56BDD6'>Clique Aqui</a> para acessar o nosso Fórum.<br /><br />";
_message = _message + "Teamspeak 3: mafiaaltisbrasil.meuts3.com.br   <br /><br />";
_message = _message + "Use a tecla windows para minerar/farmar   <br /><br />";
_message = _message + "Use a tecla TAB para se render   <br /><br />";
_message = _message + "O jogador precisa estar nocauteado para sequestrá-lo.  <br /><br />";
_message = _message + "O servidor está salvando a localização dos jogadores.   <br /><br />";
_message = _message + "O Mercado Negro compra diamantes e vende alguns equipamentos ilegais.   <br /><br />";
_message = _message + "RESPEITE A FAMÍLIA E SERÁ RESPEITADO!   <br /><br />";

//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlcommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
