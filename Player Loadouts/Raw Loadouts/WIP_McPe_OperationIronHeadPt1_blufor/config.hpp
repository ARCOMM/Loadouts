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
                "Two years ago the Russians seized the Podagorsk peninsula to solidify their grip on the sea and airspace in the sector.",
                "Today we are taking it back.",
                "Our platoon is tasked with securing the southernmost tip of the peninsula. The operation will be split into two parts. First we need to capture the port of Protvino, we can then use it's facilities to bring in heavier armaments.",
                "We have landed on the peninsula and are now preparing to move on Protvino. Once the town is in our hands we can progress further south."
            };
            mission[] = {
                "- Disable the AA installation",
                "- Capture and hold both the Protvino town and especially the harbour",
                "- (optional) Destroy any opposition at the Protvino Garrison."
            };
            friendlyForces[] = {
                "One mechanized platoon of United States Marine Corps. We also have access to fixed wing air support during this operation.",
                "The AAVP7/A1 houses resupply both for the infantry and the vehicles. Try to keep it in one piece, it will be invaluable when we push further south."
            };
            enemyForces[] = {
                "The northern part of our AO is fairly lightly defended. The heaviest concentration of enemy forces is at the Kutznetsk military base and the AFB. You can expect hostile reinforcements from these locations.",
                "The Russian army has deployed mechanized troops, paratroopers and tanks to the peninsula. Expect all of these inside the AO.",
                "The Bolshevik AFB houses both choppers and aircraft for the russian airforce. They shouldn't pose much threat due to the friendly air power in the area. They might try to sneak a chopper through though.",
                "While the AA site houses the areas only known missile based anti-air (2S6 Tunguska). There are several reports of ZSU-23 'Zeus' in the area. The Zeus shouldn't pose much of a threat but don't underestimate them."
            };
            commandersIntent[] = {
                "It is vital that you deal with the AA installation as soon as possible to enable airstrikes within the AO. Beyond that you are free to deal with your objectives as you wish.",
                "The civilians who lived in Protvino has been relocated to the western and southern side of the peninsula. So you shouldn't have to worry about them.",
                "Take care not to damage any of the vital structures in the port. We need those cranes.",
                "Regarding the Protvino garrison, you don't actually have to secure the area but given time that garrison might prove hard to deal with. If the Russians are allowed to use it as a staging ground we might get pushed out of the harbour area."
            };
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "- 1x F/A-118 Black Wasp II - 6x AGMs, 8x 250lb GBU, 2x 500lb GBU, 2x Short range AA missiles, 2x Medium range AA missiles.",
                "- 2x LAV-25 - 3 Crew, 6 Passengers",
                "- 1x AAVP7/A1 - 3 Crew, 16 Passgengers. Unarmed variant."
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
