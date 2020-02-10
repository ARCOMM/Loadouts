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
        freezeTime = 1;
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
            situation[] = 
			{
				"The island of porto is a small mediterranean island 100 miles off the coast of Israel. It is currently part of a territorial dispute between Israel, Lebanon, and Cyprus. While residents of the island have herritage from all three countries the vast majority of Porto desires independence.",
				"Despite the territory dispute Israel has maintained some military presence in the area. Citing a need to use the island as a staging area to protect its own coast. This has been tolerated by the other two nations for decades, until recently. The Israel-Palestine conflict has grown and in a suprise move Lebanon has recently declared support for Palestine. As tensions grow at the Israel/Lebanon border, so do tensions regarding the disputed island of Porto.",
				"Shortly following this announcement, a Lebanese 'Logistics and cargo fleet' appeared off the far southern coast of Porto. As we know now, this fleet was much more then that. Lined with landing craft and rhib boats, Lebanese forces launched a massive naval invasion of Porto. From what we can tell the Israeli defense force is still putting up a fight, but we can't wait much longer.",
				"Blufor; while remaining neutral in this engagement, is still operating this this region. Earlier this morning Lebanese troops invading the isalnd of Porto, brought down Blufor helicopter. We believe this helicopter was running a routine flight, but we may be in luck. Intel leads us to believe these pilots are still alive and are being held by Lebanese forces. As of an hour ago, Blufor has pledged to support the Israeli cause, but there is a catch.",
				"Our remaining IDF forces on the island are being ordered to push back the Lebanese. Our task is to clear all remaining AA sites in the area, and rescue the two of the fallen pilots. We have their rough locations marked, and if we can save them. Blufor forces have promised to extract both the pilots, and the surviving forces on Porto. We can bring peace to the island once more, but only by driving the Lebonese off."
				
			};
            mission[] = 
			{
				"- Destroy all RBS-70s in the city.",
				"- Locate the helicopter crash site.",
				"- Discover the fate of the downed helicopter crew.",
				"- Move to the Blufor lead extraction point, and await pickup."
				
			};
            friendlyForces[] = 
			{
				"Israeli Defense Force"
			};
            enemyForces[] = 
			{
				"Lebonese Army.",
				"We know that the Lebonese are well equipped.  Expect roughly 100 men equiped with light body armor and standard rifles and ARs as well as standard AT. They may employ vehicles, but their access to armor seems limited. Enemy air threats are not a possibility."
			};
            commandersIntent[] = 
			{
				"Clear the city of and AA threats so normal air operations can resume over the island. The primary goal is the elimination of any AA threats. There is no need to try and clear the entire city."
			};
            movementPlan[] = 
			{
				"Push through the city which ever way deemed fit."
			};
            fireSupportPlan[] = {};
            specialTasks[] = 
			{
				"Should the helicopter crew be found, extract dead or alive!"
			};
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
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = 
				{
					{"CFP_U_FieldUniform_marpat_w_light", 1.0},
					{"", 0}
				};
                vests[] = 
				{
					{"SP_Modular1_Tan", 1.0},
					{"", 0}
				};
                headgear[] = 
				{
					{"SP_ACHHelmet_Tan1", 0.99},
					{"", .01}
				};
                goggles[] = {};
                backpacks[] = 
				{
					{"B_assaultpack_cbr", .50},
					{"B_Kitbag_cbr", .50},
					{"", 0}
				};
                faces[] = {};
                voices[] = {};
                rifles[] = 
				{
					{"hlc_rifle_g3Ka4", .20},
					{"cup_lmg_minimi", .20},
					{"cup_arifle_ak74", .40}
					
					
				};
                launchers[] = 
				{
					{ "CUP_launch_RPG7V", .10 },
					{ "CUP_Launch_RPG18", .5 },
					{ "", 0.75 }
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
