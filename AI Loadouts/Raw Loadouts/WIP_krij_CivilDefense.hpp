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
				"Chernarus is in a civil war. The separatists military forces have pushed through most of the region. The loyalists are holding out in chernogorsk while the sparatists surround the city. In a defense that could be labeled foolish or heroic depending on which side of the conflict you ask, the Loyalists are defending the capitol building in the city center.",
				"The most recent attempt by the separatists to capture the Capitol building wiped out all but a small group of loyalist defenders. While the Separatists are unsure how many loyalists are left, they are preparing for a massive push.",
				"Loyalist command hopes that the remaining forces in the city can distract the separatists long enough for loyal forces to mobilize troops and armor to the front line in order to defend our hold on the western hold of the country. The Separatists want to take the city and raise their flag over the capitol building, so their focus will be on wiping out any resistance within Chernogorsk.",
				"If we can hold out for at least an hour that should be enough time for our allies to bolster the front line. Once the front line is stregthened command will send an evac helicopter From the Balota airfield to get us out of the city."
			};
            mission[] = 
			{
				"Complete as many objectives as you want. None are required, but some will weaken the enemy while others will strengthen your own forces.",
				"- Recover the abandon BTR-90 from somewhere in the industrial area.",
				"- Capture the radio station to call for faster evac (rescue will arrive sooner).",
				"- Recover heavy weapons from the shipping area.",
				"- Kill the radio operator reporting your defense position to incoming enemies, slowing down their attacks."
			};
            friendlyForces[] = 
			{
				"Loyalist forces"
			};
            enemyForces[] = 
			{
				"Separatists military forces. They have already taken the city in their push across the country. We can expect BTRs, technicals, and possible enemy air assets. "
			};
            commandersIntent[] = 
			{
				"Defend our position in the middle of the city until Evac arrives. Attempt to complete as many of the tasks above to make our defenses stronger and weaken our opponents push through the city."
			};
            movementPlan[] = 
			{
				"Keep some forces behind to defend the capitol building. If we abandon it and the Seperatist forces capture it too easily The citizens will think we've abandon them.",
				"The MT-LB and BTR-90 may be useful for moving between objectives safely, this will make it much easier to reach the radio station."
			};
            fireSupportPlan[] = 
			{
				"The BTR-90 may only be crewed by Gambler crew members. Keep them alive so the gambler can be fully crewed!"
			};
            specialTasks[] = {};
            logistics[] = 
			{
				"- 1x MT-LB LV",
				"- 1x BTR abandoned in the industrial area",
				"- PKPs and RPG-7s located in shipping area"
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
					{"CUP_U_B_CDF_SNW_1", 1.00},
					{"", 0}
				};
                vests[] = {
					{ "CUP_V_CDF_6B3_1_SNW", 1.00 },
					{ "", 0 }
				};
                headgear[] = {
					{ "CUP_H_CDF_H_PASGT_SNW", 1.00 },
					{ "", 0 }
				};
                goggles[] = {};
                backpacks[] = {
					{ "CUP_B_TK_RPG_Backpack_Single", .20 },
					{ "CUP_B_AlicePack_Khaki", .80 },
				};
                faces[] = {};
                voices[] = {};
                rifles[] = 
				{
					{ "hlc_rifle_aks74", .70 },
					{ "hlc_rifle_rpk", .30 }
				};
                launchers[] = {
					{ "CUP_launch_RPG7V", .20 },
					{ "CUP_Launch_RPG18", .10 },
					{ "", 0.70 }
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
