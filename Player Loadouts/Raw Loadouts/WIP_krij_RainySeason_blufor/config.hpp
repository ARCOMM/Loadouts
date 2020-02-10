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
				"Tanoa is in the midst of its worst monsoon season on record. This storm could not come at a worse time. The island of Tanoa is in a civil war, the government of Tanoa is battling a militant group terrorizing the islands population, stealing anything they want, and killing anyone who opposes them.",

				"Previous attempts to send humanitarian supplies have been unsuccessful. The Militants have raided all of the previous convoys, executing the humanitarian aid workers, and leaving nothing for the citizens of Tanoa. That is why the USMC has been sent to Tanoa. We are tasked with escorting the next humanitarian aid convoy to Harcourt, ensuring that the supplies are safely dispersed to those who need them most.",

				"The people are desperate, as a result the Red Cross is sending in its largest shipment ever, this will surely draw a large amount of attention from Militia forces. These supplies must reach the town of Harcourt, if more than three of the convoy vehicles fail to make it to Harcourt, then there will not be enough supplies to sustain the city until the next shipment is ready.",

				"The latest storm surge has made almost all roads impassible, with the exception of some major paved roads. This forces us to use the paved road that cuts through the jungle heading north to Harcourt. The Militia will be aware of this constraint and may use it to their advantage. This storm has also caused the citizens of Tanoa to hunker down and ride out the storm in their homes. Citizens may be present in the streets of the town once we arrive, so we must stay vigilent."

			};
            mission[] = {
				"Deliver the supplies to the citizens of Harcourt, protect the M113s and HMETT carrying the supplies at all costs, if more than half of the vehicles fail to make it to make it to the city, the mission has failed."
			};
            friendlyForces[] = {};
            enemyForces[] = {
				"The Militants have declared rule of Harcourt. They have a platoon sized force (approximately 30 men) occupying the town. Once the Militants realize the size of the convoy we are certain they will commit all of their resouces to capturing it.",

				"We have noticed numerous camps popping up around Harcourt in the past few days. We can assume that the Militants have been tipped off to our convoys route and will attempt to ambush us enroute to Harcourt. We should also expect to be attack once in the town.",

				"The enemy are known to posess multiple static guns, technicals, jeeps, and troop transports. Reports suggest the Militants have recently aquired an APC that they may attempt to use against us."
			};
            commandersIntent[] = {
				"Provide humanitarian aid to the people of Harcourt, and protect the area from the militia who would attempt to steal the supplies."
			};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {
				"Get the convoy to the town of Harcourt.",

				"Defend the town and protect the supplies from any raiding Militia forces."
			};
            logistics[] = {
				"x3 M113s",

				"x1 supply HMETT",

				"The blue lines are not a border for troop movement, the are simply to indicate the predetermined route of the convoy.",

				"The Crates in front of the M113s are the supplies that are to be delivered to Harcourt. They need to be loaded onto the M113s and unloaded in front of the Market store in the center of town, the area is marked on map with a purple square. Since the M113s are 'loaded with supplies' there is no room for troops. The M113s are not to be used for transport. Sorry boys, y'all gotta walk."

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
            AN_PRC_148[] = {};
            AN_PRC_152[] = {};
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
					{ "U_I_C_Soldier_Para_2_F", 0.15 },
					{ "U_I_C_Soldier_Para_3_F", 0.35 },
					{ "U_I_C_Soldier_Para_4_F", 0.25 },
					{ "U_I_C_Soldier_Para_1_F", 0.25 }
				};

				vests[] =
				{
					{ "V_Chestrig_khk", 0.20 },
					{ "V_Chestrig_oli", 0.20 },
					{ "V_BandollierB_khk", 0.20 },
					{ "V_BandollierB_oli", 0.20 },
					{ "V_TacChestrig_oli_F", 0.20 }
				};
				headgear[] =
				{
					{ "H_Bandanna_khk", 0.20 },
					{ "H_BoonieHat_oli", 0.20 },
					{ "H_Cap_oli", 0.20 },
					{ "H_HeadBandaged_stained_F", 0.10 },
					{ "H_Shemag_oli", 0.15 },
					{ "", 0.15 }
				};

				goggles[] =
				{
					{ "", 1.00 }
				};
				backpacks[] =
				{
					{ "", 1.00 }
				};

				faces[] = {};
				voices[] = {};
				rifles[] =
				{
					{ "rhs_weap_akm", 0.65 },
					{ "rhs_weap_aks74u", 0.15 },
					{ "rhs_weap_pkm",  0.15 },
					{ "rhs_weap_akm_gmp25", 0.05 }
				};

				launchers[] =
				{
					{ "rhs_weap_rpg26", 0.20 },
					{ "", 0.80 }
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
