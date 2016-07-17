/*
	File: fn_fadeSound.sqf
	Auhtor: Michael Francis
	
	Description:
	Fades out sound.
*/
life_fadeSound = !life_fadeSound;

if (life_fadeSound) then 
{
	1 fadeSound 0.1; // Faded to 10%
	titleText ["Você colocou o tampão de ouvido.", "PLAIN"];
}
else
{
	1 fadeSound 1; // Returned to 100%
	titleText ["Você removeu o tampão do ouvido.", "PLAIN"];
};
