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
            situation[] = 
			{
				"A team of government agents have been working in the region for the past few years. Recently leaked information of these agents has warrented an immediate extraction. The source of the leak appears to be from one of the agents themselves. One of those agents (Callsign: KRACKEN) told someone to 'fight him IRL' via a text chat in an online game. Kracken has since gone dark, and seeing as how he was the field agent in charge we need to get to him first.",
				"The agents job was to pose as arms dealers in hopes of learning the location of the local insurgent cells leader. Now that their true identity is blown, we are certain the insurgents will react with violence."
			};
            mission[] = {
				"- Find Krackens hideout and recover the info on the other operatives locations",
				"- Find Church",
				"- Find Feebee"
			};
            friendlyForces[] = 
			{
				"US Delta Force"
			};
            enemyForces[] = 
			{
				"Local insurgent cell. Exact numbers are unknown, it is expected that the region is home to some 400 members of the cell. Expect them to be able to mobilize a third of their numbers in response to our incursion.",
				"Most of the insurgents we have seen are pretty poorly equiped, but you can expect to see technicals, old russian armor, and possible unguided AA weapons to the south of Naudeh."
			};
            commandersIntent[] = 
			{
				"Using the agile MELBs move quickly to locate and extract the operatives from danger.",
				"The MELBs can be used to scout LZs for the larger helicopter to drop off troops. This will be helpful in maintaining the element of suprise against the enemy."
			};
            movementPlan[] = 
			{
				"Move to Krackens safe house immediately, it is likely he is already dead, but if he is still there extract him. He has the information on the other operatives in the area, once you have that intel move to rescue the operatives in any order you see fit."
			};
            fireSupportPlan[] = {};
            specialTasks[] = 
			{
				"Bring back 2 of the 3 admins"
			};
            logistics[] = 
			{
				"- 2x MELBs (6 PAX each)",
				"- 1x UH-60M (2 gunners + 10 PAX)"
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
				removeNightVision = true;
				removeMedicalItems = true;
				prioritizeTracerMags = true;
				uniforms[] = {
					{ "CUP_O_TKI_khet_partug_04", 0.16 },
					{ "CUP_O_TKI_khet_partug_02", 0.14 },
					{ "CUP_O_TKI_khet_partug_07", 0.14 },
					{ "CUP_O_TKI_khet_partug_01", 0.14 },
					{ "CUP_O_TKI_khet_partug_08", 0.14 },
					{ "CUP_O_TKI_khet_partug_05", 0.14 },
					{ "CUP_O_TKI_khet_partug_06", 0.14 }
				};
				vests[] = {
					{ "CUP_V_OI_TKI_Jacket4_05", 0.20 },
					{ "CUP_V_OI_TKI_Jacket4_05", 0.16 },
					{ "CUP_V_OI_TKI_Jacket4_02", 0.16 },
					{ "CUP_V_OI_TKI_Jacket4_06", 0.16 },
					{ "CUP_V_OI_TKI_Jacket4_03", 0.16 },
					{ "CUP_V_OI_TKI_Jacket4_01", 0.16 }
				};
				headgear[] = {
					{ "CUP_H_TKI_Lungee_Open_01", 0.10 },
					{ "CUP_H_TKI_Lungee_Open_02", 0.10 },
					{ "CUP_H_TKI_Lungee_Open_03", 0.10 },
					{ "CUP_H_TKI_Lungee_Open_04", 0.10 },
					{ "CUP_H_TKI_Lungee_Open_05", 0.10 },
					{ "CUP_H_TKI_Lungee_Open_06", 0.10 },
					{ "CUP_H_TKI_Lungee_01", 0.10 },
					{ "CUP_H_TKI_Lungee_02", 0.10 },
					{ "CUP_H_TKI_Lungee_03", 0.10 },
					{ "CUP_H_TKI_Lungee_04", 0.10 }
				};
				goggles[] = {
					{ "", 1.00 }
				};
				backpacks[] = 
				{
					{"CUP_B_RPGPack_Khak", 1.0 },
					{"", 0.0}
				};
				faces[] = {};
				voices[] = {};
				rifles[] = {
					{ "CUP_srifle_LeeEnfield", 0.08 },
					{ "CUP_arifle_M16A2", 0.12 },
					{ "CUP_arifle_RPK74", 0.10 },
					{ "hlc_rifle_LAR",0.20 },
					{ "hlc_rifle_g3a3", 0.20 },
					{ "hlc_rifle_ak47", 0.20 },
					{ "hlc_rifle_aks74u", .10 },
				};
				launchers[] =
				{
					{ "CUP_launch_RPG7V", .25 },
					{ "", .8 }
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
