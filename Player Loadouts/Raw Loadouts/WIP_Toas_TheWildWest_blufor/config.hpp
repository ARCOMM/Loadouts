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

					"Welcome to Anizay gentlemen.",

					"The situation is escalating by the minute here, so I will make this quick. Tension between Blufor and Opfor forces have been escalating for weeks now. Between growing boarder friction, and the local unrest things are at an all time high. We believe that Opfor is responsible for this local unrest, and is now using this as an excuse to increase their military presence in the area. At the center of this unrest is a local dictator; Nicholai Christanti. Originally Christanti was an popular Russian ambassador. Unsurprising he has always shown supported the Opfor cause, and with his new found power, he will likely continue too. Now he is using this country as his own personal sandbox. With local military forces under his thumb, he has been sparking rebellion against Blufor forces in this region. Not only that, but he has also ripped the region's industry to shreds.",

					"The biggest casualty of this fight is a local ION Oil subsidiary. This company alone has provided work, food, and lodging for around 40% of the local population. Today, ION has lost alot of ground. Many workers and civilians have been either uprooted or worse; executed. Normally this kind of behavior would not be tolerated by NATO or any Blufor forces. Unfortunately due to the rising tensions with Russian forces in the area, and recent Blufor legislation. No group has been able to get close to this. At least until now.",

					"Two days ago, Blufor had a change of heart. A contract has landed on my desk, giving us funding and full permissions to enter the region. Our prerogative is to support ION operations in the area, and to deal damage to the local hostile forces. We will be deploying from a local ION FOB that has been overseeing security in the region. The mission is to recover scattered ION resources that are believed to be held by local militia. On top of this, we now have the opportunity to find and kill Nicholai Christanti. This operation has to be quick, so once we wipe that bug off our windshield, we will be extracting from the region. Funding is limited and Blufor cannot support this mission officially. It is because of this that we will be using local military assets. The Sahrani military off the coast on Anizay has been gracious enough to lend us these assets.",

					"Good luck gentlemen. Fathom out."

				};
            mission[] = {

					"- Secure Alis Oil and airlift ION Cargo.",
					"- Locate and airlift ION Cargo in Maku.",
					"- Locate and airlift ION Cargo in Naudeh.",
					"- Locate and kill Nicholai Christanti in Naudeh.",

					"- Extract to FOB Obeh."

			};
            friendlyForces[] = {

				"Blufor security forces"

			};
            enemyForces[] = {

				"Anizays local militia forces consisting of light infantry and trucks.",

				"Armed military infantry groups with trucks and possible light armored vehicles."

			};
            commandersIntent[] = {

				"The goal is to be in and out as quick and clean as we can. Avoid major Opfor locations, and avoid civilian casualties. If these conditions are violated, it will only fuel the fire in the region and will likelly result in incresed enemy presence. Gather all ION assets at FOB Obeh, and extract there when objectives are completed. If cargo is unable to be extracted, complete all availabe tasks and deny the enemy of all existing ION cargo."

			};
            movementPlan[] = {

				"Convoy to each objective and locate each ION cargo container"

			};
            fireSupportPlan[] = {};
            specialTasks[] = {

				"We believe that Christanti is likelly stashing one of the ION assets within his personal compound. If you find him, it will likelly lead you to the cargo."

			};
            logistics[] = {

				"- x3 Landrover Transports (Unarmed)",
				"- x2 HMMWV M1114 (DSHKM)",
				"- x1 Tatra T810 (Covered)",
				"- x1 Tatra T810 (MG/Covered)",

				"- x2 CH-47F",

				"- x1 ammo resupply crate"
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
            AN_PRC_117F[] = {"fac"};
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

					{"CUP_O_TKI_Khet_Partug_01", 0.10},
					{"CUP_O_TKI_Khet_Partug_02", 0.10},
					{"CUP_O_TKI_Khet_Partug_03", 0.10},
					{"CUP_O_TKI_Khet_Partug_04", 0.10},
					{"CUP_O_TKI_Khet_Partug_05", 0.10},
					{"CUP_O_TKI_Khet_Partug_06", 0.10},
					{"CUP_O_TKI_Khet_Partug_07", 0.10},
					{"CUP_O_TKI_Khet_Partug_08", 0.10},
					{"CUP_O_TKI_Khet_Jeans_01", 0.10},
					{"CUP_O_TKI_Khet_Jeans_02", 0.10},

				};
                vests[] = {

					{"CUP_V_OI_TKI_Jacket1_01", 0.10},
					{"CUP_V_OI_TKI_Jacket2_03", 0.10},
					{"CUP_V_OI_TKI_Jacket4_03", 0.10},
					{"CUP_V_OI_TKI_Jacket5_04", 0.10},
					{"CUP_V_OI_TKI_Jacket5_02", 0.10},
					{"CUP_V_OI_TKI_Jacket5_03", 0.10},
					{"CUP_V_OI_TKI_Jacket3_06", 0.10},
					{"CUP_V_OI_TKI_Jacket3_03", 0.10},
					{"CUP_V_OI_TKI_Jacket3_02", 0.10},
					{"CUP_V_OI_TKI_Jacket6_02", 0.10},

				};
                headgear[] = {

					{"CUP_H_TK_Lungee", 0.10},
					{"CUP_H_TKI_Lungee_01", 0.10},
					{"CUP_H_TKI_Lungee_03", 0.10},
					{"CUP_H_TKI_Lungee_05", 0.10},
					{"CUP_H_TKI_Lungee_06", 0.10},
					{"CUP_H_TKI_Lungee_Open_01", 0.10},
					{"CUP_H_TKI_Lungee_Open_03", 0.10},
					{"CUP_H_TKI_Lungee_Open_05", 0.10},
					{"CUP_H_TKI_Lungee_Open_06", 0.10},
					{"CUP_H_TKI_Pakol_2_05", 0.10},

				};
                goggles[] = {

					{"CUP_FR_NeckScarf2", 0.25},
					{"CUP_FR_NeckScarf3", 0.25},
					{"CUP_FR_NeckScarf4", 0.25},
					{"CUP_FR_NeckScarf5", 0.25},

				};
                backpacks[] = {

					{"CUP_B_AlicePack_Khaki", 0.48},
					{"", 0.02},
					{"CUP_B_RPGPack_Khaki", 0.48},

				};
                faces[] = {};
                voices[] = {};
                rifles[] = {

					{"CUP_arifle_AK74", 0.85},
					{"CUP_lmg_PKM", 0.05},
					{"CUP_arifle_RPK74", 0.05},
					{"CUP_arifle_FNFAL", 0.05},

				};
                launchers[] = {

					{"", 0.90},
					{"launch_RPG7_F", 0.05},
					{"CUP_launch_RPG18", 0.05},

				};
                attachments[] = {};
            };
            class INDFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = false;
                prioritizeTracerMags = true;
                uniforms[] = {

					{"CUP_U_O_SLA_MixedCamo", 1.0},

				};
                vests[] = {

					{"CUP_V_O_SLA_6B3_3_WDL", 1.0},

				};
                headgear[] = {

					{"CUP_H_SLA_Helmet", 1.0},

				};
                goggles[] = {};
                backpacks[] = {

					{"CUP_B_CivPack_WDL", 0.48},
					{"", 0.02},
					{"CUP_B_RPGPack_Khaki", 0.48},

				};
                faces[] = {};
                voices[] = {};
                rifles[] = {

					{"CUP_arifle_AK74", 0.85},
					{"CUP_lmg_PKM", 0.05},
					{"CUP_arifle_RPK74", 0.05},
					{"CUP_arifle_FNFAL", 0.05},

				};
                launchers[] = {

					{"", 0.90},
					{"launch_RPG7_F", 0.05},
					{"CUP_launch_RPG18", 0.05},

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
