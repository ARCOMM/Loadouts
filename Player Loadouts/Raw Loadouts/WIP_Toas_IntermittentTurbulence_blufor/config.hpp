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
				
					"Once again the Altis region is ablaze with rebellion. A local CSAT separatist force has divided the region, and now many OPFOR powers have begun staking claims. To make the situation worse, local CSAT forces claim to have a trick up their sleeve. Based on the current intel provided, we can only assume this is some new form of superweapon. As expected NATO quickly attempted to respond with force.",
					
					"Not long after CSAT's plan was unearthed, a NATO carrier group was scrambled and deployed to the Mediterranean. Unfortunately upon entering, the fleet was damaged along with many assault craft. The team they sent to halt CSAT operations may as well have been a skeleton crew. Upon landing they were rapidly engaged and to our knowledge, completely wiped out. The carrier group is now reported to be leaving the region. Only further delaying NATO intervention.",
					
					"All of that being said, ARCOMM now has a new contract on the table sold at a fraction of the cost. Our plan is to succeed where NATO has failed. With the carrier group in full retreat, they have left a lot of gear behind. This allows us to quickly utilize any NATO assets we find in order to complete our contract.",
					
					"Our client has expressed interest in this new weapon CSAT forces are developing. We have narrowed to location down to two key CSAT hotspots. One location is known to the locals as 'the ghost hotel'. Bombed out in a previous revolution, the hotel should be completely clear of civilians. The second location is an active military installation. This installation was previously tasked with monitoring seismic data in the region. Once the device is found, you are to extract using the NATO landing craft from the previous assault. I know the mission seems grim, but even this blow to CSAT forces will save a lot of civilian lives."
				
			};
            mission[] = {
				
					"- Airdrop near the NATO assault location.",
					"- Secure and recover any useful NATO Assets (including abandoned gambler unit).",
					"- Search first device location.",
					"- Search second device location.",
					"- Destroy any trace of existing and future device development.",
					"- Secure and extract with active device."
				
			};
            friendlyForces[] = {
				
				"None"
				
			};
            enemyForces[] = {
				
				"Unknown amount of infantry forces supported by light and heavy vehicles."
				
			};
            commandersIntent[] = {
				
				"Utilize the turncoat CSAT pilot to insert near the previous NATO assault location.",
				"Task embedded gambler team to recover and use abandoned NATO tank destroyer.",
				"Use recovered assets to rapidly convoy to and secure possible superweapon locations."
				
			};
            movementPlan[] = {
				
				"Airdrop at failed NATO assault location. Once the assault location is secure, move and complete marked objectives."
				
			};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
				
				"MI-6 Hook for incursion (Zeus Controlled)",
				"45x Non steerable parachutes",
				
				"Recovered NATO Tank Destroyer (ARMOR DLC)",
				"Recovered NATO light vehicles",
				"Recovered NATO supply crate (gear and explosives)"
				
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
                enabled = true;
                removeNightVision = false;
                removeMedicalItems = false;
                prioritizeTracerMags = true;
                uniforms[] = {
					
					{"CUP_U_B_FR_SpecOps", 1.0},
					
				};
                vests[] = {
					
					{"CUP_V_B_RRV_TL", 1.0},
					
				};
                headgear[] = {
					
					{"CUP_H_USArmy_Helmet_ECH1_Green", 1.0},
					
				};
                goggles[] = {};
                backpacks[] = {
					
					{"CUP_B_USMC_AssaultPack", 1.0},
					
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					
					{"CUP_arifle_Mk16_STD_SFG_black", 0.90},
					{"CUP_arifle_Mk16_STD_EGLM_black", 0.10},
					
				};
                launchers[] = {};
                attachments[] = {
					
					{"CUP_acc_Flashlight", 1.0},
					{"CUP_optic_HoloBlack", 1.0},
					
				};
            };
            class OPFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
					
					{"U_O_T_Soldier_F", 1.0},
					
				};
                vests[] = {
					
					{"V_HarnessO_ghex_F", 1.0},
					
				};
                headgear[] = {
					
					{"H_HelmetO_ghex_F", 0.97},
					{"H_Beret_blk", 0.03},
					
				};
                goggles[] = {};
                backpacks[] = {
					
					{"B_FieldPack_ghex_OTLAT_F", 0.98},
					{"", 0.01},
					{"B_FieldPack_ghex_OTLAT_F", 0.01},
					
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					
					{"arifle_CTAR_blk_F", 0.90},
					{"arifle_CTARS_blk_F", 0.10},
					
					
				};
                launchers[] = {
					
					{"launch_RPG32_ghex_F", 0.15},
					{"", 0.85},
					
				};
                attachments[] = {
					
					{"acc_flashlight", 1.0},
					{"optic_ACO_grn", 1.0},
					
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
