/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 3000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 300, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 300, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 300, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 300, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 300, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 300, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 300, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 325, { "", "", -1 } },
            { "H_Booniehat_tan", "", 350, { "", "", -1 } },
            { "H_Hat_blue", "", 350, { "", "", -1 } },
            { "H_Hat_brown", "", 350, { "", "", -1 } },
            { "H_Hat_checker", "", 350, { "", "", -1 } },
            { "H_Hat_grey", "", 350, { "", "", -1 } },
            { "H_Hat_tan", "", 350, { "", "", -1 } }
            
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 100, { "", "", -1 } },
            { "G_Shades_Blue", "", 100, { "", "", -1 } },
            { "G_Sport_Blackred", "", 100, { "", "", -1 } },
            { "G_Sport_Checkered", "", 100, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 100, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 100, { "", "", -1 } },
            { "G_Squares", "", 100, { "", "", -1 } },
            { "G_Aviator", "", 150, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 150, { "", "", -1 } },
            { "G_Combat", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Press_F", "", 30000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_ViperHarness_oli_F", "", 10000, { "", "", -1 } },
            { "B_ViperHarness_hex_F", "", 10000, { "", "", -1 } },
            { "B_Bergen_tna_F", "", 15000, { "", "", -1 } },
            { "B_Bergen_hex_F", "", 15000, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
	    { "U_B_CombatUniform_mcam", "Uniforme Policial", 50, { "", "textures\Cop\policia_roupa.paa", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 100, { "", "", -1 } },
            { "H_HelmetB_plain_blk", "", 100, { "", "", -1 } },
            { "H_CrewHelmetHeli_B", "", 100, { "", "", -1 } },
            { "H_HelmetCrew_B", "", 100, { "", "", -1 } },
            { "H_PilotHelmetHeli_B", "", 100, { "", "", -1 } },
            { "H_HelmetSpecO_blk", "", 100, { "", "", -1 } },
            { "H_Beret_blk", "", 100, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 100, { "", "", -1 } },
            { "H_Beret_02", "", 100, { "", "", -1 } },
            { "H_Beret_Colonel", "", 100, { "", "", -1 } },
            { "H_Watchcap_blk", "", 100, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 100, { "", "", -1 } },
            { "G_Shades_Blue", "", 100, { "", "", -1 } },
            { "G_Sport_Blackred", "", 100, { "", "", -1 } },
            { "G_Sport_Checkered", "", 100, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 100, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 100, { "", "", -1 } },
            { "G_Squares", "", 100, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 100, { "", "", -1 } },
            { "G_Lady_Dark", "", 100, { "", "", -1 } },
            { "G_Lady_Blue", "", 100, { "", "", -1 } },
            { "G_Lowprofile", "", 100, { "", "", -1 } },
            { "G_Combat", "", 100, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Chestrig_blk", "", 1000, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "", 1000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Bergen_blk", "", 2000, { "", "", -1 } },
            { "B_UAV_01_backpack_F", "", 3500, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 9000, { "", "", -1 } }
            
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4000, { "", "", -1 } },
            { "V_Press_F", "", 30000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_G_Story_Protagonist_F", "Worn Combat Fatigues (Kerry)", 2500, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 2500, {"Guerilla Apparel", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Balaclava_blk", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Chestrig_khk", "Chest Rig (Khaki)", 30000, { "", "", -1 } },
            { "V_TacVest_khk", "Tactical Vest (Khaki)", 70000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_khk", "", 6500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 6500, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
             { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oucamo", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "Guerilla Garment", 2500, {"", "", -1} },
            { "U_B_CTRG_1", "", 5000, {"CTRG Combat Uniform", "", -1} },
            { "U_B_CTRG_2", "", 5000, {"CTRG Combat Uniform (Tee)", "", -1} },
            { "U_B_CTRG_3", "", 5000, {"CTRG Combat Uniform (Rolled-up)", "", -1} },
            { "U_I_G_resistanceLeader_F", "", 5000, { "Combat Fatigues (Stavrou)", "", -1 } },
            { "U_B_survival_uniform", "", 10000, {"Survival Fatigues", "", -1} },
            { "U_I_G_Story_Protagonist_F", "Worn Combat Fatigues (Kerry)", 5000, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 5000, {"Guerilla Apparel", "", -1} },
            { "U_O_SpecopsUniform_ocamo", "", 5000, { "Recon Fatigues (Hex)", "", -1 } },
            { "U_O_PilotCoveralls", "", 5000, { "Pilot Coveralls [AAF]", "", -1 } },
            { "U_O_GhillieSuit", "", 70000, { "Ghillie Suit [AAF]", "", -1 } },
            { "U_O_FullGhillie_sard", "", 85000, {"Full Ghillie (Semi-Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_ard", "", 85000, {"Full Ghillie (Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_lsh", "", 85000, {"Full Ghillie (Lush) (NATO)", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 1000, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 2200, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 3000, { "", "", -1 } },
            { "H_Shemag_olive", "", 3000, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 3000, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 5500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 100, { "", "", -1 } },
            { "G_Shades_Blue", "", 200, { "", "", -1 } },
            { "G_Sport_Blackred", "", 200, { "", "", -1 } },
            { "G_Sport_Checkered", "", 200, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 200, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 200, { "", "", -1 } },
            { "G_Shades_Black", "", 250, { "", "", -1 } },
            { "G_Lowprofile", "", 300, { "", "", -1 } },
            { "G_Combat", "", 550, { "", "", -1 } },
            // BI
            { "G_Bandanna_aviator", "", 1000, { "", "", -1 } },
            { "G_Bandanna_beast", "", 1000, { "", "", -1 } },
            { "G_Bandanna_blk", "", 1000, { "", "", -1 } },
            { "G_Bandanna_khk", "", 1000, { "", "", -1 } },
            { "G_Bandanna_oli", "", 1000, { "", "", -1 } },
            { "G_Bandanna_shades", "", 1000, { "", "", -1 } },
            { "G_Bandanna_sport", "", 1000, { "", "", -1 } },
            { "G_Bandanna_tan", "", 1000, { "", "", -1 } },
            { "G_Balaclava_blk", "", 2100, { "", "", -1 } },
            { "G_Balaclava_combat", "", 2100, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 2100, { "", "", -1 } },
            { "G_Balaclava_oli", "", 2100, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "Rangemaster Belt", 4000, { "", "", -1 } },
            { "V_BandollierB_khk", "Slash Bandolier (Khaki)", 7000, { "", "", -1 } },
            { "V_Chestrig_khk", "Chest Rig (Khaki)", 15000, { "", "", -1 } },
            { "V_RebreatherB", "Rebreather (NATO)", 15000, { "", "", -1 } },
            { "V_HarnessO_brn", "LBV Harness", 18000, { "", "", -1 } },
            { "V_TacVest_khk", "Tactical Vest (Khaki)", 20000, { "", "", -1 } },
            { "V_I_G_resistanceLeader_F", "Tactical Vest (Stavrou)", 20000, { "", "", -1 } },
            { "V_TacVestCamo_khk", "Camouflaged Vest", 20000, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "Carrier Lite (Green)", 50000, { "", "", -1 } },
            { "V_PlateCarrierIA1_dgtl", "GA Carrier Lite (Digi)", 50000, { "", "", -1 } },
            { "V_PlateCarrierIAGL_dgtl", "GA Carrier GL Rig (Digi)", 55000, { "", "", -1 } },
            { "V_PlateCarrierGL_rgr", "Carrier GL Rig (Green)", 55000, { "", "", -1 } },
            { "V_PlateCarrierGL_mtp", "Carrier GL Rig (MTP)", 55000, { "", "", -1 } },
            { "V_PlateCarrier3_rgr", "Carrier Rig (Green)", 70000, { "", "", -1 } },
            { "V_PlateCarrierSpec_rgr", "Carrier Special Rig (Green)", 80000, { "", "", -1 } },
            { "V_PlateCarrierSpec_mtp", "Carrier Special Rig (MTP)", 80000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 10000, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 10000, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "", 15000, { "", "", -1 } },
            { "B_Bergen_dgtl_F", "", 15000, { "", "", -1 } }
        };
    };

    
    class reb1 {
        title = "Loja de Roupas";
        license = "donator";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "Guerilla Garment", 2125, {"", "", -1} },
            { "U_B_CTRG_1", "", 4250, {"CTRG Combat Uniform", "", -1} },
            { "U_B_CTRG_2", "", 4250, {"CTRG Combat Uniform (Tee)", "", -1} },
            { "U_B_CTRG_3", "", 4250, {"CTRG Combat Uniform (Rolled-up)", "", -1} },
            { "U_I_G_resistanceLeader_F", "", 4250, { "Combat Fatigues (Stavrou)", "", -1 } },
            { "U_B_survival_uniform", "", 8500, {"Survival Fatigues", "", -1} },
            { "U_I_G_Story_Protagonist_F", "Worn Combat Fatigues (Kerry)", 4250, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 4250, {"Guerilla Apparel", "", -1} },
            { "U_O_SpecopsUniform_ocamo", "", 4250, { "Recon Fatigues (Hex)", "", -1 } },
            { "U_O_PilotCoveralls", "", 4250, { "Pilot Coveralls [AAF]", "", -1 } },
            { "U_O_GhillieSuit", "", 68000, { "Ghillie Suit [AAF]", "", -1 } },
            { "U_O_FullGhillie_sard", "", 80750, {"Full Ghillie (Semi-Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_ard", "", 80750, {"Full Ghillie (Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_lsh", "", 80750, {"Full Ghillie (Lush) (NATO)", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 850, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1020, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 1870, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 2550, { "", "", -1 } },
            { "H_Shemag_olive", "", 2550, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 2550, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2550, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 85, { "", "", -1 } },
            { "G_Shades_Blue", "", 170, { "", "", -1 } },
            { "G_Sport_Blackred", "", 170, { "", "", -1 } },
            { "G_Sport_Checkered", "", 170, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 170, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 170, { "", "", -1 } },
            { "G_Shades_Black", "", 185, { "", "", -1 } },
            { "G_Lowprofile", "", 250, { "", "", -1 } },
            { "G_Combat", "", 350, { "", "", -1 } },
            // BI
            { "G_Bandanna_aviator", "", 500, { "", "", -1 } },
            { "G_Bandanna_beast", "", 500, { "", "", -1 } },
            { "G_Bandanna_blk", "", 500, { "", "", -1 } },
            { "G_Bandanna_khk", "", 500, { "", "", -1 } },
            { "G_Bandanna_oli", "", 500, { "", "", -1 } },
            { "G_Bandanna_shades", "", 500, { "", "", -1 } },
            { "G_Bandanna_sport", "", 500, { "", "", -1 } },
            { "G_Bandanna_tan", "", 500, { "", "", -1 } },
            { "G_Balaclava_blk", "", 1050, { "", "", -1 } },
            { "G_Balaclava_combat", "", 1050, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 1050, { "", "", -1 } },
            { "G_Balaclava_oli", "", 1050, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "Rangemaster Belt", 3400, { "", "", -1 } },
            { "V_BandollierB_khk", "Slash Bandolier (Khaki)", 7650, { "", "", -1 } },
            { "V_Chestrig_khk", "Chest Rig (Khaki)", 12750, { "", "", -1 } },
            { "V_RebreatherB", "Rebreather (NATO)", 12750, { "", "", -1 } },
            { "V_HarnessO_brn", "LBV Harness", 15300, { "", "", -1 } },
            { "V_TacVest_khk", "Tactical Vest (Khaki)", 17000, { "", "", -1 } },
            { "V_I_G_resistanceLeader_F", "Tactical Vest (Stavrou)", 17000, { "", "", -1 } },
            { "V_TacVestCamo_khk", "Camouflaged Vest", 17000, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "Carrier Lite (Green)", 42500, { "", "", -1 } },
            { "V_PlateCarrierIA1_dgtl", "GA Carrier Lite (Digi)", 42500, { "", "", -1 } },
            { "V_PlateCarrierIAGL_dgtl", "GA Carrier GL Rig (Digi)", 46750, { "", "", -1 } },
            { "V_PlateCarrierGL_rgr", "Carrier GL Rig (Green)", 46750, { "", "", -1 } },
            { "V_PlateCarrierGL_mtp", "Carrier GL Rig (MTP)", 46750, { "", "", -1 } },
            { "V_PlateCarrier3_rgr", "Carrier Rig (Green)", 59500, { "", "", -1 } },
            { "V_PlateCarrierSpec_rgr", "Carrier Special Rig (Green)", 68000, { "", "", -1 } },
            { "V_PlateCarrierSpec_mtp", "Carrier Special Rig (MTP)", 68000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 1700, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 1700, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 1700, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 1700, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 1700, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 1700, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2125, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 2975, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 2975, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 2975, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 4250, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 4250, { "", "", -1 } },
            { "B_Bergen_sgg", "", 5525, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 5525, { "", "", -1 } },
            { "B_Bergen_rgr", "", 5525, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 6375, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 6375, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 6375, { "", "", -1 } },
            { "B_Carryall_oli", "", 6375, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 9250, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 9250, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "", 13500, { "", "", -1 } },
            { "B_Bergen_dgtl_F", "", 13500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
    class mercado_negroC {
        title = "Mercado Negro Roupa";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "Guerilla Garment", 2500, {"", "", -1} },
            { "U_B_CTRG_3", "", 5000, {"CTRG Combat Uniform (Rolled-up)", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 1400, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Bandanna_beast", "", 1000, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 2100, { "", "", -1 } }
            
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVestCamo_khk", "Camouflaged Vest", 20000, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "Carrier Lite (Green)", 40000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 10000, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 10000, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "", 15000, { "", "", -1 } },
            { "B_Bergen_dgtl_F", "", 15000, { "", "", -1 } }
        };
    };
};
