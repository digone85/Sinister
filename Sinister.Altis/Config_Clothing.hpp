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
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
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
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
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
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Chestrig_blk", "", 1000, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "", 1000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 800, { "", "", -1 } },
            { "B_FieldPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
            { "B_Bergen_sgg", "", 2500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 3500, { "", "", -1 } }
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
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
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
            { "U_I_G_Story_Protagonist_F", "Worn Combat Fatigues (Kerry)", 5000, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 5000, {"Guerilla Apparel", "", -1} }
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
            { "V_Chestrig_khk", "Chest Rig (Khaki)", 6000, { "", "", -1 } },
            { "V_Chestrig_blk", "Fighter Chestrig (Black)", 6000, { "", "", -1 } },
            { "V_TacVest_khk", "Tactical Vest (Khaki)", 6000, { "", "", -1 } },
            { "V_TacVest_blk", "Tactical Vest (Black)", 6000, { "", "", -1 } }
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
            { "B_FieldPack_oli", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "Guerilla Garment", 20000, {"", "", -1} },
            { "U_B_CTRG_1", "", 25000, {"CTRG Combat Uniform", "", -1} },
            { "U_B_CTRG_2", "", 25000, {"CTRG Combat Uniform (Tee)", "", -1} },
            { "U_B_CTRG_3", "", 25000, {"CTRG Combat Uniform (Rolled-up)", "", -1} },
            { "U_I_G_resistanceLeader_F", "", 30000, { "Combat Fatigues (Stavrou)", "", -1 } },
            { "U_B_survival_uniform", "", 35000, {"Survival Fatigues", "", -1} },
            { "U_I_G_Story_Protagonist_F", "Worn Combat Fatigues (Kerry)", 35000, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 40000, {"Guerilla Apparel", "", -1} },
            { "U_O_SpecopsUniform_ocamo", "", 45000, { "Recon Fatigues (Hex)", "", -1 } },
            { "U_O_PilotCoveralls", "", 55000, { "Pilot Coveralls [AAF]", "", -1 } },
            { "U_O_GhillieSuit", "", 70000, { "Ghillie Suit [AAF]", "", -1 } },
            { "U_O_FullGhillie_sard", "", 95000, {"Full Ghillie (Semi-Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_ard", "", 95000, {"Full Ghillie (Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_lsh", "", 95000, {"Full Ghillie (Lush) (NATO)", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 3250, { "", "", -1 } },
            { "H_Shemag_olive", "", 3250, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 3250, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 4775, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 4550, { "", "", -1 } },
            { "H_Bandanna_camo", "", 2000, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 250, { "", "", -1 } },
            { "G_Shades_Blue", "", 200, { "", "", -1 } },
            { "G_Sport_Blackred", "", 200, { "", "", -1 } },
            { "G_Sport_Checkered", "", 200, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 200, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 200, { "", "", -1 } },
            { "G_Squares", "", 100, { "", "", -1 } },
            { "G_Lowprofile", "", 300, { "", "", -1 } },
            { "G_Combat", "", 550, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 2100, { "", "", -1 } },
            { "G_Balaclava_combat", "", 2100, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 2100, { "", "", -1 } },
            { "G_Balaclava_oli", "", 1800, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 1800, { "", "", -1 } },
            { "G_Bandanna_beast", "", 1800, { "", "", -1 } },
            { "G_Bandanna_blk", "", 1800, { "", "", -1 } },
            { "G_Bandanna_khk", "", 1800, { "", "", -1 } },
            { "G_Bandanna_oli", "", 1800, { "", "", -1 } },
            { "G_Bandanna_shades", "", 1800, { "", "", -1 } },
            { "G_Bandanna_sport", "", 1800, { "", "", -1 } },
            { "G_Bandanna_tan", "", 1800, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "Rangemaster Belt", 20000, { "", "", -1 } },
            { "V_BandollierB_blk", "Slash Bandolier (Black)", 25000, { "", "", -1 } },
            { "V_BandollierB_khk", "Slash Bandolier (Khaki)", 25000, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "Carrier Lite (Green)", 30000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr", "Carrier Rig (Green)", 30000, { "", "", -1 } },
            { "V_PlateCarrier3_rgr", "Carrier Rig (Green)", 30000, { "", "", -1 } },
            { "V_PlateCarrierGL_rgr", "Carrier GL Rig (Green)", 35000, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "Carrier Lite (Black)", 35000, { "", "", -1 } },
            { "V_PlateCarrierSpec_rgr", "Carrier Special Rig (Green)", 35000, { "", "", -1 } },
            { "V_Chestrig_khk", "Chest Rig (Khaki)", 38000, { "", "", -1 } },
            { "V_Chestrig_blk", "Fighter Chestrig (Black)", 38000, { "", "", -1 } },
            { "V_TacVest_khk", "Tactical Vest (Khaki)", 38000, { "", "", -1 } },
            { "V_TacVest_blk", "Tactical Vest (Black)", 38000, { "", "", -1 } },
            { "V_TacVestIR_blk", "Raven Vest", 49000, { "", "", -1 } },
            { "V_TacVestCamo_khk", "Camouflaged Vest", 49000, { "", "", -1 } },
            { "V_HarnessO_brn", "LBV Harness", 55000, { "", "", -1 } },
            { "V_HarnessO_gry", "LBV Harness (Gray)", 55000, { "", "", -1 } },
            { "V_PlateCarrierIA1_dgtl", "GA Carrier Lite (Digi)", 67000, { "", "", -1 } },
            { "V_PlateCarrierIAGL_dgtl", "GA Carrier GL Rig (Digi)", 67000, { "", "", -1 } },
            { "V_RebreatherB", "Rebreather (NATO)", 67000, { "", "", -1 } },
            { "V_PlateCarrier_Kerry", "US Plate Carrier Rig (Kerry)", 80000, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "CTRG Plate Carrier Rig Mk.2 (Heavy)", 80000, { "", "", -1 } },
            { "V_I_G_resistanceLeader_F", "Tactical Vest (Stavrou)", 80000, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "Carrier Special Rig (Black)", 95000, { "", "", -1 } },
            { "V_PlateCarrierSpec_mtp", "Carrier Special Rig (MTP)", 95000, { "", "", -1 } },
            { "V_PlateCarrierGL_blk", "Carrier GL Rig (Black)", 95000, { "", "", -1 } },
            { "V_PlateCarrierGL_mtp", "Carrier GL Rig (MTP)", 95000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };

    
    class reb1 {
        title = "Loja de Roupas";
        license = "donator";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "Guerilla Garment", 10000, {"", "", -1} },
            { "U_B_CTRG_1", "", 12500, {"CTRG Combat Uniform", "", -1} },
            { "U_B_CTRG_2", "", 12500, {"CTRG Combat Uniform (Tee)", "", -1} },
            { "U_B_CTRG_3", "", 12500, {"CTRG Combat Uniform (Rolled-up)", "", -1} },
            { "U_I_G_resistanceLeader_F", "", 15000, { "Combat Fatigues (Stavrou)", "", -1 } },
            { "U_B_survival_uniform", "", 17500, {"Survival Fatigues", "", -1} },
            { "U_I_G_Story_Protagonist_F", "Worn Combat Fatigues (Kerry)", 17500, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 20000, {"Guerilla Apparel", "", -1} },
            { "U_O_SpecopsUniform_ocamo", "", 22500, { "Recon Fatigues (Hex)", "", -1 } },
            { "U_O_PilotCoveralls", "", 27500, { "Pilot Coveralls [AAF]", "", -1 } },
            { "U_O_GhillieSuit", "", 35000, { "Ghillie Suit [AAF]", "", -1 } },
            { "U_O_FullGhillie_sard", "", 47500, {"Full Ghillie (Semi-Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_ard", "", 47500, {"Full Ghillie (Arid) (NATO)", "", -1} },
            { "U_B_FullGhillie_lsh", "", 47500, {"Full Ghillie (Lush) (NATO)", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 1625, { "", "", -1 } },
            { "H_Shemag_olive", "", 1625, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 1625, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2390, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 2275, { "", "", -1 } },
            { "H_Bandanna_camo", "", 1000, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 1250, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 125, { "", "", -1 } },
            { "G_Shades_Blue", "", 100, { "", "", -1 } },
            { "G_Sport_Blackred", "", 100, { "", "", -1 } },
            { "G_Sport_Checkered", "", 100, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 100, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 100, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Lowprofile", "", 150, { "", "", -1 } },
            { "G_Combat", "", 275, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 1050, { "", "", -1 } },
            { "G_Balaclava_combat", "", 1050, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 1050, { "", "", -1 } },
            { "G_Balaclava_oli", "", 900, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 900, { "", "", -1 } },
            { "G_Bandanna_beast", "", 900, { "", "", -1 } },
            { "G_Bandanna_blk", "", 900, { "", "", -1 } },
            { "G_Bandanna_khk", "", 900, { "", "", -1 } },
            { "G_Bandanna_oli", "", 900, { "", "", -1 } },
            { "G_Bandanna_shades", "", 900, { "", "", -1 } },
            { "G_Bandanna_sport", "", 900, { "", "", -1 } },
            { "G_Bandanna_tan", "", 900, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "Rangemaster Belt", 10000, { "", "", -1 } },
            { "V_BandollierB_blk", "Slash Bandolier (Black)", 12500, { "", "", -1 } },
            { "V_BandollierB_khk", "Slash Bandolier (Khaki)", 12500, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "Carrier Lite (Green)", 15000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr", "Carrier Rig (Green)", 15000, { "", "", -1 } },
            { "V_PlateCarrier3_rgr", "Carrier Rig (Green)", 15000, { "", "", -1 } },
            { "V_PlateCarrierGL_rgr", "Carrier GL Rig (Green)", 17500, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "Carrier Lite (Black)", 17500, { "", "", -1 } },
            { "V_PlateCarrierSpec_rgr", "Carrier Special Rig (Green)", 17500, { "", "", -1 } },
            { "V_Chestrig_khk", "Chest Rig (Khaki)", 19000, { "", "", -1 } },
            { "V_Chestrig_blk", "Fighter Chestrig (Black)", 19000, { "", "", -1 } },
            { "V_TacVest_khk", "Tactical Vest (Khaki)", 19000, { "", "", -1 } },
            { "V_TacVest_blk", "Tactical Vest (Black)", 19000, { "", "", -1 } },
            { "V_TacVestIR_blk", "Raven Vest", 24500, { "", "", -1 } },
            { "V_TacVestCamo_khk", "Camouflaged Vest", 24500, { "", "", -1 } },
            { "V_HarnessO_brn", "LBV Harness", 27500, { "", "", -1 } },
            { "V_HarnessO_gry", "LBV Harness (Gray)", 27500, { "", "", -1 } },
            { "V_PlateCarrierIA1_dgtl", "GA Carrier Lite (Digi)", 33500, { "", "", -1 } },
            { "V_PlateCarrierIAGL_dgtl", "GA Carrier GL Rig (Digi)", 33500, { "", "", -1 } },
            { "V_RebreatherB", "Rebreather (NATO)", 33500, { "", "", -1 } },
            { "V_PlateCarrier_Kerry", "US Plate Carrier Rig (Kerry)", 40000, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "CTRG Plate Carrier Rig Mk.2 (Heavy)", 40000, { "", "", -1 } },
            { "V_I_G_resistanceLeader_F", "Tactical Vest (Stavrou)", 40000, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "Carrier Special Rig (Black)", 47500, { "", "", -1 } },
            { "V_PlateCarrierSpec_mtp", "Carrier Special Rig (MTP)", 47500, { "", "", -1 } },
            { "V_PlateCarrierGL_blk", "Carrier GL Rig (Black)", 47500, { "", "", -1 } },
            { "V_PlateCarrierGL_mtp", "Carrier GL Rig (MTP)", 47500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
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
            { "U_IG_Guerilla1_1", "Guerilla Garment", 2500, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 75, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "Carrier Lite (Green)", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } }
        };
    };
};
