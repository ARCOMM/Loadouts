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
        freezeTime = 2;
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
			situation[] = 
			{
				"Rosche, Germany. Constant global strife and conflict has lead NATO countries to impose heavy sanctions on Russia. Crimes commited by Russian military forces that are better left unsaid resulted in the first ever invocation of Article 6 of the UN charter. As a result of Russias actions the US has increased military presence in the region and publicy condemed Russias actions.",
				"As a response Russia has launched an assault across Europe catching NATO by suprise. Russia has had resounding success, sweeping through the former satalite states and taking Poland within 2 weeks. Now, desperate for a victory, NATO commanders have fortified the region of Rosche and prepare to meet the Russian forces head on and drive them back out of Germany.",
				"Meanwhile, eager to keep their momentum, Russian commanders are sending in a team of saboteurs deep into Germany to destroy NATO SAM sites blocking the Russian forces from advancing."
			};
			mission[] =
			{
				"- Locate and destroy the 4 SAM batteries located within the Industrial area."
			};
			friendlyForces[] =
			{
				"Covert Russian Saboteurs"
			};
			enemyForces[] =
			{
				"- Nato Forces",
				"- There is a strong NATO presence in Rosche. NATO expects an attack at any moment. All of the bridges are guarded by checkpoints of varying strengths and fortifications. There is likely to be a company sized elements stationed within the industrial complex. We can expect static MGs, Humvees, and APCs. Enemy air is a possibility, but not likely due to the single airfield in the area still being used for civilian traffic."
			};
			commandersIntent[] =
			{
				"Sweep through the factory complex, locating and destroying the SAM batteries as you find them. The industrial area is large. Command suggests dividing the area into sectors to ensure a SAM battery is not missed. Once the batteries are destroyed Coordinated air strikes will begin destroying points of interest and paratroopers will be dropped across the region."
			};
			movementPlan[] =
			{
				"Select any of the three bridges within the AO to cross the River. Keep in mind that the middle bridge will be the fastest way to the factory, but is also likely to be the most well guarded."
			};
			fireSupportPlan[] = {};
			specialTasks[] = {};
			logistics[] =
			{
				"-1x Vodnik BPPU (Gambler)",
				"-2x vodnik transports (12 seats each)",
				"-1x Kamaz transport",

				"Demo charges can be found in the vodniks"
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
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = 
				{
					{"CUP_U_B_USMC_FROG1_WMARPAT", 1.00},
					{"",0}
				};
                vests[] = 
				{
					{ "CUP_V_B_Eagle_SPC_TL", 1}
				};
                headgear[] = 
				{
					{ "CUP_H_USMC_LWH_ESS_WDL",1}
				};
                goggles[] = {};
                backpacks[] = 
				{
					{ "B_AssaultPack_cbr", .99},
					{"", .01}
				};
                faces[] = {};
                voices[] = {};
                rifles[] = 
				{
					{ "CUP_arifle_M16A4_Base", .80},
					{ "CUP_lmg_M249_E2", .20}
				};
                launchers[] = 
				{
					{ "CUP_launch_M136", .15},
					{"", 0.85}
				};
                attachments[] = 
				{
					{ "CUP_acc_Flashlight", .99},
					{"", .01}
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
