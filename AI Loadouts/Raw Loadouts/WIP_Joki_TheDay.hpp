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
            situation[] = {"Altis. Year 2028.",
			"The Great Altisian war is coming to an end with CSAT's overwhelming forces crushing the AAF.",
			"NATO were not going to intervene, but when news came that an American journalist, who has family ties with one of the heads of the state, was captured by the AAF, NATO could not abandon this important asset. If the journalist is captured by CSAT, the man would have a chance to never be seen again, due to CSAT's high-explosive tactics.",
"NATO has sent out a small force to rescue the journalist. Time is running low, if CSAT reaches the city, you must leave, to not spark any fire between NATO and CSAT.",
"There is a high presence of civillians in the area."
			};
            mission[] = {
				"PRIMARY OBJECTIVES:",
				"Destroy the repair station",
				"Rescue the journalist",
				"Kill or capture base commander",
				"SECONDARY OBJECTIVES:",
				"Destroy the generators at the powerplant to disable the lights and long-range radio communication",
				"Destroy the air radar to lessen the chance of enemy air coming in.",
				"Rescue all civillians in the city",
				"NOTE: By destroying the generators, it will delay the AAF, but keep CSAT's attack speed the same.",
				"By destroying the AIR RADAR, it will boost CSAT's attack speed (They will arrive faster) and delay AAF airforce",
				"By destroying both, AAF will have almost no communication with other bases, which means CSAT will arrive double the timer shorter"
			};
            friendlyForces[] = {
				"NATO marines",
				"Altisian civillians",
			};
            enemyForces[] = {
				"-AAF Ground forces",
				"AAF Ground forces consists of mostly infantry, armed vehicles and light APC's",
				"-AAF Airforce",
				"If the air RADAR spots you, AAF Airforce will send out helicopters and anti-air vehicles/drones to eliminate the threat. They will return if they cannot find the target anymore.",
				"-CSAT Invasion force",
				"CSAT Invasion forces consists of mostly tanks like the T-100 BlackEagle and T-14 Armata. They will have gunships and transport helicopters if enemy anti-air and air radars will be disabled.",
				
			};
            commandersIntent[] = {
				"STEALTH RULES BEFORE FIRST CONTACT:",
				"AIR RADAR: The Air radar (and millitary bases) have a spotting range.",
				"Brown: Anything above 100 meters.",
				"Red: Anything above 20 meters.",
				"Flying above the AIR RADAR or bases will spot you immediatelly. You will not get notified if you get spotted.",
				
				
			};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {
				"All rescued civillians must be brought back to the aircraft carrier (including the journalist)",
			};
            logistics[] = {
				"MH-60S Knighthawk (4x rocketpods)",
				"UH-80 Ghost hawk 2x"
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
                removeNightVision = false;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
					{"U_O_CombatUniform_ocamo", 1},
				};
                vests[] = {
					{"V_HarnessO_brn", 1},
				};
                headgear[] = {
					{"H_HelmetO_ocamo", 0.95},
						{"H_HelmetSpecO_blk", 0.05}
				};
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"arifle_Katiba_F", 1}
				};
                launchers[] = {};
                attachments[] = {};
            };
            class INDFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
					{"U_I_CombatUniform", 0.7},
							{"U_BG_leader", 0.1},
								{"U_I_CombatUniform_shortsleeve", 0.2}
				};
                vests[] = {
					{"V_TacVest_oli", 1}
				};
                headgear[] = {
					{"H_HelmetIA", 0.95},
						{"H_Milcap_dgtl", 0.05},
				};
                goggles[] = {};
                backpacks[] = {
					{"B_AssaultPack_dgtl", 1},
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"hlc_rifle_SG551SB_TAC", 0.5},
						{"hlc_rifle_SG553SB_TAC", 0.2},
							{"hlc_rifle_sg553RLB", 0.2},
								{"LMG_Mk200_F", 0.1}
				};
                launchers[] = {
					{"launch_RPG32_F", 0.05},
						{"", 0.95}
				};
                attachments[] = {
					{"acc_flashlight", 0.35},
						{"optic_aco", 0.65},
				};
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
