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
                "Operation Ghali Shaki is the first mission led and commanded solely by the Afghan National Army. The goal is to construct two patrol bases South of Zargabad between the Route 601 and the Nez Canal. This is to prevent Taliban from launching rocket strikes on the city from the South.",
                "Construction will be done by a civilian company and so we will need to pull maximum security for them.",
                "This mission is a rite of passage of sorts for the ANA, do not assist them unless you yourself are threatened or they start taking heavy losses. Make sure you get HQ approval before engaging."
            };
            mission[] = {
                "Clear out the area between Route 601 and the Nez Canal of enemies",
                "Defend workers whilst they are constructing patrol bases November and Oscar",
                "Extract back to Jahar Zeb before sunset"
            };
            friendlyForces[] = {
                "Afghan National Army",
                "International Security Assistance Force",
                "Lashkar Construction Company"
            };
            enemyForces[] = {
                "We have launched a reconnaissance drone yesterday and we found possible Taliban Insurgents in and around buildings in the area",
                "We also spotted APCs and technicals hidden in the town and in several villages to the South",
                "Due to known heavy Taliban presence expect reinforcements both from their territory South and from their hideouts in the town North"
            };
            commandersIntent[] = {
                "Listen to the ANA commanders plan and help him improve it if there is a problem with it",
                "The ANA commander has no authority over the ISAF units"
            };
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {
                "The ISAF HQ will be on 152 Command net, make sure you recieve approval before opening fire",
                "We have limited resources but there might also be a chance of calling in an airstrike, so if everything goes bad let HQ know and they will sort something out on their end",
                "Lashkar Construction Company will be on comms with ISAF HQ"
            };
            logistics[] = {
                "1x Transport HMMWV (contains resupply)",
                "1x GMG Jackal",
                "1x .50cal HMMWV",
                "Translator will need to bind change language button"
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
            situation[] = {
                "Operation Ghali Shaki is the first mission led and commanded solely by the Afghan National Army. The goal is to construct two patrol bases South of Zargabad between the Route 601 and the Nez Canal. This is to prevent Taliban from launching rocket strikes on the city from the South.",
                "Construction will be done by a civilian company and so we will need to pull maximum security for them.",
                "We are being joined by the ISAF who have been told not to assist, except if they take contact or the situation is dire."
            };
            mission[] = {
                "Clear out the area between Route 601 and the Nez Canal of enemies",
                "Defend workers whilst they are constructing patrol bases November and Oscar",
                "Extract back to Jahar Zeb before sunset"
            };
            friendlyForces[] = {
                "Afghan National Army",
                "International Security Assistance Force",
                "Lashkar Construction Company"
            };
            enemyForces[] = {
                "Taliban"
            };
            commandersIntent[] = {
                "Keep the advice of ISAF lead in consideration, but do not lean on it too much as this is our mission not theirs",
                "Lashkar Construction Company will be on comms with ISAF HQ",
                "The ANA commander has no authority over the ISAF units"
            };
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "2x URAL (15 seats with resupply)"
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
            languages[] = {"english"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "bvc", "mvc"};
            AN_PRC_152[] = {"co", "dc"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class OPFOR {
            languages[] = {"russian"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "m"};
            AN_PRC_152[] = {"co", "dc"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class INDFOR {
            languages[] = {"russian"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "m"};
            AN_PRC_152[] = {"co", "dc"};
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
                    {"CUP_arifle_AK47", 0.6},
                    {"CUP_srifle_LeeEnfield", 0.2},
                    {"CUP_lmg_PKM", 0.2}
                };
                launchers[] = {
                    {"CUP_launch_RPG7V", 0.2}
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
