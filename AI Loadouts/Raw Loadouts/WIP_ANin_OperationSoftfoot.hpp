class CfgARCMF {
    /*
-----------------------------------------------------------------------------------------------------------------
        GENERAL CONFIGURATION
        Description: This is the section where you can define general settings for the mission.
-----------------------------------------------------------------------------------------------------------------
    */
    class General {
        // 0: Time is not frozen
        // 1: Time is frozen indefinitely
        // 2: Time is frozen only during briefing stage
        freezeTime = 0;
    };
    /*
-----------------------------------------------------------------------------------------------------------------
        BRIEFING CONFIGURATION
        Description: This is the section where you define the text content for the briefing on each team.
        Note: Each text element gets placed on its own line.
        Warning: You must wrap every line in quotes, eg. mission[] = {"This is your mission"};
-----------------------------------------------------------------------------------------------------------------
    */
    class Briefing {
        class BLUFOR {
            situation[] = {"Welcome to the Takistan mountain range gentlemen.", "Our assault on the Takistanis has been largely successful, but this next leg is where we're expecting things to get rough. We're sending in the 52nd Ordnance Group, you, to clear the road ahead of IEDs and hostile forces for our wonderful Abrams tanks of the 1st Armored to pass behind you with the 3rd Infantry. Fortunately, air assets have already blown the hell out of any hard targets and enemy positions for the most part but, due to civilian presence, were unable to completely clear all opposition. Hearts and minds strikes again.", "Sadly, we have no air assets available at this time and the 1st Armored are refitting and rearming at their Forward Operating Base so they won’t be able to support you either. Should things go south the 3rd Infantry will reinforce you. Adding on to air assets, we lost a Blackhawk in this valley so if you find it and any survivors try and rescue them.", "Also, enemy forces are using a whole mess of weapons and equipment, so just look for fools in pajamas."};
            mission[] = {"Bring no harm to civilians and be aware of their presence at all times.","Seek and destroy all IEDs, obstructions, and obstacles on and close to the road.","Take the marked road to the mosque to clear the way for the 1st Armored and 3rd Infantry."};
            friendlyForces[] = {"US Army"};
            enemyForces[] = {"Takistani Militia and Military Forces"};
            commandersIntent[] = {"You are not expected to clear towns in their entirety.","The civilians are not completely trustworthy, but they are still civilians. Be wary of them and do not harm them without cause."};
            movementPlan[] = {"Convoy up the road to the mosque."};
            fireSupportPlan[] = {};
            specialTasks[] = {"Inside the Mosque are two HVTs that might be able to escape before the 1st Armored and 3rd Infantry arrive to reinforce you. Try to kill them before they can flee to the airport. You are permitted to fire on the mosque with small arms, but cannot use any types of explosives or mounted weapons on the mosque itself.", "In addition, we believe the locals have been trafficking explosives and weapins for the Takistani army and militia. Should you find any confiscate or destroy it. Any who stand in your way are to be seen as enemy combatants, depending on your judgement."};
            logistics[] = {"x5 RG-31 M2 GC - 8 Seater", "x1 RG-31 Mk19 GC - 8 Seater", "MTVR Repair Vehicle - 2 Seater"};
        };
        class OPFOR {
            situation[] = {};
            mission[] = {};
            friendlyForces[] = {};
            enemyForces[] = {};
            commandersIntent[] = {};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {};
        };
        class INDFOR {
            situation[] = {};
            mission[] = {};
            friendlyForces[] = {};
            enemyForces[] = {};
            commandersIntent[] = {};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {};
        };
        class CIVILIAN {
            situation[] = {};
            mission[] = {};
            friendlyForces[] = {};
            enemyForces[] = {};
            commandersIntent[] = {};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {};
        };
        class GAME_MASTER {
            situation[] = {};
            mission[] = {};
            friendlyForces[] = {};
            enemyForces[] = {};
            commandersIntent[] = {};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {};
        };
    };
    /*
-----------------------------------------------------------------------------------------------------------------
        MARKER CONFIGURATION
        Description: This is the section where you define the settings for group map markers.
-----------------------------------------------------------------------------------------------------------------
    */
    class Markers {
        class BLUFOR {
            enableGroupMarkers = true
        };
        class OPFOR {
            enableGroupMarkers = true;
        };
        class INDFOR {
            enableGroupMarkers = true;
        };
    };
    /*
-----------------------------------------------------------------------------------------------------------------
        ACRE RADIO CONFIGURATION
        Description: This is the section where you define which radios particular loadouts get for each side.
        Notes:
            1. If you want a radio to be assigned to all units, put "all".
            2. Possible language values are "english", "greek" and "russian".
-----------------------------------------------------------------------------------------------------------------
    */
    class ACRE {
        class BLUFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgl", "matl", "mtrl", "fac"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class OPFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgl", "matl", "mtrl", "fac"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class INDFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgl", "matl", "mtrl", "fac"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
    };
    /*
-----------------------------------------------------------------------------------------------------------------
        AI GEAR CONFIGURATION
        Description: This is the section where you define loadouts for the AI teams.
        Notes:
            1. AI loadouts are randomized based on their probability settings.
                a. Probability between 0 and 1 (0 = 0%, 1 = 100%).
                b. If array elements don't add up to 1 then ranges are recalculated proportionally.
                c. To remove a default item use an empty string.
            2. This is an array of classnames.
            3. ARC_AI disables the use of grenades and grenade launchers for AI units.
            4. This handles any spawning of units whether it's Zeus, MCC or script.
            5. prioritizeTracerMags - true will only add tracer magazines if available (reverts to standard if none).
            6. removeMedicalItems - true will remove all ACE medical items.
            7. removeNightVision - true will remove all night vision goggles
            8. enabled - true will enable the custom AI gear for the given team, false will not
        Example:
            headgear[] = {
                {"H_HelmetSpecB_snakeskin", 0.8},
                {"", 0.2} // 20% chance to remove all headgear
            };
            rifles[] = {
                {"rhs_weap_m4a1_carryhandle", 0.75},
                {"rhs_weap_m249_pip_L", 0.25}
            };
-----------------------------------------------------------------------------------------------------------------
    */
    class AI {
        class Gear {
            class BLUFOR {
                enabled = false;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {};
                vests[] = {};
                headgear[] = {};
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {};
                launchers[] = {};
                attachments[] = {};
            };
             class OPFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                        {"U_I_C_Soldier_Bandit_2_F", 0.2},
                        {"CUP_U_B_CDF_DST_2", 0.1},
                        {"U_BG_Guerrilla_6_1", 0.1},
                        {"CUP_O_TKI_Khet_Jeans_04", 0.2},
                        {"CUP_O_TKI_Khet_Partug_04", 0.2},
                        {"CUP_O_TKI_Khet_Jeans_01", 0.2},
                        {"CUP_O_TKI_Khet_Partug_01", 0.2},
                        {"CUP_O_TKI_Khet_Partug_05", 0.2},
                        {"CUP_O_TKI_Khet_Partug_06", 0.2},
                        {"CUP_I_B_PMC_Unit_3", 0.1},
                        {"CUP_U_O_SLA_Green", 0.1},
                        {"CUP_U_O_TK_MixedCamo", 0.1}

                };
                vests[] = {
                        {"CUP_V_I_RACS_Carrier_Vest_2", 0.1},
                        {"CUP_V_PMC_CIRAS_Coyote_Patrol", 0.1},
                        {"CUP_V_I_RACS_Carrier_Rig_2", 0.1},
                        {"CUP_V_B_RRV_Scout", 0.2},
                        {"V_BandollierB_cbr", 0.2},
                        {"CUP_V_O_Ins_Carrier_Rig_Light", 0.1},
                        {"CUP_V_B_Eagle_SPC_Rifleman", 0.1},
                        {"V_TacVest_brn", 0.2},
                        {"CUP_V_OI_TKI_Jacket4_05", 0.2},
                        {"CUP_V_OI_TKI_Jacket3_02", 0.1},
                        {"CUP_V_O_TK_Vest_1", 0.1},
                        {"V_Chestrig_blk", 0.1},
                        {"usm_vest_LBE_rm", 0.2}
                };
                headgear[] = {
                        {"H_Bandanna_sand", 0.2},
                        {"H_PASGT_basic_black_F", 0.1},
                        {"usm_bdu_cap_des", 0.2},
                        {"CUP_H_C_Beanie_04", 0.2},
                        {"CUP_H_PMC_Cap_Back_Grey", 0.2},
                        {"usm_helmet_pasgt_d", 0.1},
                        {"CUP_H_RACS_Helmet_tan", 0.1},
                        {"MNP_Helmet_PAGST_IBSJ", 0.1},
                        {"MNP_Helmet_SOV_Steel", 0.1},
                        {"H_ShemagOpen_khk", 0.2},
                        {"CUP_H_SLA_Helmet", 0.2},
                        {"CUP_H_TK_Lungee", 0.2},
                        {"CUP_H_TKI_Lungee_05", 0.2},
                        {"CUP_H_TKI_Pakol_1_06", 0.2},
                        {"", 0.2}                        
                };
                goggles[] = {
                        {"G_Balaclava_blk", 0.2},
                        {"G_Bandanna_blk", 0.2},
                        {"G_Bandanna_aviator", 0.2},
                        {"CUP_TK_NeckScarf", 0.2},
                        {"G_Spectacles", 0.2},
                        {"", 0.2}
                };
                backpacks[] = {
                        {"CUP_B_AlicePack_Khaki", 0.1},
                        {"B_AssaultPack_cbr", 0.1},
                        {"usm_pack_762x51_ammobelts", 0.1},
                        {"B_Messenger_Black_F", 0.1},
                        {"", 0.5}  
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                        {"hlc_rifle_Colt727", 0.1},
                        {"hlc_rifle_g3a3", 0.1},
                        {"hlc_rifle_ak47", 0.2},
                        {"hlc_rifle_ak74", 0.1},
                        {"hlc_rifle_rpk", 0.1},
                        {"hlc_rifle_rpk74n", 0.1},
                        {"hlc_lmg_m249para", 0.1},
                        {"hlc_lmg_MG3", 0.05},
                        {"hlc_rifle_aks74", 0.2},
                        {"CUP_arifle_Sa58RIS1", 0.2},
                        {"CUP_lmg_PKM", 0.1},
                        {"CUP_arifle_M16A4_Base", 0.2},
                        {"CUP_lmg_M240", 0.05} 
                };
                launchers[] = {
                        {"CUP_launch_M136", 0.1},
                        {"CUP_launch_RPG7V", 0.2},
                        {"CUP_launch_RPG18", 0.1},
                        {"", 0.6}

                };
                attachments[] = {};
            };
            class INDFOR {
                enabled = false;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {};
                vests[] = {};
                headgear[] = {};
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {};
                launchers[] = {};
                attachments[] = {};
            };
            class CIVILIAN {
                enabled = false;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {};
                vests[] = {};
                headgear[] = {};
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {};
                launchers[] = {};
                attachments[] = {};
            };
        };
    };
    /*
-----------------------------------------------------------------------------------------------------------------
        FORTIFY CONFIGURATION
        Description: This is the section where you define fortification settings.
        Notes:
            1. Make sure to give units the fortify tool in their loadouts ("ACE_Fortify")
            2. For no budget at all, use -1
            3. Objects can only be placed while in briefing stage
        Example:
            budget = 5000;
            objects[] = {
                {"Land_BagFence_01_long_green_F", 50},
                {"Land_HBarrier_01_tower_green_F", 500}
            };
-----------------------------------------------------------------------------------------------------------------
    */
    class Fortify {
        class BLUFOR {
            budget = -1;
            objects[] = {};
        };
        class OPFOR {
            budget = -1;
            objects[] = {};
        };
        class INDFOR {
            budget = -1;
            objects[] = {};
        };
        class CIVILIAN {
            budget = -1;
            objects[] = {};
        };
    };
};
