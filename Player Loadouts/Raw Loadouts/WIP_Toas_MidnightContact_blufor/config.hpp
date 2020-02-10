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
				
				"-- BULWARK PRIORITY RECORD : 01322A-01 --",
				"|| ENCRYPTION CODE: MONARCH",
				"|| PUBLIC KEY: N/A",
				"|| REPORTED LOCATION: Multiple sources",
				"|| SUBJECT: Operation //REDACTED//",
				"|| CLASSIFICATION: Encoded Blufor transmission 1/2",
				
				"-----------------------RECORD START------------------------",
				
				"Admiral Carter --",
				
				"I know this is going to come as some bad news, but your deployment in the pacific has been extended. By now your carrier group has pushed though the Philippine Sea and is heading east. I need you to to bring the USS Valor and her escorts south to the Tembelen islands. Unfortunately there has been an unexpected... insolent.",

				"Early this morning, two artifacts were uncovered one of the more centralized quarries. Based on reports coming in, these artifacts are made up of some unknown material compound. Now under normal circumstances, these artifacts would be secured by the local governments department of science. Unfortunately this quarry (and most of the surrounding industry) is owned by an international company known as Bulwark Universal. This company is home to the largest and well funded privately owned military we know of. Their R+D department have now claimed the artifacts as their own. Now normally we wouldn't interfere, but at least one of these reported artifacts has gone 'critical'. We believe that these artifacts are now posing a threat not only to the local population... but the population of the entire region.",

				"The energy and radiation spikes from the region are off the charts. This is something we have never seen before. This is something that needs to be contained. Bulwark has enforced their own quarantine of the area, but anyone who didn't make it out in the original evacuation, is now being held by Bulwark themselves. This cannot stand.",

				"Deploy a CBRN defense team from the USS Virtuous to a staging site on the island. From there, get that defense team to destroy any located artifacts, and rescue any trapped civilians. We don't know if Bulwarks PMC has a hostile intent, so proceed with caution. If a fight breaks out, then so be it. As for the 'active' artifact, I dont want any member of your team going near it. Utilize Bulwarks mobile lab to download data and disable the device housing the artifact.",

				"Im sorry Jensen... I wish I was updating you under better circumstances, but time is of the essence here.",
				
				"-All the best,",
				"Fleet Admiral Lee",
				
				" -----------------------RECORD END------------------------ "
				
			};
            mission[] = {
				
				"- Enter the local quarantine zone",
				"- Destroy the first artifact",
				"- Rescue captured citizens",
				"- Rescue captured quarry workers",
				"- Download data and shut down the second artifact",
				"- Extract"
				
			};
            friendlyForces[] = {
				
				"- Local civilian population"
				
			};
            enemyForces[] = {
				
				"- Bulwarks core PMC (Stark black NBC suit)",
				"- x2 Bulwark R+D engineer fireteams (Bright white NBS suit)"
				
			};
            commandersIntent[] = {};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {
				
				"We aren't looking to start a war here. If at all possible, keep any and all engagements within the quarantine zone. On top of aerial insertions, enemies are expected to be reinforcing from Pondok bridge. You are free to engage any PMC unit that enters the quarantine zone.",
				
			};
            logistics[] = {
				
				"x1 M1165 GMV (M134)",
				"x1 M1151 (M2)",
				"x3 M1151 (Unarmed)",
				"x2 HEMTT Transport"
				
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
                removeMedicalItems = false;
                prioritizeTracerMags = true;
                uniforms[] = {
					
					{"skn_u_nbc_indep_blk", 1.0},
					
				};
                vests[] = {
					
					{"CUP_V_B_Interceptor_Rifleman_Grey", 1.0},
					
				};
                headgear[] = {};
                goggles[] = {
					
					{"skn_m04_gas_mask_blk", 1.0},
					
				};
                backpacks[] = {
					
					{"B_ViperLightHarness_blk_F", 0.48},
					{"", 0.02},
					{"B_AssaultPack_blk", 0.48},
					
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					
					{"", 0.01},
					{"hlc_rifle_G36C", 0.88},
					{"CUP_arifle_MG36", 0.11},
					
				};
                launchers[] = {
					
					{"", 0.90},
					{"CUP_launch_RPG18", 0.10},
					
				};
                attachments[] = {
					
					{"CUP_acc_Flashlight", 0.49},
					{"", 0.01},
					{"CUP_acc_XM8_light_module", 0.48},
					
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
