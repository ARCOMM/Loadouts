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
				"Gentlemen, this is what we are all prepared for; Santa has been shot down over Thirsk. It's up to us to rescue him and get him back on schedule to ensure all gifts are delivered by Christmas Morning.",
				"It appears that the GPS on Santa's Sleigh glitched out and sent him through a no fly zone over Thirsk. The Elf Intelligence Agency (EIA) tells us a Russian commander ordered the shoot down and is hoping to ransom Santa for a huge profit. We can't stand for this sort of publicity as Santa requires a high level of plausible deniability in order to complete his mission every year.",
				"Our mission is to destroy the SAM site that shot Santa down, locate the crash site of the Sleigh and rescue Santa. Now EIA reports that all reindeer were killed in the crash, so we will have the provide santa with fuel (liquified Christmas spirit) for the Sleighs backup engine. After Santa is safely back in the air we are to move to the nearby Russian base and remind them the meaning of Christmas."
			};
            mission[] = 
			{
				"- Destroy the SAM site",
				"- Rescue Santa and refuel his Sleigh",
				"- Destroy the Russian helicopters at the russian base",
				"This show of force in the name of christmas should remind the Russians what holiday spirit really means."
			};
            friendlyForces[] = 
			{
				"Santa",
				"Task Force Little Helpers"
			};
            enemyForces[] = 
			{
				"Russian VDV who lack holiday spirit. Roughly 150 men with light armor and troop transports.",
				"We belive the SAM site used all of its missles trying to shoot down Santa. The SAM will likely not be able to shoot down the chinook, but do not assume it is not a threat."
			};
            commandersIntent[] = 
			{
				"Land on Thirsk somewhere to the West of the ruined city and move to destroy the SAM site.",
				"After destroying the SAMs move to Santas crash site. Free Santa and secure the sleigh. Once the sleigh is secure have the CH-47 slingload the fuel truck into the AO.",
				"Once Santa is back in the air and safely out of the AO attack the Russian base."
			};
            movementPlan[] = 
			{
				"Select an LZ somewhere near the SAM site, but far enough to avoid getting shot down like Santa.",
				"Once Santa is safe and his sleigh secure, remount the chinook and attack the Russian base who ordered the SAM to fire on Santa."
			};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = 
			{
				"- 1x CH-47 Chinook",
				"- 1x refuel truck"
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
					{ "CUP_U_O_CHDKZ_Kam_04", 0.25 },
					{ "CUP_U_O_CHDKZ_Kam_02", 0.25 },
					{ "CUP_U_O_CHDKZ_Kam_05", 0.25 },
					{ "CUP_U_O_CHDKZ_Kam_06", 0.25 }
				};

				vests[] = {
					{ "CUP_V_O_Ins_Carrier_Rig", 1.0 }
				};

				headgear[] = {
					{ "CUP_H_ChDKZ_Beanie", 0.80 },
					{ "CUP_H_ChDKZ_Cap", 0.10 }
				};

				goggles[] = {};

				backpacks[] = {
					{ "CUP_B_INS_Backpack_AR", 0.50 },
					{ "CUP_B_INS_AlicePack_Exp", 0.50 }
				};

				faces[] = {
					{ "WhiteHead_01", 0.20 },
					{ "WhiteHead_02", 0.20 },
					{ "WhiteHead_04", 0.20 },
					{ "WhiteHead_05", 0.20 },
					{ "WhiteHead_06", 0.20 },
					{ "WhiteHead_18", 0.20 }

				};

				voices[] = {
					{ "cup_d_male01_ru", 0.20 },
					{ "cup_d_male02_ru", 0.20 },
					{ "cup_d_male03_ru", 0.20 },
					{ "cup_d_male04_ru", 0.20 },
					{ "cup_d_male05_ru", 0.20 }
				};

				rifles[] = {
					{ "CUP_arifle_RPK74", 0.20 },
					{ "CUP_arifle_AKS74", 0.20 },
					{ "CUP_arifle_AKS74U", 0.20 },
					{ "CUP_arifle_AK74", 0.20 },
					{ "CUP_arifle_AKM", 0.20 }
				};

				launchers[] = {
					{ "CUP_launch_RPG18", .08 },
					{ "", 0.92 }
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
