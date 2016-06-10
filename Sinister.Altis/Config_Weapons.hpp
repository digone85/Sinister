/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "hgun_ACPC2_F", "", 11500 },
            { "hgun_PDW2000_F", "", 20000 },
            { "SMG_01_F", "", 70000, -1 },
            { "SMG_02_F", "", 80000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 100 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 100 },
            { "30Rnd_9x21_Mag", "", 110 },
            { "10Rnd_762x54_Mag", "", 130 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 },
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 1000, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "optic_AMS", "", 90000 },
            { "optic_Hamr", "", 10500 },
            { "bipod_01_F_blk", "", 4000 },
            { "bipod_01_F_mtp", "", 4000 },
            { "bipod_01_F_snd", "", 4000 },
            
            { "hgun_Rook40_F", "", 30000, -1 },
            { "hgun_Pistol_heavy_02_F", "", 40000, -1 },
            { "hgun_ACPC2_F", "", 50000, -1 },
            { "hgun_PDW2000_F", "", 60000, -1 },
            { "SMG_01_F", "", 70000, -1 },
            { "SMG_02_F", "", 80000, -1 },
            { "arifle_Mk20_F", "", 250000, -1 },
            { "arifle_TRG21_F", "", 260000, -1 },
            { "arifle_Katiba_F", "", 340000, -1 },
            { "arifle_Katiba_C_F", "", 350000, -1 },
            { "arifle_MX_Black_F", "", 380000, -1 },
            { "arifle_MXC_F", "", 400000, -1 },
            { "arifle_MXC_Black_F", "", 400000, -1 },
            { "arifle_MXM_Black_F", "", 440000, -1 },
            { "arifle_MX_SW_F", "", 480000, -1 },
            { "srifle_DMR_01_F", "", 500000, -1 },
            { "srifle_DMR_03_F", "", 530000, -1 },
            { "srifle_DMR_03_khaki_F", "", 530000, -1 },
            { "srifle_DMR_03_tan_F", "", 530000, -1 },
            { "srifle_DMR_03_multicam_F", "", 530000, -1 },
            { "srifle_DMR_03_woodland_F", "", 530000, -1 },
            { "srifle_EBR_F", "", 520000, -1 },
            { "LMG_Mk200_F", "", 550000, -1 },
            { "LMG_Zafir_F", "", 550000, -1 },
            { "srifle_DMR_06_camo_F", "", 580000, -1 },
            { "srifle_DMR_06_olive_F", "", 580000, -1 },
            { "srifle_DMR_05_blk_F", "", 1000000, -1 },
            { "srifle_DMR_05_hex_F", "", 1000000, -1 },
            { "srifle_DMR_05_tan_f", "", 1000000, -1},
            { "srifle_DMR_02_F", "", 1000000, -1 },
            { "srifle_DMR_02_camo_F", "", 1000000, -1 },
            { "srifle_DMR_02_sniper_F", "", 1000000, -1 },
            { "srifle_DMR_04_F", "", 1500000, -1 },
            { "srifle_DMR_04_Tan_F", "", 1500000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 500 },
            { "11Rnd_45ACP_Mag", "", 500 },
            { "6Rnd_45ACP_Cylinder", "", 700 },
            { "9Rnd_45ACP_Mag", "", 800 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 1200 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 1200 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "10Rnd_762x54_Mag", "", 1000 },
            { "200Rnd_65x39_cased_Box", "", 2500 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 2500 },
            { "30Rnd_65x39_caseless_green", "", 2000 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 2000 },
            { "30Rnd_556x45_Stanag", "", 2000 },
            { "30Rnd_65x39_caseless_mag", "", 2000 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 2000 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 2300 },
            { "100Rnd_65x39_caseless_mag", "", 2300 },
            { "30Rnd_65x39_caseless_mag", "", 1500 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 1500 },
            { "10Rnd_338_Mag", "", 1600 },
            { "10Rnd_127x54_Mag", "", 1800 },
            { "150Rnd_762x54_Box", "", 3500 },
            { "150Rnd_762x54_Box_Tracer", "", 3500 },
            { "20Rnd_762x51_Mag", "", 3000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 3000 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 9500 },
            { "optic_SOS", "", 15000 },
            { "optic_DMS", "", 18000 },
            { "optic_Arco", "", 20000 },
            { "optic_Holosight_smg", "", 15000 }
        };
    };
    
    class Doador {
        name = "Loja de Armas";
        side = "civ";
        license = "donator";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 75, -1 },
            { "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 50, -1 },
            { "ToolKit", "", 125, -1 },
            { "FirstAidKit", "", 75, -1 },
            { "Medikit", "", 500, -1 },
            { "NVGoggles", "", 1000, -1 },
            { "optic_AMS", "", 45000 },
            { "optic_Hamr", "", 5250 },
            { "bipod_01_F_blk", "", 2000 },
            { "bipod_01_F_mtp", "", 2000 },
            { "bipod_01_F_snd", "", 2000 },
            
            { "hgun_Rook40_F", "", 15000, -1 },
            { "hgun_Pistol_heavy_02_F", "", 20000, -1 },
            { "hgun_ACPC2_F", "", 25000, -1 },
            { "hgun_PDW2000_F", "", 30000, -1 },
            { "SMG_01_F", "", 35000, -1 },
            { "SMG_02_F", "", 40000, -1 },
            { "arifle_Mk20_F", "", 125000, -1 },
            { "arifle_TRG21_F", "", 130000, -1 },
            { "arifle_Katiba_F", "", 170000, -1 },
            { "arifle_Katiba_C_F", "", 175000, -1 },
            { "arifle_MX_Black_F", "", 190000, -1 },
            { "arifle_MXC_F", "", 200000, -1 },
            { "arifle_MXC_Black_F", "", 200000, -1 },
            { "arifle_MXM_Black_F", "", 220000, -1 },
            { "arifle_MX_SW_F", "", 240000, -1 },
            { "srifle_DMR_01_F", "", 250000, -1 },
            { "srifle_DMR_03_F", "", 265000, -1 },
            { "srifle_DMR_03_khaki_F", "", 265000, -1 },
            { "srifle_DMR_03_tan_F", "", 265000, -1 },
            { "srifle_DMR_03_multicam_F", "", 265000, -1 },
            { "srifle_DMR_03_woodland_F", "", 265000, -1 },
            { "srifle_EBR_F", "", 260000, -1 },
            { "LMG_Mk200_F", "", 225000, -1 },
            { "LMG_Zafir_F", "", 225000, -1 },
            { "srifle_DMR_06_camo_F", "", 290000, -1 },
            { "srifle_DMR_06_olive_F", "", 290000, -1 },
            { "srifle_DMR_05_blk_F", "", 500000, -1 },
            { "srifle_DMR_05_hex_F", "", 500000, -1 },
            { "srifle_DMR_05_tan_f", "", 500000, -1 },
            { "srifle_DMR_02_F", "", 500000, -1 },
            { "srifle_DMR_02_camo_F", "", 500000, -1 },
            { "srifle_DMR_02_sniper_F", "", 500000, -1 },
            { "srifle_DMR_04_F", "", 750000, -1 },
            { "srifle_DMR_04_Tan_F", "", 750000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 500 },
            { "11Rnd_45ACP_Mag", "", 500 },
            { "6Rnd_45ACP_Cylinder", "", 700 },
            { "9Rnd_45ACP_Mag", "", 800 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 1200 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 1200 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "10Rnd_762x54_Mag", "", 1000 },
            { "200Rnd_65x39_cased_Box", "", 2500 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 2500 },
            { "30Rnd_65x39_caseless_green", "", 2000 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 2000 },
            { "30Rnd_556x45_Stanag", "", 2000 },
            { "30Rnd_65x39_caseless_mag", "", 2000 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 2000 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 2300 },
            { "100Rnd_65x39_caseless_mag", "", 2300 },
            { "30Rnd_65x39_caseless_mag", "", 1500 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 1500 },
            { "10Rnd_338_Mag", "", 1600 },
            { "10Rnd_127x54_Mag", "", 1800 },
            { "150Rnd_762x54_Box", "", 3500 },
            { "150Rnd_762x54_Box_Tracer", "", 3500 },
            { "20Rnd_762x51_Mag", "", 3000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 3000 }
        };
        accs[] = {
             { "optic_ACO_grn_smg", "", 4750 },
            { "optic_SOS", "", 7500 },
            { "optic_DMS", "", 9000 },
            { "optic_Arco", "", 10000 },
            { "optic_Holosight_smg", "", 7500 }
        };
    };
            

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, -1 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "SMG_01_F", "", 70000, -1 },
            { "SMG_02_F", "", 80000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 100 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 100 },
            { "30Rnd_9x21_Mag", "", 110 },
            { "10Rnd_762x54_Mag", "", 130 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 50, -1 },
            { "ItemCompass", "", 50, -1 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, -1 },
            { "Chemlight_green", "", 300, -1 },
            { "Chemlight_blue", "", 300, -1 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, -1 },
            { "ItemMap", "", 250, -1 },
            { "ItemCompass", "", 250, -1 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, -1 },
            { "FirstAidKit", "", 750, -1 },
            { "NVGoggles", "", 10000, -1 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, -1 },
            { "Chemlight_green", "", 1500, -1 },
            { "Chemlight_blue", "", 1500, -1 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, -1 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "arifle_MX_F", "", 35000, -1 },
            { "hgun_P07_F", "", 7500, -1 },
            
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 1000, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "optic_Hamr", "", 5000 },
            { "bipod_01_F_blk", "", 4000 },
            { "bipod_01_F_mtp", "", 4000 },
            { "bipod_01_F_snd", "", 4000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
            { "30Rnd_65x39_caseless_mag", "", 150 },
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 },
            { "optic_SOS", "", 1500 },
            { "optic_DMS", "", 1800 },
            { "optic_Arco", "", 2000 },
            { "optic_Holosight_smg", "", 1500 },
            { "bipod_01_F_blk", "", 800 },
            { "bipod_01_F_mtp", "", 800 },
            { "bipod_01_F_snd", "", 800 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
             { "arifle_sdar_F", "Taser Rifle", 20000, -1 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "hgun_P07_F", "", 7500, -1 },
            { "arifle_MXC_Black_F", "", 10000, -1 },
            { "arifle_MXM_Black_F", "", 12000, -1 },
            { "arifle_MX_SW_Black_F", "", 15000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "MineDetector", "", 1000, -1 },
            
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 1000, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "optic_AMS", "", 45000 },
            { "optic_Hamr", "", 10500 },
            { "bipod_01_F_blk", "", 4000 },
            { "bipod_01_F_mtp", "", 4000 },
            { "bipod_01_F_snd", "", 4000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
            { "30Rnd_65x39_caseless_mag", "", 150 },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 150 },
            { "100Rnd_65x39_caseless_mag", "", 150 },
            { "200Rnd_65x39_cased_Box", "", 300 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 300 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 130 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 },
            { "optic_SOS", "", 1500 },
            { "optic_DMS", "", 1800 },
            { "optic_Arco", "", 2000 },
            { "optic_Holosight_smg", "", 1500 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 5000, -1 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "SMG_02_ACO_F", "", 6000, -1 },
            { "hgun_P07_F", "", 7500, -1 },
            { "srifle_EBR_F", "", 8500, -1 },
            { "srifle_DMR_03_F", "", 10000, -1 },
            { "srifle_DMR_04_ACO_F", "", 10000, -1 },
            { "srifle_DMR_05_blk_F", "", 12000, -1 },
            { "srifle_DMR_06_camo_F", "", 14000, -1 },
            { "srifle_DMR_02_F", "", 14000, -1 },
            { "LMG_Zafir_F", "", 20000, -1 },
             
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 1000, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "optic_AMS", "", 45000 },
            { "optic_Hamr", "", 5000 },
            { "bipod_01_F_blk", "", 4000 },
            { "bipod_01_F_mtp", "", 4000 },
            { "bipod_01_F_snd", "", 4000 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 20 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 },
            { "20Rnd_762x51_Mag", "", 100 },
            { "10Rnd_93x64_DMR_05_Mag", "", 100 },
            { "10Rnd_338_Mag", "", 300 },
            { "150Rnd_762x54_Box", "", 600 },
            { "150Rnd_762x54_Box_Tracer", "", 600 },
            { "10Rnd_127x54_Mag", "", 100 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 },
            { "optic_SOS", "", 1500 },
            { "optic_DMS", "", 1800 },
            { "optic_Arco", "", 2000 },
            { "optic_Holosight_smg", "", 1500 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, -1 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 500, -1 },
            { "NVGoggles", "", 1200, -1 }
        };
        mags[] = {};
        accs[] = {};
    };
    class mercado_negro {
        name = "Mercado Negro Arma";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 1000, -1 },
            { "NVGoggles", "", 2000, -1 },
            
            { "arifle_MX_Black_F", "", 380000, -1 },
            { "arifle_Katiba_F", "", 340000, -1 },
            { "arifle_Katiba_C_F", "", 350000, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 2000 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 2000 },
            { "30Rnd_65x39_caseless_green", "", 2000 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 2000 }
        };
        accs[] = {
            { "optic_Arco", "", 4000 }
        };
    };
};
