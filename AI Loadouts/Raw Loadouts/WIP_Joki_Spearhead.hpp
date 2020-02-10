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
				"Year 2027. The CSAT and Russia coalition has been made. Their first action -- advancing and capturing Northern Europe and clearing a safe path to Kalingrad.",
				"Action is taking place near the Finnish river of Ruha. CSAT's 1st and 5th mechanized divisions are pushing to capture bridges that cross the river Ruha."			
			};
            mission[] = {
				"-Push through the frontline(Blue dots)",
				"-Capture construction site",
				"-Capture Airfield",
				"-Capture Bridge #1 and #2"
			};
            friendlyForces[] = {
				"CSAT 5th mechanized division north of your position."
			};
            enemyForces[] = {
				"-US NATO Infantry",
				"-NATO Merkava class tank divisions",
				"-US NATO Mechanized forces",
				"-US NATO light air forces"
			};
            commandersIntent[] = {
				"Protect your armored support as much as possible. Armor is your key to completing this mission.",
				"Northern frontline approach is the most open for tanks, but has a minefield nearby and very little cover for infantry.",
				"Southern frontline approach is perfect for infantry, but has very rough terrain for vehicles.",
				"Middle frontline approach is the most direct appraoch, good both for infantry and armor."
			};
            movementPlan[] = {
				"Choose an approach to the frontline where CSAT can do the most damage to the enemy, capture the construction site and the airfield by eliminating all enemy forces. Use your armor with care, NATO has a couple of tank divisions in this region, who can inflict serious damage to this campaign.",
				"Eliminating all enemy presence and its reinforcements will complete the objectives"};
            fireSupportPlan[] = {};
            specialTasks[] = {
				"-Do not let the bridges get destroyed",
				"-Do not let your tanks get destroyed",
				"-Eliminate all enemy light air forces to stop them from reporting your position.",
				"-Eliminate base commander"
			};
            logistics[] = {
				"2x T100 CSAT tanks -- 3 seats each",
				"LSV Mk. II (M134)* -- 7 seats",
				"LSV Mk. II (AT)* -- 7 seats", 
				"2x LSV Mk. II* -- 7 seats each",
				"*LSV's have low amount of ammunition inside of them"
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
            friendlyForces[] = {
				"HMMWV (Unarmed)",
				"HMMWV M2",
				"M1151 (M2)",
				"HEMMT Transport",
				"Badger IFV",
				"Merkava Mk IV M",
				"AH-6M-L Little Bird",
				"OH-6M Littlebird"
			};
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
					{"U_B_T_Soldier_F", 0.5},
						{"U_B_T_Soldier_AR_F", 0.5}
				};
                vests[] = {
					{"V_PlateCarrier1_tna_F", 0.8},
						{"V_PlateCarrier2_tna_F", 0.2}
				};
                headgear[] = {
					{"H_HelmetB_tna_F", 0.9},
					{"H_HelmetB_Enh_tna_F", 0.1}
				};
                goggles[] = {};
                backpacks[] = {
					{"B_AssaultPack_tna_F", 1}
					};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"CUP_arifle_Mk17_STD_woodland", 0.4},
					{"CUP_arifle_Mk17_CQC_woodland", 0.4},
					{"CUP_lmg_Mk48_wdl", 0.1}
					
				};
                launchers[] = {
					{"launch_MRAWS_green_rail_F", 0.15},
					{"", 0.85}
				};
                attachments[] = {
					{"optic_holosight_khk_f", 0.5},
					{"cup_optic_compm2_woodland2", 0.5}
					
				};
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
