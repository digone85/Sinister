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
            { "hgun_Rook40_F", "", 6500, -1 },
            { "hgun_Pistol_heavy_01_F", "", 9850, -1 },
            { "SMG_01_F", "", 70000, -1 },
            { "SMG_02_F", "", 80000, -1 },
	    { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 25 },
            { "11Rnd_45ACP_Mag", "", 50 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
            { "30Rnd_9x21_Mag", "", 100 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, -1 },
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
            { "optic_AMS", "", 90000, -1 },
            { "optic_Hamr", "", 10500, -1 },
            { "bipod_01_F_blk", "", 4000, -1 },
            { "bipod_01_F_mtp", "", 4000, -1 },
            { "bipod_01_F_snd", "", 4000, -1 },
            
            { "hgun_Rook40_F", "", 30000, -1 },
            { "hgun_Pistol_heavy_01_F", "", 40000, -1 },
            { "arifle_TRG21_F", "", 50000, -1 },
            { "arifle_Mk20_F", "", 60000, -1 },
            { "arifle_MX_F", "", 70000, -1 },
            { "arifle_MX_SW_pointer_F", "", 80000, -1 },
            { "LMG_Mk200_F", "", 250000, -1 },
            { "srifle_DMR_01_F", "", 260000, -1 },
            { "srifle_EBR_F", "", 340000, -1 },
            { "srifle_DMR_06_camo_F", "", 350000, -1 },
            { "srifle_DMR_02_camo_F", "", 380000, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 500 },
            { "11Rnd_45ACP_Mag", "", 500 },
            { "30Rnd_556x45_Stanag", "", 700 },
            { "30Rnd_556x45_Stanag", "", 800 },
            { "30Rnd_65x39_caseless_mag", "", 1000 },
            { "100Rnd_65x39_caseless_mag", "", 1200 },
            { "200Rnd_65x39_cased_Box", "", 1200 },
            { "10Rnd_762x54_Mag", "", 1000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "20Rnd_762x51_Mag", "", 2500 },
            { "10Rnd_338_Mag", "", 2500 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 4750, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 7500, -1 },
            { "optic_LRPS", "", 7500, -1 }
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
            { "optic_AMS", "", 45000, -1 },
            { "optic_Hamr", "", 5250, -1 },
            { "bipod_01_F_blk", "", 2000, -1 },
            { "bipod_01_F_mtp", "", 2000, -1 },
            { "bipod_01_F_snd", "", 2000, -1 },
            { "muzzle_snds_H", "", 2000, -1 },
            { "muzzle_snds_L", "", 2000, -1 },
            { "muzzle_snds_M", "", 2000, -1 },
            { "muzzle_snds_B", "", 2000, -1 },
            { "muzzle_snds_H_MG", "", 2000, -1 },
            { "muzzle_snds_93mmg", "", 2000, -1 },
            { "muzzle_snds_338_sand", "", 2000, -1 },
            
            { "hgun_Rook40_F", "", 15000, -1 },
            { "hgun_Pistol_heavy_01_F", "", 20000, -1 },
            { "SMG_01_F", "", 25000, -1 },
            { "SMG_02_F", "", 30000, -1 },
            { "hgun_PDW2000_F", "", 35000, -1 },
            { "arifle_TRG21_F", "", 40000, -1 },
            { "arifle_Mk20_F", "", 125000, -1 },
            { "arifle_Katiba_F", "", 130000, -1 },
            { "arifle_MX_F", "", 170000, -1 },
            { "arifle_MX_SW_pointer_F", "", 175000, -1 },
            { "LMG_Mk200_F", "", 190000, -1 },
            { "srifle_DMR_01_F", "", 200000, -1 },
            { "srifle_EBR_F", "", 200000, -1 },
            { "srifle_DMR_03_woodland_F", "", 220000, -1 },
            { "srifle_DMR_06_camo_F", "", 240000, -1 },
            { "srifle_DMR_04_F", "", 250000, -1 },
            { "LMG_Zafir_F", "", 265000, -1 },
            { "srifle_DMR_02_camo_F", "", 265000, -1 },
            { "srifle_DMR_05_hex_F", "", 265000, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 500 },
            { "11Rnd_45ACP_Mag", "", 500 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 700 },
            { "30Rnd_9x21_Mag", "", 800 },
            { "30Rnd_9x21_Mag", "", 1000 },
            { "30Rnd_556x45_Stanag", "", 1200 },
            { "30Rnd_556x45_Stanag", "", 1200 },
            { "30Rnd_65x39_caseless_green", "", 1000 },
            { "30Rnd_65x39_caseless_mag", "", 1000 },
            { "100Rnd_65x39_caseless_mag", "", 2500 },
            { "200Rnd_65x39_cased_Box", "", 2500 },
            { "10Rnd_762x54_Mag", "", 2000 },
            { "20Rnd_762x51_Mag", "", 2000 },
            { "20Rnd_762x51_Mag", "", 2000 },
            { "20Rnd_762x51_Mag", "", 2000 },
            { "10Rnd_127x54_Mag", "", 2000 },
            { "150Rnd_762x54_Box", "", 2300 },
            { "10Rnd_338_Mag", "", 2300 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1500 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 4750, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 7500, -1 },
            { "optic_LRPS", "", 7500, -1 }
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
            { "optic_ACO_grn_smg", "", 950, -1 }
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
            { "hgun_P07_snds_F", "Stun Pistol", 20000, -1 },
            { "arifle_sdar_F", "Taser Rifle", 2000, -1 },
            { "arifle_TRG21_F", "", 30000, -1 },
            { "arifle_Katiba_F", "", 35000, -1 },
            { "arifle_MX_F", "", 7500, -1 },
            
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 1000, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "B_UavTerminal", "", 2000, -1 },
            { "muzzle_snds_H", "", 2000, -1 },
            { "muzzle_snds_L", "", 2000, -1 },
            { "muzzle_snds_M", "", 2000, -1 },
            { "muzzle_snds_B", "", 2000, -1 },
            { "muzzle_snds_H_MG", "", 2000, -1 },
            { "muzzle_snds_93mmg", "", 2000, -1 },
            { "muzzle_snds_338_sand", "", 2000, -1 },
            { "bipod_01_F_blk", "", 4000, -1 },
            { "bipod_01_F_mtp", "", 4000, -1 },
            { "bipod_01_F_snd", "", 4000, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
            { "30Rnd_556x45_Stanag", "", 150 },
            { "30Rnd_65x39_caseless_green", "", 150 },
            { "30Rnd_65x39_caseless_mag", "", 150 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 4750, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 7500, -1 },
            { "optic_LRPS", "", 7500, -1 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
	    { "hgun_P07_snds_F", "Stun Pistol", 20000, -1 },
            { "arifle_sdar_F", "Taser Rifle", 2000, -1 },
            { "arifle_TRG21_F", "", 30000, -1 },
            { "arifle_Katiba_F", "", 35000, -1 },
            { "arifle_MX_F", "", 7500, -1 },
            { "arifle_MXM_Black_F", 20000, -1 },
            { "arifle_MX_SW_Black_F", 2000, -1 },
            { "LMG_Mk200_F", "", 30000, -1 },
            
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 1000, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "B_UavTerminal", "", 2000, -1 },
            { "muzzle_snds_H", "", 2000, -1 },
            { "muzzle_snds_L", "", 2000, -1 },
            { "muzzle_snds_M", "", 2000, -1 },
            { "muzzle_snds_B", "", 2000, -1 },
            { "muzzle_snds_H_MG", "", 2000, -1 },
            { "muzzle_snds_93mmg", "", 2000, -1 },
            { "muzzle_snds_338_sand", "", 2000, -1 },
            { "bipod_01_F_blk", "", 4000, -1 },
            { "bipod_01_F_mtp", "", 4000, -1 },
            { "bipod_01_F_snd", "", 4000, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
            { "30Rnd_556x45_Stanag", "", 150 },
            { "30Rnd_65x39_caseless_green", "", 150 },
            { "30Rnd_65x39_caseless_mag", "", 150 },
            { "30Rnd_65x39_caseless_mag", "", 25 },
            { "100Rnd_65x39_caseless_mag", 45 },
            { "200Rnd_65x39_cased_Box", 45 }
            
        };
        accs[] = {
            { "optic_ACO_grn", "", 4750, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 7500, -1 },
            { "optic_LRPS", "", 7500, -1 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 20000, -1 },
            { "arifle_sdar_F", "Taser Rifle", 2000, -1 },
            { "arifle_TRG21_F", "", 30000, -1 },
            { "arifle_Katiba_F", "", 35000, -1 },
            { "arifle_MX_F", "", 7500, -1 },
            { "arifle_MXM_Black_F", 20000, -1 },
            { "arifle_MX_SW_Black_F", 2000, -1 },
            { "LMG_Mk200_F", "", 30000, -1 },
            { "srifle_DMR_01_F", 20000, -1 },
            { "srifle_EBR_F", 2000, -1 },
            { "srifle_DMR_06_olive_F", "", 30000, -1 },
            { "srifle_DMR_02_F", "", 35000, -1 },
            
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 1000, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "B_UavTerminal", "", 2000, -1 },
            { "muzzle_snds_H", "", 2000, -1 },
            { "muzzle_snds_L", "", 2000, -1 },
            { "muzzle_snds_M", "", 2000, -1 },
            { "muzzle_snds_B", "", 2000, -1 },
            { "muzzle_snds_H_MG", "", 2000, -1 },
            { "muzzle_snds_93mmg", "", 2000, -1 },
            { "muzzle_snds_338_sand", "", 2000, -1 },
            { "bipod_01_F_blk", "", 4000, -1 },
            { "bipod_01_F_mtp", "", 4000, -1 },
            { "bipod_01_F_snd", "", 4000, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
            { "30Rnd_556x45_Stanag", "", 150 },
            { "30Rnd_65x39_caseless_green", "", 150 },
            { "30Rnd_65x39_caseless_mag", "", 150 },
            { "30Rnd_65x39_caseless_mag", "", 25 },
            { "100Rnd_65x39_caseless_mag", 45 },
            { "200Rnd_65x39_cased_Box", 45 }
            { "10Rnd_762x54_Mag", "", 25 },
            { "20Rnd_762x51_Mag", 45 },
            { "20Rnd_762x51_Mag", "", 150 },
            { "10Rnd_338_Mag", "", 150 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 4750, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 7500, -1 },
            { "optic_LRPS", "", 7500, -1 }
        };
    };
    
    class cop_vip {
        name = "Cop VIP";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Voce precisar ser VIP para Acessar!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 20000, -1 },
            { "arifle_sdar_F", "Taser Rifle", 2000, -1 },
            { "arifle_TRG21_F", "", 30000, -1 },
            { "arifle_Katiba_F", "", 35000, -1 },
            { "arifle_MX_F", "", 7500, -1 },
            { "arifle_MXM_Black_F", 20000, -1 },
            { "arifle_MX_SW_Black_F", 2000, -1 },
            { "LMG_Mk200_F", "", 30000, -1 },
            { "srifle_DMR_01_F", 20000, -1 },
            { "srifle_EBR_F", 2000, -1 },
            { "srifle_DMR_06_olive_F", "", 30000, -1 },
            { "srifle_DMR_02_F", "", 35000, -1 },
            { "srifle_DMR_03_F", 2000, -1 },
            { "srifle_DMR_04_F", "", 30000, -1 },
            { "LMG_Zafir_F", "", 35000, -1 },
            { "srifle_DMR_05_blk_F", "", 35000, -1 },
            
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 300, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 1000, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "B_UavTerminal", "", 2000, -1 },
            { "muzzle_snds_H", "", 2000, -1 },
            { "muzzle_snds_L", "", 2000, -1 },
            { "muzzle_snds_M", "", 2000, -1 },
            { "muzzle_snds_B", "", 2000, -1 },
            { "muzzle_snds_H_MG", "", 2000, -1 },
            { "muzzle_snds_93mmg", "", 2000, -1 },
            { "muzzle_snds_338_sand", "", 2000, -1 },
            { "bipod_01_F_blk", "", 4000, -1 },
            { "bipod_01_F_mtp", "", 4000, -1 },
            { "bipod_01_F_snd", "", 4000, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
            { "30Rnd_556x45_Stanag", "", 150 },
            { "30Rnd_65x39_caseless_green", "", 150 },
            { "30Rnd_65x39_caseless_mag", "", 150 },
            { "30Rnd_65x39_caseless_mag", "", 25 },
            { "100Rnd_65x39_caseless_mag", 45 },
            { "200Rnd_65x39_cased_Box", 45 }
            { "10Rnd_762x54_Mag", "", 25 },
            { "20Rnd_762x51_Mag", 45 },
            { "20Rnd_762x51_Mag", "", 150 },
            { "10Rnd_338_Mag", "", 150 },
            { "20Rnd_762x51_Mag", 45 },
            { "10Rnd_127x54_Mag", "", 150 },
            { "150Rnd_762x54_Box", "", 150 },
            { "10Rnd_93x64_DMR_05_Mag", "", 150 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 4750, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 7500, -1 },
            { "optic_LRPS", "", 7500, -1 }
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
            { "optic_Arco", "", 4000, -1 }
        };
    };
};
