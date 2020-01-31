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
        freezeTime = 2;
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
                "The insurgency group GRNF have managed to get a hold of two thermo-nuclear missiles. As we were getting dispatched to their home base a giant explosion shook the ground.",
                "We belive they must have detonated one of the bombs, if it was by accident or in purpose is of no significance, we need to quickly go and dispose of the second bomb before they evacuate the area with it."
            };
            mission[] = {
                "Find and destroy a nuclear device in the city of Tanouka."
            };
            friendlyForces[] = {
                "US CBRN Quick Response Group",
                "MAT Team (javelin)",
                "World Health Organisation medical teams"
            };
            enemyForces[] = {
                "GRNF Insurgents",
                "Expect BTRs, BRDMs, BMPs and M113s"
            };
            commandersIntent[] = {
                "Geiger counters function poorly in a vehicle and radiation does quick wonders to a vehicle itself, it is advised to leave the transport VICs before entering the AO."
            };
            movementPlan[] = {
                "There is radiation fallout present in the area, our gear can protect us, but only up to a point.",
                "Every soldier is equipped with a Geiger Counter, so make use of it."                
            };
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "3x HEMTT Transport",
                "1x MAT HMMWV (with MAT ressuply)",
                "Satchel charges are in the C130"
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
                "The insurgency group GRNF have managed to get a hold of two thermo-nuclear missiles. As we were getting dispatched to their home base a giant explosion shook the ground.",
                "We belive they must have detonated one of the bombs, if it was by accident or in purpose is of no significance, we need to quickly go and dispose of the second bomb before they evacuate the area with it."
            };
            mission[] = {
                "Find and destroy a nuclear device in the city of Tanouka."
            };
            friendlyForces[] = {
                "US CBRN Quick Response Group",
                "MAT Team (javelin)",
                "World Health Organisation medical teams"
            };
            enemyForces[] = {
                "GRNF Insurgents",
                "Expect BTRs, BRDMs, BMPs and M113s"
            };
            commandersIntent[] = {
                "Geiger counters function poorly in a vehicle and radiation does quick wonders to a vehicle itself, it is advised to leave the transport VICs before entering the AO."
            };
            movementPlan[] = {
                "There is radiation fallout present in the area, our gear can protect us, but only up to a point.",
                "Every soldier is equipped with a Geiger Counter, so make use of it."                
            };
            fireSupportPlan[] = {
                "FOR ZEUS:",
                "There is nothing special script wise. Radiation is in some buildings, around car wrecks and in tall grass. Try not to send AI through those areas often as to not confuse players.",
                "When players destroy the device and the nuke goes off end the mission as a success.",
                "Armored + motorized reinforcement template is up the hill in the north, copy paste it somewhere closer when you want to reinforce."
            };
            specialTasks[] = {};
            logistics[] = {
                "3x HEMTT Transport",
                "1x MAT HMMWV (with MAT ressuply)",
                "Satchel charges are in the C130"
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
            languages[] = {"english"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "matl", "m"};
            AN_PRC_152[] = {"co", "dc", "matl"};
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
                    {"skn_u_nbc_indep_blk", 0.33},
                    {"skn_u_nbc_indep_blu", 0.33},
                    {"skn_u_nbc_indep_gre", 0.34}
                };
                vests[] = {
                    {"SP_Tactical1_Grey", 1}
                };
                headgear[] = {};
                goggles[] = {
                    {"skn_m04_gas_mask_gre", 1}
                };
                backpacks[] = {
                    {"CFP_AssaultPack_Marpat", 1}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_G36A_RIS", 0.8},
                    {"hlc_lmg_MG42", 0.2}
                };
                launchers[] = {
                    {"CUP_launch_RPG18", 0.2},
                    {"", 0.8}
                };
                attachments[] = {
                    {"CUP_acc_Flashlight", 1}
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
