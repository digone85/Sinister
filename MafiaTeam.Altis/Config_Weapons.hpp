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
            { "hgun_Rook40_F", "", 30000, -1 },
            { "hgun_Pistol_heavy_01_F", "", 40000, -1 },
            { "hgun_Pistol_01_F", "", 45000, -1 },
            { "hgun_P07_khk_F", "", 45000, -1 },
            { "SMG_01_F", "", 60000, -1 },
            { "SMG_02_F", "", 60000, -1 },
            { "SMG_05_F", "", 70000, -1 },
	    { "hgun_PDW2000_F", "", 60000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_yellow_Mag", "", 200, -1 },
            { "16Rnd_9x21_Mag", "", 200, -1 },
            { "30Rnd_9x21_Mag", "", 600, -1 },
            { "11Rnd_45ACP_Mag", "", 200, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 600, -1 },
            { "30Rnd_9x21_Mag_SMG_02", "", 600, -1 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 5000, -1 },
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 500, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 500, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 500, -1 },
            { "optic_AMS", "", 30000, -1 },
            { "optic_Hamr", "", 9000, -1 },
            { "bipod_01_F_snd", "", 300, -1 },
            
            { "hgun_Rook40_F", "", 30000, -1 },
            { "hgun_Pistol_heavy_01_F", "", 40000, -1 },
            { "arifle_TRG21_F", "", 70000, -1 },
            { "arifle_Mk20_F", "", 70000, -1 },
            { "arifle_MX_F", "", 180000, -1 },
            { "arifle_MX_SW_pointer_F", "", 170000, -1 },
            { "LMG_Mk200_F", "", 260000, -1 },
            { "srifle_DMR_01_F", "", 280000, -1 },
            { "srifle_EBR_F", "", 300000, -1 },
            { "srifle_DMR_06_camo_F", "", 360000, -1 },
            { "srifle_DMR_02_camo_F", "", 650000, -1 },
            { "arifle_AKS_F", "", 230000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 200, -1 },
            { "30Rnd_9x21_Mag", "", 600, -1 },
            { "11Rnd_45ACP_Mag", "", 200, -1 },
            { "30Rnd_556x45_Stanag", "", 700, -1 },
            { "30Rnd_65x39_caseless_mag", "", 1000, -1 },
            { "100Rnd_65x39_caseless_mag", "", 1300, -1 },
            { "200Rnd_65x39_cased_Box", "", 1800, -1 },
            { "10Rnd_762x54_Mag", "", 1800, -1 },
            { "20Rnd_762x51_Mag", "", 2200, -1 },
            { "10Rnd_338_Mag", "", 3200, -1 },
            { "30Rnd_545x39_Mag_F", "", 1500, -1 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 5000, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_LRPS", "", 45000, -1 }
        };
    };
    
    class Doador {
        name = "Loja de Armas";
        side = "civ";
        license = "donator";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 500, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 500, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 500, -1 },
            { "bipod_01_F_snd", "", 300, -1 },
            { "muzzle_snds_H", "", 2000, -1 },
            { "muzzle_snds_L", "", 2000, -1 },
            { "muzzle_snds_M", "", 2000, -1 },
            { "muzzle_snds_B", "", 2000, -1 },
            { "muzzle_snds_H_MG", "", 2000, -1 },
            { "muzzle_snds_93mmg", "", 2000, -1 },
            { "muzzle_snds_338_sand", "", 2000, -1 },
            { "optic_Hamr", "", 9000, -1 },
            { "optic_AMS", "", 14000, -1 },
            
            { "hgun_Rook40_F", "", 25500, -1 },
            { "hgun_Pistol_heavy_01_F", "", 34000, -1 },
            { "SMG_01_F", "", 59500, -1 },
            { "SMG_02_F", "", 59500, -1 },
            { "hgun_PDW2000_F", "", 51000, -1 },
            { "arifle_TRG21_F", "", 59500, -1 },
            { "arifle_Mk20_F", "", 59500, -1 },
            { "arifle_Katiba_F", "", 159500, -1 },
            { "arifle_MX_F", "", 147000, -1 },
            { "arifle_MX_SW_pointer_F", "", 133500, -1 },
            { "LMG_Mk200_F", "", 191250, -1 },
            { "srifle_DMR_01_F", "", 204000, -1 },
            { "srifle_EBR_F", "", 216750, -1 },
            { "srifle_DMR_03_woodland_F", "", 223500, -1 },
            { "srifle_DMR_06_camo_F", "", 255000, -1 },
            { "srifle_DMR_04_F", "", 191000, -1 },
            { "LMG_Zafir_F", "", 274000, -1 },
            { "srifle_DMR_02_camo_F", "", 446000, -1 },
            { "srifle_DMR_05_hex_F", "", 510000, -1 },
            { "arifle_AKS_F", "", 195000, -1 },
            { "arifle_AKM_F", "", 225000, -1 },
            { "arifle_CTAR_blk_F", "", 160000, -1 },
            { "srifle_DMR_07_hex_F", "", 230000, -1 },
            { "arifle_ARX_hex_F", "", 205000, -1 },
            { "arifle_SPAR_01_snd_F", "", 180000, -1 },
            { "arifle_SPAR_02_snd_F", "", 210500, -1 },
            { "arifle_SPAR_03_snd_F", "", 270000, -1 }
        };
        
        mags[] = {
            { "16Rnd_9x21_Mag", "", 200, -1 },
            { "30Rnd_9x21_Mag", "", 200, -1 },
            { "11Rnd_45ACP_Mag", "", 200, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 600, -1 },
            { "30Rnd_556x45_Stanag", "", 700, -1 },
            { "30Rnd_65x39_caseless_green", "", 1000, -1 },
            { "30Rnd_65x39_caseless_mag", "", 1000, -1 },
            { "100Rnd_65x39_caseless_mag", "", 1300, -1 },
            { "200Rnd_65x39_cased_Box", "", 1800, -1 },
            { "10Rnd_762x54_Mag", "", 1800, -1 },
            { "20Rnd_762x51_Mag", "", 2200, -1 },
            { "10Rnd_127x54_Mag", "", 2000, -1 },
            { "150Rnd_762x54_Box", "", 3000, -1 },
            { "10Rnd_338_Mag", "", 3200, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 3200, -1 },
            { "10Rnd_50BW_Mag_F", "", 1, -1 },
            { "30Rnd_65x39_caseless_green", "", 1000, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 1000, -1 },
            { "30Rnd_580x42_Mag_F", "", 1000, -1 },
            { "30Rnd_762x39_Mag_F", "", 1800, -1 },
            { "20Rnd_556x45_UW_mag", "", 1000, -1 },
            { "30Rnd_545x39_Mag_F", "", 1000, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 1000, -1 }
        };
        
        accs[] = {
            { "optic_ACO_grn", "", 5000, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_LRPS", "", 25000, -1 }
        };
    };
            

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 27000, -1 },
            { "hgun_Pistol_heavy_02_F", "", 36000, -1 },
            { "hgun_ACPC2_F", "", 40000, -1 },
            { "hgun_PDW2000_F", "", 56000, -1 },
            { "SMG_01_F", "", 65000, -1 },
            { "SMG_02_F", "", 65000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 200, -1 },
            { "6Rnd_45ACP_Cylinder", "", 200, -1 },
            { "9Rnd_45ACP_Mag", "", 200, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 600, -1 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 600, -1 },
            { "30Rnd_9x21_Mag", "", 600, -1 },
            { "10Rnd_762x54_Mag", "", 1800, -1 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 5000, -1 }
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
            { "ToolKit", "", 500, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 500, -1 },
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
            { "Binocular", "", 400, -1 },
            { "ItemGPS", "", 300, -1 },
            { "ItemMap", "", 150, -1 },
            { "ItemCompass", "", 150, -1 },
            { "ItemWatch", "", 150, -1 },
            { "ToolKit", "", 1000, -1 },
            { "FirstAidKit", "", 500, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "Chemlight_red", "", 700, -1 },
            { "Chemlight_yellow", "", 700, -1 },
            { "Chemlight_green", "", 700, -1 },
            { "Chemlight_blue", "", 700, -1 }
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
            { "arifle_sdar_F", "Taser Rifle", 22000, -1 },
            { "arifle_TRG21_F", "", 23000, -1 },
            { "arifle_Katiba_F", "", 25000, -1 },
            { "arifle_MX_F", "", 25000, -1 },
            
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 500, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 500, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 500, -1 },
            { "B_UavTerminal", "", 4000, -1 },
            { "optic_Hamr", "", 9000, -1 },
            { "optic_AMS", "", 14000, -1 },
            { "bipod_01_F_blk", "", 300, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150, -1 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 150, -1 },
            { "30Rnd_556x45_Stanag", "", 150, -1 },
            { "30Rnd_65x39_caseless_green", "", 150, -1 },
            { "30Rnd_65x39_caseless_mag", "", 150, -1 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 5000, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_LRPS", "", 25000, -1 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Voce precisa ser da Patrulha!!" };
        items[] = {
	    { "hgun_P07_snds_F", "Stun Pistol", 20000, -1 },
            { "arifle_sdar_F", "Taser Rifle", 22000, -1 },
            { "arifle_TRG21_F", "", 23000, -1 },
            { "arifle_Katiba_F", "", 25000, -1 },
            { "arifle_MX_F", "", 25000, -1 },
            { "arifle_MXM_Black_F", "", 30000, -1 },
            { "arifle_MX_SW_Black_F", "", 34000, -1 },
            { "LMG_Mk200_F", "", 35000, -1 },
            
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 500, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 500, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 500, -1 },
            { "B_UavTerminal", "", 4000, -1 },
            { "optic_Hamr", "", 9000, -1 },
            { "optic_AMS", "", 14000, -1 },
            { "bipod_01_F_blk", "", 300, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150, -1 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 150, -1 },
            { "30Rnd_556x45_Stanag", "", 150, -1 },
            { "30Rnd_65x39_caseless_green", "", 150, -1 },
            { "30Rnd_65x39_caseless_mag", "", 150, -1 },
            { "100Rnd_65x39_caseless_mag", "", 150, -1 },
            { "200Rnd_65x39_cased_Box", "", 150, -1 }
            
        };
        accs[] = {
            { "optic_ACO_grn", "", 5000, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_LRPS", "", 25000, -1 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Voce precisar ser Sargento!!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 20000, -1 },
            { "arifle_sdar_F", "Taser Rifle", 22000, -1 },
            { "arifle_TRG21_F", "", 23000, -1 },
            { "arifle_Katiba_F", "", 25000, -1 },
            { "arifle_MX_F", "", 25000, -1 },
            { "arifle_MXM_Black_F", "", 30000, -1 },
            { "arifle_MX_SW_Black_F", "", 34000, -1 },
            { "LMG_Mk200_F", "", 35000, -1 },
            { "srifle_DMR_01_F", "", 32000, -1 },
            { "srifle_EBR_F", "", 37000, -1 },
            { "srifle_DMR_06_olive_F", "", 37000, -1 },
            { "srifle_DMR_02_F", "", 45000, -1 },
            
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 500, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 500, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 500, -1 },
            { "B_UavTerminal", "", 4000, -1 },
            { "optic_Hamr", "", 9000, -1 },
            { "optic_AMS", "", 14000, -1 },
            { "bipod_01_F_blk", "", 300, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150, -1 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 150, -1 },
            { "30Rnd_65x39_caseless_green", "", 150, -1 },
            { "30Rnd_65x39_caseless_mag", "", 150, -1 },
            { "100Rnd_65x39_caseless_mag", "", 150, -1 },
            { "200Rnd_65x39_cased_Box", "", 150, -1 },
            { "10Rnd_762x54_Mag", "", 150, -1 },
            { "20Rnd_762x51_Mag", "", 150, -1 },
            { "10Rnd_338_Mag", "", 150, -1 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 5000, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_LRPS", "", 25000, -1 }
        };
    };
    
    class cop_vip {
        name = "Loja de armas VIP";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Voce precisar ser VIP para Acessar!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 20000, -1 },
            { "arifle_sdar_F", "Taser Rifle", 22000, -1 },
            { "arifle_TRG21_F", "", 23000, -1 },
            { "arifle_Katiba_F", "", 25000, -1 },
            { "arifle_MX_F", "", 25000, -1 },
            { "arifle_MXM_Black_F", "", 30000, -1 },
            { "arifle_MX_SW_Black_F", "", 30000, -1 },
            { "LMG_Mk200_F", "", 35000, -1 },
            { "srifle_DMR_01_F", "", 32000, -1 },
            { "srifle_EBR_F", "", 37000, -1 },
            { "srifle_DMR_06_olive_F", "", 37000, -1 },
            { "srifle_DMR_02_F", "", 45000, -1 },
            { "srifle_DMR_03_F", "", 37000, -1 },
            { "srifle_DMR_04_F", "", 32000, -1 },
            { "LMG_Zafir_F", "", 45000, -1 },
            { "srifle_DMR_05_blk_F", "", 45000, -1 },
            { "LMG_03_F", "", 45000, -1 },
            { "arifle_AK12_F", "", 40000, -1 },
            { "arifle_CTAR_blk_F", "", 28000, -1 },
            { "srifle_DMR_07_blk_F", "", 30000, -1 },
            { "arifle_ARX_blk_F", "", 27000, -1 },
            { "arifle_SPAR_01_blk_F", "", 25000, -1 },
            
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 500, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 500, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 500, -1 },
            { "B_UavTerminal", "", 4000, -1 },
            { "muzzle_snds_H", "", 2000, -1 },
            { "muzzle_snds_L", "", 2000, -1 },
            { "muzzle_snds_M", "", 2000, -1 },
            { "muzzle_snds_B", "", 2000, -1 },
            { "muzzle_snds_H_MG", "", 2000, -1 },
            { "muzzle_snds_93mmg", "", 2000, -1 },
            { "muzzle_snds_338_sand", "", 2000, -1 },
            { "optic_Hamr", "", 9000, -1 },
            { "optic_AMS", "", 14000, -1 },
            { "bipod_01_F_blk", "", 300, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 150, -1 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 150, -1 },
            { "30Rnd_65x39_caseless_green", "", 150, -1 },
            { "30Rnd_65x39_caseless_mag", "", 150, -1 },
            { "100Rnd_65x39_caseless_mag", "", 150, -1 },
            { "200Rnd_65x39_cased_Box", "", 150, -1 },
            { "10Rnd_762x54_Mag", "", 150, -1 },
            { "10Rnd_338_Mag", "", 150, -1 },
            { "20Rnd_762x51_Mag", "", 150, -1 },
            { "10Rnd_127x54_Mag", "", 150, -1 },
            { "150Rnd_762x54_Box", "", 150, -1 },
            { "200Rnd_556x45_Box_F", "", 150, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 150, -1 },
            { "30Rnd_762x39_Mag_F", "", 150, -1 },
            { "10Rnd_50BW_Mag_F", "", 150, -1 },
            { "30Rnd_65x39_caseless_green", "", 150, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 150, -1 },
            { "30Rnd_580x42_Mag_F", "", 150, -1 },
            { "30Rnd_762x39_Mag_F", "", 150, -1 },
            { "20Rnd_556x45_UW_mag", "", 150, -1 },
            { "30Rnd_545x39_Mag_F", "", 150, -1 },
            { "30Rnd_556x45_Stanag", "", 150, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 150, -1 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 5000, -1 },
            { "optic_Holosight", "", 7500, -1 },
            { "optic_Arco", "", 9000, -1 },
            { "optic_LRPS", "", 25000, -1 }
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
            { "ToolKit", "", 500, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 1000, -1 },            
            { "NVGoggles", "", 500, -1 }
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
            { "Rangefinder", "", 500, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 500, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 500, -1 },
            { "optic_Hamr", "", 9000, -1 },
            
            { "hgun_Rook40_F", "", 30000, -1 },
            { "arifle_MX_Black_F", "", 220000, -1 },
            { "arifle_Katiba_F", "", 250000, -1 },
            { "arifle_Katiba_C_F", "", 250000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 200, -1 },        	
            { "30Rnd_65x39_caseless_mag", "", 1000, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 1000, -1 },
            { "30Rnd_65x39_caseless_green", "", 1000, -1 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 1000, -1 }
        };
        accs[] = {
            { "optic_Arco", "", 9000, -1 }
        };
    };
    class centro_turistico {
        name = "centro_turistico";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 300, -1 },
            { "ItemMap", "", 150, -1 },
            { "ItemCompass", "", 150, -1 },
            { "ItemWatch", "", 150, -1 }
	};
    };
};
