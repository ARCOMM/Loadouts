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
            situation[] = {
            };
			mission[] = {          
                };
            friendlyForces[] = {};
            enemyForces[] = {};
            commandersIntent[] = {};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {};
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
            situation[] = {
                "Daesh has cleared out old unused farmland to set up a major forward base allowing them to assert their claim on the surrounding landscape, causing tension and increased violence in the area.",
                "We have just received intel they have gotten their hands on some heavily armoured assets that could be used to great effect should they decide to push further east. This cannot happen, we will launch a preemptive strike and neutralize as much of their assets as possible while inflicting as much casualties as possible."
            };
            mission[] = {
                "Your objectives are as follows:",
                "- Kill Rasheed Al-Jafari, Al-Jafari is an old Iraqi army colonel. He is in charge over this base and all it's units.",
                "- Neutralize the enemy heavy armor, they haven't been supplied with ammo or fuel so they should be inactive.",
                "- Destroy the large radar tower they have placed inside the compound. It's massive, you can't miss it.",
                "- Destroy all anti-air assets. There are several ZU-23 guns in the area. There is also a cache of MANPADS." 
            };
            friendlyForces[] = {
                "A platoon of Russian Mechanized troops. Attached to the platoon is one BTR-90 and a Anti-Tank team with Metis launchers."
            };
            enemyForces[] = {
                "ISIL, ISIS, Daesh what ever you want to call them. Scum of the earth. They are fielding a lot of lightly armoured assets in the area. Both old russian and more modern Iraqi/American.",
                "They are equipped with a large variety of small arms and other combat gear."
            };
            commandersIntent[] = {
                "Approach the enemy camp how ever you please. Due to the presence of the enemy anti-air assets we can't safely deploy any gunships for support."
            };
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "1x BTR-90 - 15 passenger seats. The BTR comes equipped with a 30mm auto-cannon, a 7.62 Machine gun, an AT-5 missile launcher and a 40mm grenade launcher.",
                "1x GAZ equipped with a Metis-M launcher - 3 seats. This vehicle carries extra ammunition for the Anti-Tank team.",
                "6x Vodnik armed with PKM machine guns - 12 passenger seats and one driver. Some additional ammunition can be found in these vehicles."
            };
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
            enableGroupMarkers = true;
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
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgtl", "mattl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgtl", "mattl", "mtrl", "fac"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class OPFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgtl", "mattl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgtl", "mattl", "mtrl", "fac"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class INDFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgtl", "mattl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgtl", "mattl", "mtrl", "fac"};
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
