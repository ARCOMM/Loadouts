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
                "Lastay Kulang is a British ISAF operation in Helmand Province, Afghanistan. It is a part of a series of military operations conducted by ISAF forces aganist Taliban insurgents with the goal of driving Taliban out of the Province.",
                "The objective is to destroy Taliban weapons caches and armour present in the town of Gorqan and secure the area.",
                "In order to appease the local populace and save lives, try to spot and defuse IEDs along the way."
            };
            mission[] = {
                "Approach the town of Gorqan and stay the night nearby",
                "Find and clear any IED threats along the way",
                "Stage an attack on the city of Gorqan",
                "Find and destroy 2 weapons caches and armour in the city (1 APC undergoing repairs and two caches by two urals)"
            };
            friendlyForces[] = {
                "1st Battalion, The Royal Anglian Regiment (The Vikings)",
                "IED Defusal Specialist",
                "(optional) Mortar team"
            };
            enemyForces[] = {
                "Taliban insurgents",
                "Technicals and early soviet era APCs may be present"
            };
            commandersIntent[] = {
                "The camp can be made anywhere nearby and defensible, but make sure you stay hidden and not in clear line of sight to the city of Gorqan.",
                "The red oval on the map signifies rough Taliban AO"
            };
            movementPlan[] = {
                "Time has been accelerated for this mission",
                "You have 30 minutes before sun sets to get to and setup a temporary camp (uptill 8pm) (this includes briefing time)",
                "Night will last for 30 minutes (8pm-430am)",
                "Following day will last for 55 minutes",
                "It is not advised to attack during the night due to lack of NVGs"
            };
            fireSupportPlan[] = {
                "Gorqan has seen a lot of combat these past few months and so we can expect no civilians there",
                "It should take 3-5 minutes of constant driving to reach the city from the FOB",
                "Leadership roles have NVGs"
            };
            specialTasks[] = {};
            logistics[] = {
                "4x Land rover (8 seats)",
                "1x Jackal .50cal (7-11seats)"
            };
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
            languages[] = {"english"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "m"};
            AN_PRC_152[] = {"co", "dc", "mtrl"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class OPFOR {
            languages[] = {"russian"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {};
            AN_PRC_152[] = {};
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
                    {"CFP_U_KhetPartug_Short_Black", 0.25},
                    {"CFP_U_KhetPartug_Long_Creme", 0.25},
                    {"CFP_U_KhetPartug_Short_olive", 0.25},
                    {"CFP_U_KhetPartug_Short_light_olive", 0.25}                
                };
                vests[] = {
                    {"CUP_V_OI_TKI_Jacket6_02", 0.2},
                    {"CUP_V_OI_TKI_Jacket2_05", 0.2},
                    {"CUP_V_OI_TKI_Jacket3_05", 0.2},
                    {"CUP_V_OI_TKI_Jacket6_05", 0.2},
                    {"CUP_V_OI_TKI_Jacket3_06", 0.2}
                };
                headgear[] = {
                    {"CUP_H_TKI_Lungee_Open_03", 0.2},
                    {"CUP_H_TKI_Lungee_Open_04", 0.2},
                    {"CUP_H_TKI_Lungee_04", 0.2},
                    {"CUP_H_TKI_Pakol_2_04", 0.2},
                    {"", 0.2}
                };
                goggles[] = {};
                backpacks[] = {
                    {"CFP_RPGPack_Khaki", 1}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_AK47", 0.7},
                    {"CUP_arifle_FNFAL5061_wooden", 0.1},
                    {"CUP_lmg_PKM", 0.2}
                };
                launchers[] = {
                    {"CUP_launch_RPG7V", 0.2}
                };
                attachments[] = {
                    {"cup_acc_flashlight", 1}
                };
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
