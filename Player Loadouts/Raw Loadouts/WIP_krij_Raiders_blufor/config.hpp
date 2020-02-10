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
            situation[] = 
			{
				"Temblam Island has been a hub for pirate activity since the turn of the century. In the early years they operated as small independent gangs attacking fishing and small commercial vessels. As maritime enforcement increased in both presence and strength the small gangs banded into stronger more aggressive cells. They began attacking local shipping lanes and even successfully capturing a large freight ship from Spain in 2013.",
				"Since then, all of the prominent cells have banded into one conglomerate further consolidating their power and wealth. The pirates now have a commanding control of the government, openly operate on the island with impunity, and continue to commit crimes on the seas. Recently the pirates have gone too far and made a deadly mistake. The pirates have caught the attention of the US military. In an foolish attempt to gain access to military equipment the pirates attempted to raid a US Navy Cyclone-class patrol ship. This attack was an obvious failure, but one that cannot go unpunished. The US has dispatched the USS Wasp and a unit of Marine raiders to end the piracy on Temblam for good."
			};
            mission[] = 
			{
				"- Destroy the Smuggler boats",
				"- Secure the factory compound to criple their drug manufacturing operation",
				"- Destroy the AA encampment to open up the airspace",
				"- Eliminate the faction commander"
			};
            friendlyForces[] = {};
            enemyForces[] = {
				"Temblam pirates",
				"As stated in our objective the Pirates have some form of AA capabilities, these should post minimal threats to our overall mission, but treat them with caution.",
				"Roughly 150 men in fortified/elevated postions as well as some patrolling the area",
				"Unknown number of light troop transports and technicals", 
				"3-4 BTRs (multiple varients)"
			};
            commandersIntent[] = 
			{
				"Marine Raiders will conduct combat operations in the Tambang Bay with support from two Navy SWCC and one USMC LAV. Destroy the AA guns and boats. The order these objectives are completed in does not matter.",
				"Once they are destroyed, focus efforts on securing the factory. Once the factory is secure move on to searching for and eliminating the faction commander."
			};
            movementPlan[] = 
			{
				"Make landfall in Tambang Bay securing the northern and eastern sections of the bay. Move down the river East to the village where a known faction commander is believed to be located.",
				"Utilize the boats and the LAV to ferry troops across/down the river between objectives. Do not waste time by moving between objectives on foot around the river and its branches."
			};
            fireSupportPlan[] = {"The LAV and SWCC boats will be able to support beach landings and river travel throughtout the mission."};
            specialTasks[] = {};
            logistics[] = 
			{
				"-2x RHIBs (2 crew, 7 PAXs) with M2s and MK19s. Boat guns are only to be operated by SWCC gunner.",
				"-1x LAV-25 (3 crew, 6 PAXs)"
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
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgtl", "mattl", "fac", "m", "SWCC"};
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
					{ "CUP_arifle_AK47", .30 },
					{ "CUP_arifle_AKS74U", .15 },
					{ "CUP_arifle_FNFAL", .20 },
					{ "hlc_rifle_g3sg1", .20 },
					{ "CUP_arifle_RPK74", .15 },
				};

				launchers[] =
				{
					{ "CUP_Launch_RPG18", .2 },
					{ "", .85 }
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
