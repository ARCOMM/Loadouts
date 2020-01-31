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
				"Minutes after the nuclear detonation north of chernarus. After the reinforcements arrived to the mainland during Operation Arrowhead: Boom, a nuclear detonation disabled almost every vehicle and electronical gear piece like GPS and radio in the region. This means all helicopters crash landed in the area. You will be playing as one of the reinforcements teams coming into the island, couple kilometers east from the last known location of Operation Arrowhead: Boom survivors.",
				"The crash landings have scattered the teams away from each other, so your first objective is going to be regroup. The closest landmark between all three teams is the village of Shakhovka, it is recommended to move there to regroup.",
				"After regrouping, the team will move to LZ Houston, an emergency LZ set up incase of situations like this. You cannot change the location of the LZ, but if the EVAC pilots deem the area is too hot, they will change the LZ.",
				"It is unknown how long til the next batch of NATO Airforce helicopters will come into the region, so you'll need to hold the area and defend it from any enemy forces, that includes Chernarus Resistance fighters."
			};
            mission[] = {
				"-Regroup",
				"-Move to LZ Houston",
				"-Wait until friendly helicopter pickup",
			};
            friendlyForces[] = {
				"-NATO Airforce"
			};
            enemyForces[] = {
				"-Chernarussian army",
				"-Chernarus resistance"
			};
            commandersIntent[] = {
				"Briefing time 10 minute limit. You can properly plan ahead towards LZ Houston when you regroup.",
				"There are in total three groups that are scattered after the crash: The comanche pilots and the two transport helicopters (Alpha and bravo). The closest landmark for all three groups is Shakhovka, expect disabled enemy convoys, enemy patrols and fighting between the resistance and the army.",
				"After regrouping your main objective is LZ Houston, located on the western farm in Staroye. Expect enemy forces at the LZ",
				"Gear scavenging is allowed",
				"The armor threat is very minimal. Enemy forces are still able to use turrets ontop of cars and APC's (50 cal., not cannons), but they cannot drive them due to the EMP blast.",
				"Squad leaders have scavenged all working radios from squadmembers. Only squadleaders, pilots, fireteamleaders and medics have radios",
			};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
				"All vehicles are disabled. You can still use turrets from cars and some APC's to your advantage."
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
            AN_PRC_343[] = {"co", "dc", "ftl", "m", "p"};
            AN_PRC_148[] = {""};
            AN_PRC_152[] = {""};
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
					{"CUP_U_B_CDF_FST_2", 0.5},
						{"CUP_U_B_CDF_FST_1", 0.5},
				};
                vests[] = {
					{"V_TacVest_oli", 0.5},
						{"V_PlateCarrierIA1_dgtl", 0.5},
				};
                headgear[] = {
					{"MNP_Helmet_OD", 0.8},
						{"H_Shemag_olive_hs", 0.19},
							{"CUP_H_RUS_Beret_Spetsnaz", 0.01}
				};
                goggles[] = {
					{"G_Balaclava_oli", 0.25},
						{"", 0.75},
				};
                backpacks[] = {
					{"B_AssaultPack_rgr", 1}
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"hlc_rifle_ak74", 0.25},
						{"hlc_rifle_aks74", 0.25},
							{"hlc_rifle_g3sg1", 0.15},
								{"hlc_rifle_rpk", 0.15},
									{"hlc_rifle_aks74u", 0.2},
				};
                launchers[] = {
					{"", 0.95},
						{"launch_RPG7_F", 0.05}
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
