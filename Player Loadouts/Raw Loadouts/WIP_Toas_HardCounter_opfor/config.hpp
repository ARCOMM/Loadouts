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
				
				"Today we get our revenge brothers! NATO prides themselves on their meddling, so today we shall return the favor. NATO leads us to believe they had little part in the attack on our Altis pacific forces. Though the true organization behind the attack has remained a mystery, we know that NATO is the true culprit.",
				
				"Our mission today brothers is simple. We have traced the contract back to a US based operator, currently embedded with NATO forces. This HVT is currently responsible for training local rebel forces to repel our fellow OPFOR operatives in the region.  We believe that NATO is using the bases office compounds as command centers for the training. The HVT is likelly located within one of these command centers.",
				
				"Supported by a CSAT controlled carrier, we will be inserting across the Harcam channel. The goal here is to assault the Selatan Military Airbase, cripple any NATO assets we find, and kill the HVT. The mission here is NOT to secure the airbase. This is a hit and run operation that will have strict operation times. The second we hit the beaches we will have approximately 30 minutes to kill or capture the HVT and extract. Once these 30 minutes are expended, we expect a mass of reinforcements from the north, followed by a possible HVT extraction.  That being said, we have identified a power station just south of the objective. This power station currently powers all naval defense stations along with many communication arrays in the area. If you are able to cripple two of the stations primary transmitters, you can cripple the Airbases comms. Therefor reducing the response time of any major reinforcements to the north.",
				
			};
            mission[] = {
				
					"- Insert along the western coastline",
					"- Secure beachead (Timer starts on first contact)",
					"- Assault  the Selatan Military Airbase",
					"- Kill HVT (30 minute time limit)",
					"- Extract",
					
					"- Optional: Destroy power transformers (+45 minutes)"
				
			};
            friendlyForces[] = {
				
				"CSAT Navy"
				
			};
            enemyForces[] = {
				
				"Unknown amount of NATO infantry forces supported by light and heavy vehicles.",
				"Unidentified HVT security team"
				
			};
            commandersIntent[] = {
				
				"Rapidly assault the Selatan Military Airbase, and kill/capture HVT."
				
			};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {
				
				"Load heavier vehicles first to in order to maximize space in the landing craft.",
				
				"There are body bags located in every ground based vehicle. It is recommended but not required that you bag any dead friendly forces."
				
			};
            logistics[] = {
				"-LAND-",
				"1x Pandur II (30mm cannon, x4 atgm)",
				
				"x2 UAZ (Unarmmed)",
				
				"x1 UAZ (x1 DShKM)",
				
				"1x Kamaz Transport",
				
				"-NAVAL-",
				"x4 RHIB (1x M2)",
				
				"x1 LCU Mk 10 Landing Craft"
				
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
        class BLUFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgl", "matl", "mtrl", "fac"};
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = false;
                prioritizeTracerMags = true;
                uniforms[] = {
					
					{"U_B_T_Soldier_F", 1.0},
					
				};
                vests[] = {
					
					{"V_PlateCarrier2_tna_F", 1.0},
					
				};
                headgear[] = {
					
					{"H_HelmetB_tna_F", 1.0},
					
				};
                goggles[] = {};
                backpacks[] = {
					
					{"B_Carryall_oli", 0.48},
					{"", 0.02},
					{"B_AssaultPack_khk", 0.48},
					
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					
					{"CUP_arifle_M16A4_Grip", 0.85},
					{"CUP_lmg_M249_E2", 0.15},
					
				};
                launchers[] = {
					
					{"", 0.90},
					{"CUP_launch_M136", 0.10},
					
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
