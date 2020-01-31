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
        class OPFOR {
            situation[] = {
                "Our operation to occupy the northern part of Chernarus was a success and the logistical teams are strengthening the defenses as we speak, but during yesterdays bad weather a helicopter was damaged and forced to land in an enemy territory.",
                "The helicopter was carrying highly classified cargo which can only be extracted by a specialist. We do not know what happened to the pilots nor if there are enemies in the area, but considering the timing it is highly likely that we will be there first.",
                "HQ is planning to begin their assault alongside our operation. That will alleviate some pressure off of us, but will also leave us without any reinforcements.",
                "We have been deployed in the city of Rogovo and are tasked with securing and defending the downed helicopter near the city of Nadezhdino until the cargo has been secured."
            };
            mission[] = {
                "Defend the downed helicopter until the specialist team arrives. They have been notified and will take some time to prepare",
                "Destroy the helicopter and extract from the area with the specialists",
                "Only the specialist team is capable of extracting the cargo safely"
            };
            friendlyForces[] = {
                "Russian motorized platoon",
                "Gambler team (SPG-9)",
                "Logistics team",
                "(en-route) Delta 1 Specialist Team"
            };
            enemyForces[] = {
                "1st Batallion of Chernarus Defense Forces",
                "39th Guards Airborne Corps",
                "Expect helicopter transport, BTRs, BRDMs, BMPs and T-55s"
            };
            commandersIntent[] = {
                "We have a timing advantage and a number disadvantage, so we should get into favorable positions to defend and stall the enemy.",
                "Our scouts are reporting that it should take roughly 20 minutes for the enemy to mobilize."
            };
            movementPlan[] = {
                "Logistical team has the skills and tools to place down entrenchments and mines, load and offload the resupply cargo safely and do repairs on damaged vehicles. They can be aided by other members of the platoon, but only under supervision.",
                "All the resupply has been distributed to other platoons, but if you run out you can try and ask the Foxtrot Logi Team on 152 Foxtrot Logi Net."
            };
            fireSupportPlan[] = {};
            specialTasks[] = {
                "Locate the the two downed pilots, investigate what might have happened and recover them or their bodies."
            };
            logistics[] = {
                "There are several resupply crates and a logi truck. Only the logi truck has space to load crates (10 slots)",
                "(Ammo crate 6 slots, Launchers and Medics crate 2 slots, Explosives crate 4 slots)",
                "3x Transport Ural (20 seats)",
                "1x UAZ Transport (7 seats)",
                "1x UAZ SPG-9 (3 seats)",
                "1x Repair Ural (logi) (3 sats)"
            };
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
        class OPFOR {
            languages[] = {"russian"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc"};
            AN_PRC_152[] = {"co", "dc", "vc", "ll", "ls"};
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"CUP_U_B_CDF_FST_2", 1}
                };
                vests[] = {
                    {"CUP_V_CDF_6B3_3_FST", 1}
                };
                headgear[] = {
                    {"CUP_H_CDF_H_PASGT_FST", 0.9},
                    {"CUP_H_CDF_OfficerCap_FST", 0.1}
                };
                goggles[] = {};
                backpacks[] = {
                    {"CUP_B_CDF_RPG_Backpack", 1}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_AK74", 0.7},
                    {"CUP_arifle_AKS74", 0.1},
                    {"CUP_lmg_PKM", 0.2}
                };
                launchers[] = {
                    {"CUP_launch_RPG7V", 0.2}
                };
                attachments[] = {};
            };
            class OPFOR {
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
