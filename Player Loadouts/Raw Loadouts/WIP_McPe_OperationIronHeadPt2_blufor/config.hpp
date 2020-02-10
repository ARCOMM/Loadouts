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
                    "So the first part of this operation could have gone smoother. We lost both a LAV and the AAV during the assault on the harbour.",
                    "High command is still happy however and we've been resupplied and tasked with pushing further south to capture the Kutznetsk military base and the Bolshevik AFB.",
                    "It's been a few hours since we captured the harbour. The Russians are certainly aware of our presence and have probably set up defensive positions to block our advance.",
                    "We have noticed a lot of enemy movement away from the Kutznetsk military base and the latest sweeps shows no contacts there at all. We are now operating on the assumption that the base has been abandoned. "
            };
            mission[] = {
                    "- Capture Bolshevik AFB and neutralize all hostile forces at below specified locations.",
                    "Central control tower, the heliport, southern docks, field hospital and the main barracks to the east.",
                    "- Do not harm any surrendered enemies.",
                    "- Disable the comms tower south of Kronotsky Post."
            };
            friendlyForces[] = {
                "One mechanized platoon of United States Marine Corps. We also have access to fixed wing air support during this operation.",
                "Due to losses during the capture of the harbour we've been resupplied with an M1A2 Abrams and a few M1151 HMMWVs."
            };
            enemyForces[] = {
                "The Russian army has deployed mechanized troops, paratroopers and tanks to the peninsula. Expect all of these inside the AO.",
                "The Bolshevik AFB houses both choppers and aircraft for the russian airforce. They shouldn't pose much threat due to the friendly air power in the area. They might try to sneak a chopper through though. Keep in mind that there's still ZSU-23 Shilkas in the area.",
                "Considering the oposition we faced during the assault on the harbour it would seem that the russians saved a lot of their heavier units for the defence of the southern tip of the peninsula.",
                "Since the military base has been abandoned we've moved the comms tower up the priority list. You must now knock out the communications ny disabling the power supply."                
            };
            commandersIntent[] = {
                "Stay alert while moving through the AO, the Russians have had some time to prepare and have probably setup defensive positions and ambushes.",
                "According to intel there is quite the morale problem in the russian army. Hit them hard and fast enough and they might throw down their arms. You've been provided with cable ties in case you come across any potential POWs. Just gather them up and we'll collect them later."
            };
            movementPlan[] = {
                "The areas civilians have been relocated to the town of Berezniki. Due to the 'accident' this morning (involving a certain pilot) the town has been designated a no-go zone for armed aircraft.",
                "Remember that the LAV-25 is amphibious. Could be useful in the assault on the airfield."
            };
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "- 1x F/A-118 Black Wasp II",
                "- 1x LAV-25 - 3 Crew, 6 Passengers",
                "- 1x M1A1 Abrams TUSK - 4 Crew",
                "- 3x M1151 HMMWVs, two .50cal and one Mk19. Both variants seat 5 people."
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
            mission[] = {
                "Throw a few ACE Surrender modules down on AI at suitable times."
            };
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
            AN_PRC_117F[] = {"fac", "P"};
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
                    {"MNP_CombatUniform_RU_Med", 1.0}
                };
                vests[] = {
                    {"MNP_Vest_RU_T2", 1.0}
                };
                headgear[] = {
                    {"CUP_H_RUS_6B27_olive", 1.0}
                };
                goggles[] = {
                    {"G_Balaclava_oli", 0.4},
                    {"", 0.6}
                };
                backpacks[] = {
                    {"MNP_B_RU2_CA", 1.0}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"hlc_rifle_ak74m", 0.6},
                    {"hlc_rifle_ak74m_gl", 0.2},
                    {"hlc_rifle_rpk74n", 0.1},
                    {"CUP_lmg_Pecheneg", 0.1}
                };
                launchers[] = {
                    {"CUP_launch_RPG7V", 0.1},
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
