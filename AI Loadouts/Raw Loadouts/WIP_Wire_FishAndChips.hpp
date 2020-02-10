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
			situation[] = { "An attempt was made by 1st Platoon to extract a high value defector of the Russian Army in this sector of the world, and was met with Devastating failure and only one man left alone in capture of the enemy. Good news is that due to the heavy fighting and push into the town local to the castle antenna the Russians are of the belief there is something valuable in the area and have chosen to reinforce their base of operation as well as move any valuable assets to it. 2nd Platoon has been tasked doing what 1st Platoon could not." };
			mission[] = { "Destroy the Antenna on top of the castle and extract with both the Defector and our lost brother Kingfisher.""Optional mission is to destroy all T-72's on site to set the enemy back months." };
			friendlyForces[] = {};
			enemyForces[] = { "Russian army armed with AK12s and RPG's. A few BRDMS and several defended t-72's. Refer to Map for placements. Be wary of dug in emplacement around the forest, as well as scattered patrols. Consider the town of Vyshnoye hostile until otherwise found." };
			commandersIntent[] = { "Due to the scale of the enemy BOF it is at the CO's disgression if they want to attempt a stealth entry through the forest, a side clearing approach going from the bottom and up, or a full frontal assault with the attempt to immediatly neutralize the enemy tanks." };
			movementPlan[] = {};
			fireSupportPlan[] = {};
			specialTasks[] = {};
			logistics[] = { "1 FV4034 Vehicle for Gambler crew, 1 Land Rover with meds and explosives, 3 Mastiff PPV GMGs, 2 M1167 (TOW-2) courtesy of our American friends" };
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
			languages[] = { "english","russian","greek" };
			AN_PRC_343[] = { "all" };
			AN_PRC_148[] = { "co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m" };
			AN_PRC_152[] = { "co", "dc", "cp", "p", "vc", "mmgl", "matl", "mtrl", "fac" };
			AN_PRC_117F[] = {};
			AN_PRC_77[] = {};
		};
		class OPFOR {
			languages[] = { "english","russian","greek" };
			AN_PRC_343[] = { "all" };
			AN_PRC_148[] = { "co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m" };
			AN_PRC_152[] = { "co", "dc", "cp", "p", "vc", "mmgl", "matl", "mtrl", "fac" };
			AN_PRC_117F[] = {};
			AN_PRC_77[] = {};
		};
		class INDFOR {
			languages[] = { "english","russian","greek" };
			AN_PRC_343[] = { "all" };
			AN_PRC_148[] = { "co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m" };
			AN_PRC_152[] = { "co", "dc", "cp", "p", "vc", "mmgl", "matl", "mtrl", "fac" };
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
					{ "MNP_CombatUniform_RO_Sh", .25},
					{ "MNP_CombatUniform_RO_Rg", .25},
					{ "MNP_CombatUniform_RO4_Sh", .25},
					{ "MNP_CombatUniform_RO4_Rg", .25}
				};
				vests[] = {
					{ "MNP_Vest_RUMED", .5 },
					{ "MNP_Vest_RUMED_B", .5 }
				};
				headgear[] = {
					{ "MNP_Helmet_PAGST_RO", 1 }
				};
				goggles[] = {};
				backpacks[] = {
					{ "MNP_B_RU2_FP", .45}
				};
				faces[] = {};
				voices[] = {};
				rifles[] = {
					{ "hlc_rifle_ak12", .40},
					{ "hlc_rifle_ak74m", .40},
					{ "hlc_rifle_RPK12", .20}
				};
				launchers[] = {
					{ "launch_RPG7_F", .15},
					{"", .85}
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
