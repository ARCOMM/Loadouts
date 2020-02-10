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
                "6th of May 1974",
                "After a large diplomatic incident between the Greek regime and the Turkish government in 1956 Turkey decided to cut all ties with NATO and the western world.",
                "In 1959 a revolution occurred in Ankara which ended with the Turkish peoples movement assuming power. The Turkish Peoples Republic (TPR) formally joined the Warzaw Pact in 1961.",
                "Tensions between Greece and the TPR have only risen in the past ten years and there have been several skirmishes and incidents in the Aegean sea.",
                "Nine months ago the TPR escalated the situation one step further and landed on several Greek islands. And today we are here to take one of these Islands back.",
                "The last time Australians fought against Turks it was a bloody affair. This time around we have the advantage and the element of surprise."
            };
            mission[] = {
                "- Land your forces on the island of Altis",
                "- Swiftly move to secure the airfield at the north eastern tip of the island",
                "- Secure the old radar base a few kilometers south of the airfield.",

                "- Optionally you can also secure or disable the artillery battery en route to the radar base."
                
            };
            friendlyForces[] = {
                "Australian 1st Division infantry.",
                "While we assault the airfield friendly forces will move in and set up light defences in the village of Molos."
                
            };
            enemyForces[] = {
                "There are 4 turkish divisions on Altis.",
                "In our AO you can expect infantry, light vehicles and APCs. There is a small chance that the Turks will deploy some of it's heavy armor against you.",
                "Hostile AAA has been spotted at the enemy strongpoints. We are unsure if they are active however."
            };
            commandersIntent[] = {
                "To preserve the element of surprise, make sure you advance with all haste. Your main taks is to secure a north-eastern beach head on the island.",
                "However, the airfield just cannot be ignored. It should be lightly defended. Sweep through the defences and secure the site.",
                "Once secured push south and secure the Radar base. It's situated on a hill which will allow us to control all movement heading to the north east. Effectively securing our beach head from a land assault.",
                "Neutralizing the artillery fire base on your way south will delay you but the guns wont be turned against you during your assault."
            };
            movementPlan[] = {};
            fireSupportPlan[] = {
                "In case air forces are deployed:",
                "- Do not fire into populated areas. We're here as liberators, not conquerors."
            };
            specialTasks[] = {
                "The Turks have set up mobile radars at both the airfield and the old radar base. Along with these radars they have also deployed some AAA vehicles. Neutralize these if possible."
            };
            logistics[] = {
                "- 2x Landrover armed with M2 Browning machineguns - 4 seats",
                "- 4x Landrover transports. - 8 seats",
                "- 1x UH-1D - Lightly armed - 8 passengers",
                "- 1x UH-1H - Heavily armed - 7 Passengers"
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
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"ftl", "aftl", "co", "dc", "fac", "m", "p", "cp"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "fac"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class OPFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"ftl", "aftl", "co", "dc", "fac", "m", "p", "cp"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "fac"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class INDFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"ftl", "aftl", "co", "dc", "fac", "m", "p", "cp"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "fac"};
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
                    {"CFP_U_BattleDressUniform_atacs_au", 1.0}
                };
                vests[] = {
                    {"CUP_V_RUS_Smersh_1", 0.33},
                    {"CUP_V_O_Ins_Carrier_Rig_Light", 0.33},
                    {"CUP_V_O_Ins_Carrier_Rig_MG", 0.33},
                };
                headgear[] = {
                    {"SP_SSh68Helmet_Tan1", 0.45},
                    {"SP_SSh68NetHelmet_Tan1", 0.45},
                    {"", 0,1}
                };
                goggles[] = {};
                backpacks[] = {
                    {"B_FieldPack_cbr", 1.0}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_AKM_Early", 0.5},
                    {"CUP_arifle_RPK74", 0.2},
                    {"CUP_lmg_PKM", 0.1},
                    {"CUP_arifle_AKM_GL_Early", 0.2}
                };
                launchers[] = {
                    {"CUP_launch_RPG18_Loaded", 0.1},
                    {"", 0.9}
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
