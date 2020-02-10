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
                "Last night Russian forces have moved into NATO territory and started building rudimentary infrastracture to support a large scale invasion, according to our operatives in the area. Other NATO forces cannot respond quickly enough and so our platoon has been tasked with eliminating any Russian bases in the area to thwart their invasion.",              
                "Whilst conducting recon one of our operatives car broke down in enemy territory. We have managed to contact him via long range radio and apparently he is hiding in the town of Nyrhilanmaki with Russians closing in on him.",
                "NATO forces are on it's way, but so are the Russians, this mission will therefore have to be conducted swiftly as we do not know at this moment who will arrive first to the scene."
            };
            mission[] = {
                "Rescue trapped operative in the town of Nyrhilanmaki before Russians find him",
                "Eliminate communications tower in Huhtamaki",
                "Locate and eliminate weapons cache in the marsh north of Marjasalo",
                "Locate and eliminate Russian motor pool in the forest south of Kivimaki"
            };
            friendlyForces[] = {
                "Marine Corps MARSOC",
                "2x MH-6M Littlebird (seats 6+2)",
                "2x CH-47F Chinook (28+2)",
                "1x AH-6M-M CAS Littlebird (seats 1+2)"                
            };
            enemyForces[] = {
                "Several Russian motorized infrantry platoons",
                "Tracked APCs"
            };
            commandersIntent[] = {};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "2x Resupply crate (ammo)",
                "1x Resupply crate (medic)",
                "Crate with explosives by hangar entrance"
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
            situation[] = {
                "Last night Russian forces have moved into NATO territory and started building rudimentary infrastracture to support a large scale invasion, according to our operatives in the area. Other NATO forces cannot respond quickly enough and so our platoon has been tasked with eliminating any Russian bases in the area to thwart their invasion.",              
                "Whilst conducting recon one of our operatives car broke down in enemy territory. We have managed to contact him via long range radio and apparently he is hiding in the town of Nyrhilanmaki with Russians closing in on him.",
                "NATO forces are on it's way, but so are the Russians, this mission will therefore have to be conducted swiftly as we do not at this moment know who will arrive first to the scene"
            };
            mission[] = {
                "Rescue trapped operative in the town of Nyrhilanmaki before Russians find him",
                "Eliminate communications tower in Huhtamaki",
                "Locate and eliminate weapons cache in the marsh north of Marjasalo",
                "Locate and eliminate Russian motor pool in the forest south of Kivimaki"
            };
            friendlyForces[] = {
                "Marine Corps MARSOC",
                "2x MH-6M Littlebird (seats 6+2)",
                "2x CH-47I Chinook (18+2)",
                "1x AH-6M-M CAS Littlebird (seats 1+2)"                
            };
            enemyForces[] = {
                "Several Russian motorized infrantry platoons",
                "Tracked APCs"
            };
            commandersIntent[] = {
                "FOR ZEUS:",
                "3x big russian fireteam per objective first then send in two trucks",
                "Make sure CAS is busy with armor so he doesnt blow up the reinf. trucks",
                "If the mission is too easy, spawn a convoy of armored vehicles heading N to S to the airport and force blu to respond",
                "If the mission is taking too long, inform them that the opfor has arrived, spawn some big stuff on the edges and move them on blufor to force them to retreat",
                "WIN: Blufor doesnt lose airport + gets at least 2/3 objectives (operative optional)",
                "LOSE: Blufor is forced to retreat, loses an airport or becomes ineffective in dealing with the objectives"
            };
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "2x Resupply crate (ammo)",
                "1x Resupply crate (medic)",
                "Crate with explosives by hangar entrance"
            };
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
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgtl", "mattl", "mtrl", "fac", "rs"};
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
                    {"CUP_U_O_RUS_EMR_1", 1}
                };
                vests[] = {
                    {"CUP_V_I_RACS_Carrier_Vest_wdl_3", 1}
                };
                headgear[] = {
                    {"CFP_MitzHelm1_Wdl", 0.25},
                    {"CFP_MitzHelm2_Wdl", 0.25},
                    {"CFP_MitzHelm3_Wdl", 0.25},
                    {"CFP_MitzHelm4_Wdl", 0.25}
                };
                goggles[] = {};
                backpacks[] = {
                    {"CUP_B_AlicePack_Khaki", 1}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_AK107", 0.7},
                    {"hlc_rifle_rpk74n", 0.2},
                    {"CUP_arifle_AK107_GL", 0.1}
                };
                launchers[] = {
                    {"", 0.8},
                    {"launch_RPG7_F", 0.2}
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
