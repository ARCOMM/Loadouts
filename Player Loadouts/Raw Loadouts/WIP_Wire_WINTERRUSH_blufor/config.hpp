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
            situation[] = {"Due to the diligence of our forces we have discovered the location of a PMC vehicle depot. It is in our interest to remove all major vehicle assets by explosives from this base."};
            mission[] = {"Enter compound and destroy any vehicles that could be a major threat, Transports are secondary if enough explosives present. Ensure that the Hangar in the rear of the base is cleared. There should be no stored vehicle left standing in the base on exfil. Exfil back to airbase when confirmed done."};
            friendlyForces[] = {"US forces"};
            enemyForces[] = {"PMC with money"};
            commandersIntent[] = {"Enter compound, blow up assets, leave compound. Be prepared for reinforcements while setting explosives."};
            movementPlan[] = {"At team leads discretion"};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {"The M183 Demo Charges have been modified to blast an explosive pin up. Place them under a tank, detonate the charge and wait for a follow up explosion."};
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
					{ "MNP_CombatUniform_ASA_GC3_B", 0.75 },
					{ "MNP_CombatUniform_ASA_GC3", 0.25 } };
				vests[] = {
					{ "V_TacVest_blk", 0.5 },
					{ "V_TacVest_oli", 0.25 },
					{ "V_TacVest_camo", 0.25 },
				};
				headgear[] = {
					{ "H_MilCap_gry", 0.20 },
					{ "H_PASGT_basic_olive_F", 0.35 },
					{ "H_PASGT_basic_black_F", 0.35 },
					{ "H_PASGT_basic_white_F", 0.10 },
				};
				goggles[] = {};
				backpacks[] = {
					{ "B_AssaultPack_blk", 1 },
				};
				faces[] = {};
				voices[] = {};
				rifles[] = {
					{ "hlc_rifle_g3ka4", 0.30 },
					{ "hlc_rifle_g3a3RIS", 0.50 },
					{ "hlc_rifle_hk33a2RIS", 0.20 },
				};
				launchers[] = {
					{ "launch_NLAW_F", 0.15 },
					{ "launch_RPG7_F", 0.05 },
					{ "", 0.80 },
				};
				attachments[] = {};
			};
            class INDFOR {
				enabled = true;
				removeNightVision = true;
				removeMedicalItems = true;
				prioritizeTracerMags = true;
				uniforms[] = {
					{ "MNP_CombatUniform_ASA_GC3_B", 0.75 },
					{ "MNP_CombatUniform_ASA_GC3", 0.25 } };
				vests[] = {
					{ "V_TacVest_blk", 0.5 },
					{ "V_TacVest_oli", 0.25 },
					{ "V_TacVest_camo", 0.25 },
				};
				headgear[] = {
					{ "H_MilCap_gry", 0.20 },
					{ "H_PASGT_basic_olive_F", 0.35 },
					{ "H_PASGT_basic_black_F", 0.35 },
					{ "H_PASGT_basic_white_F", 0.10 },
				};
				goggles[] = {};
				backpacks[] = {
					{ "B_AssaultPack_blk", 1 },
				};
				faces[] = {};
				voices[] = {};
				rifles[] = {
					{ "hlc_rifle_g3ka4", 0.30 },
					{ "hlc_rifle_g3a3RIS", 0.50 },
					{ "hlc_rifle_hk33a2RIS", 0.20 },
				};
				launchers[] = {
					{ "launch_NLAW_F", 0.15 },
					{ "launch_RPG7_F", 0.05 },
					{ "", 0.80 },
				};
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
