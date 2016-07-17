#include "..\script_macros.hpp"
/*
	File: configuration.sqf
	Author:

	Description:
	Master Life Configuration File
	This file is to setup variables for the client, there are still other configuration files in the system

*****************************
****** Backend Variables *****
*****************************
*/
life_nottoofast = 0;
life_nottoofastTrunk = 0;
life_query_time = time;
life_action_delay = time;
life_trunk_vehicle = Objnull;
life_session_completed = false;
life_garage_store = false;
life_session_tries = 0;
life_net_dropped = false;
life_siren_active = false;
life_clothing_filter = 0;
life_clothing_uniform = -1;
life_redgull_effect = time;
life_is_processing = false;
life_bail_paid = false;
life_impound_inuse = false;
life_action_inUse = false;
life_spikestrip = ObjNull;
life_nottoofast = time;
life_respawn_timer = 0.75; //Scaled in minutes
life_knockout = false;
life_interrupted = false;
life_respawned = false;
life_removeWanted = false;
life_action_gathering = false;
tawvd_addon_disable = true;
life_god = false;
life_frozen = false;
life_markers = false;
life_fed_break = 0;
life_save_gear = [];
life_container_activeObj = ObjNull;
life_disable_getIn = false;
life_disable_getOut = false;
life_nlrtimer_stop = false;
life_nlrtimer_running = false;
life_admin_debug = false;
life_preview_3D_vehicle_cam = objNull;
life_preview_3D_vehicle_object = objNull;
life_preview_light = objNull;
life_pos_exist = false;
life_pos_attach = [];
life_civ_position = [];
Life_request_timer = false;
life_fadeSound = false;

//Settings
life_settings_enableSidechannel = GVAR_PNAS["life_enableSidechannel",true];
life_settings_tagson = GVAR_PNAS["life_settings_tagson",true];
life_settings_revealObjects = GVAR_PNAS["life_settings_revealObjects",true];
life_settings_viewDistanceFoot = GVAR_PNAS["life_viewDistanceFoot",1250];
life_settings_viewDistanceCar = GVAR_PNAS["life_viewDistanceCar",1250];
life_settings_viewDistanceAir = GVAR_PNAS["life_viewDistanceAir",1250];

//Uniform price (0),Hat Price (1),Glasses Price (2),Vest Price (3),Backpack Price (4)
life_clothing_purchase = [-1,-1,-1,-1,-1];
/*
*****************************
****** Weight Variables *****
*****************************
*/
life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight");
life_carryWeight = 0; //Represents the players current inventory weight (MUST START AT 0).

/*
*****************************
****** Life Variables *******
*****************************
*/
life_net_dropped = false;
life_use_atm = true;
life_is_arrested = false;
life_is_alive = false;
life_delivery_in_progress = false;
life_thirst = 100;
life_hunger = 100;
CASH = 0;

life_istazed = false;
life_isknocked = false;
life_vehicles = [];

/*
	Master Array of items?
*/
//Setup variable inv vars.
{
	SVAR_MNS [ITEM_VARNAME(configName _x),0];
} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));

/* Setup the BLAH! */
{
	_varName = getText(_x >> "variable");
	_sideFlag = getText(_x >> "side");

	SVAR_MNS [LICENSE_VARNAME(_varName,_sideFlag),false];
} foreach ("true" configClasses (missionConfigFile >> "Licenses"));

life_illegal_stuffs =[
		"V_PlateCarrier1_blk",
		"V_BandollierB_cbr",
		"V_TacVest_khk",
		"V_HarnessO_brn",
		"H_HelmetB_plain_blk",
		"V_PlateCarrier1_blk",
		"B_TacticalPack_blk",
		"hgun_P07_F",
		"hgun_P07_snds_F",
		"hgun_Pistol_heavy_01_F",
		"arifle_MXC_Black_F",
		"arifle_MX_Black_F",
		"arifle_MXM_Black_F",
		"srifle_EBR_F",
		"30Rnd_65x39_caseless_mag",
		"20Rnd_762x51_Mag",
		"acc_flashlight",
		"optic_Arco",
		"optic_Hamr",
		"optic_Holosight",
		"optic_Holosight_smg",
		"optic_MRCO",
		"muzzle_snds_L",
		"muzzle_snds_H",
		"SmokeShell",
		"SmokeShellRed",
		"SmokeShellGreen",
		"SmokeShellYellow",
		"SmokeShellPurple",
		"SmokeShellBlue",
		"SmokeShellOrange",
		"arifle_TRG20_F",
		"SMG_01_F",
		"SMG_02_F",
		"SMG_02_ACO_F",
		"optic_ACO_smg",
		"arifle_Katiba_F",
		"srifle_DMR_01_F",
		"arifle_SDAR_F",
		"30Rnd_556x45_Stanag",
		"30Rnd_65x39_caseless_green",
		"10Rnd_762x51_Mag",
		"20Rnd_556x45_UW_mag",
		"30Rnd_45ACP_Mag_SMG_01",
		"11Rnd_45ACP_Mag",
		"G_Balaclava_blk",
		"G_Bandanna_beast",
		"H_Beret_Colonel",
		"H_Beret_blk_POLICE",
		"H_MilCap_gry",
		"H_Cap_blk"];
life_all_stuffs =[
		"V_PlateCarrier1_blk",
		"V_HarnessO_brn",
		"V_BandollierB_cbr",
		"V_TacVest_khk",
		"H_HelmetB_plain_blk",
		"V_PlateCarrier1_blk",
		"B_TacticalPack_blk",
		"hgun_P07_F",
		"hgun_P07_snds_F",
		"hgun_Pistol_heavy_01_F",
		"arifle_MXC_Black_F",
		"arifle_MX_Black_F",
		"arifle_MXM_Black_F",
		"srifle_EBR_F",
		"30Rnd_65x39_caseless_mag",
		"20Rnd_762x51_Mag",
		"acc_flashlight",
		"optic_Arco",
		"optic_Hamr",
		"optic_Holosight",
		"optic_Holosight_smg",
		"optic_MRCO",
		"muzzle_snds_L",
		"muzzle_snds_H",
		"SmokeShell",
		"SmokeShellRed",
		"SmokeShellGreen",
		"SmokeShellYellow",
		"SmokeShellPurple",
		"SmokeShellBlue",
		"SmokeShellOrange",
		"arifle_TRG20_F",
		"SMG_01_F",
		"SMG_02_F",
		"SMG_02_ACO_F",
		"optic_ACO_smg",
		"arifle_Katiba_F",
		"srifle_DMR_01_F",
		"arifle_SDAR_F",
		"30Rnd_556x45_Stanag",
		"30Rnd_65x39_caseless_green",
		"10Rnd_762x51_Mag",
		"20Rnd_556x45_UW_mag",
		"30Rnd_45ACP_Mag_SMG_01",
		"11Rnd_45ACP_Mag",
		"hgun_ACPC2_F",
		"hgun_Pistol_heavy_02_F",
		"16Rnd_9x21_Mag",
		"9Rnd_45ACP_Mag",
		"6Rnd_45ACP_Cylinder",
		"30Rnd_9x21_Mag",
		"hgun_Rook40_F",
		"hgun_PDW2000_F",
		"optic_ACO_grn_smg",
		"V_Rangemaster_belt",
		"G_Balaclava_blk",
		"G_Bandanna_beast",
		"H_Beret_Colonel",
		"H_Beret_blk_POLICE",
		"H_MilCap_gry",
		"H_Cap_blk"];
