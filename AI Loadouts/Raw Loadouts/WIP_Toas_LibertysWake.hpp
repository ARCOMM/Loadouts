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
				
				"There are many places around the world that are known as pirate hotspots. Up until two weeks ago the Mediterranean Sea was not one of those hotspots. To make matters worse this hotspot is heavily militarized. This has indirectly left a lot of material for these pirate syndicates to work with.",
				
				"At this point in time though we are directly focused on a greek island named Malden. At this current moment, this island is caught in the crossfire of a civil war. To add more fuel to the fire, there are also heavily militarized guerrilla factions fighting for lands to call their own. One of these factions is going by the name 'The Ashes Myriad', and up until this point they have been very successful in this rapid landgrab. They are currently in control of the entire southern coast of Malden, and operate one of the largest united pirate fleets modern piracy has ever seen. They are so powerful in fact that they even managed to capture the United States destroyer known as the 'Liberty'.",
				
				"Among the widespread conflict in the region, the US felt it best to fortify known commercial trade routes in the Mediterranean. They did this by sending a fleet of their finest warships to patrol these waters. Unfortunately for us the Mediterranean sea is a big place, and the US got cocky. In one of their fleet movements, the USS Liberty was left to patrol a large section of water alone. This route took the Liberty close to the island of Malden, which then lead to the rapid mobilization of Myriad forces. By unknown means we believe the Myriad boarded and captured the Liberty.",
				
				"As of yesterday NATO denied the United States request to 'mobilize' on the area, and recapture their stolen vessel. Rather then letting the US add to the overwhelming conflict, we are being sent in as a UK sponsored anti-piracy unit. We will be sent into the area aboard the HMS Montrose to act as bait for the pirates. The ship will then be 'disabled' and we will strike when the enemy thinks us the weakest. We will be entering the area soon so suit up and get ready. The attack will likely happen fast. We will be faster."
				
			};
            mission[] = {
				
				"- Repel pirate borders, and destroy primary pirate mothership before attacking the Liberty.",
				"- Board and Secure the USS Liberty.",
				"- Push inland and clear out the Myriad FOB",
				"- Kill or capture the marked HVTs at each objective."
				
			};
            friendlyForces[] = {
				
				"RHIB group Gamma"
				
			};
            enemyForces[] = {
				
				"Pirate syndicate navy",
				"Light pirate syndicate motorized rienforcments"
				
			};
            commandersIntent[] = {
				
				"We have a variety of assets at our desposal. NATO is giving us the freedom to use anything at our finger tips to both defend the our destroyer, and attack the port.",
				"For the defense of the HMS Montrose, we have been requisitioned two MAAWS launchers with 6 HE rockets."
				
			};
            movementPlan[] = {
				
				"We believe that the pirate forces are stockpiling vehicles in a motor pool present in the port. If secured, infantry can use these vehicles to resupply and convoy to the final objective."
				
			};
            fireSupportPlan[] = {
				
				"Based on previous spot reports, we can tell that the pirate mothership is very heavily armed. We believe a heavy AT gun and two AA emplacements are present on board the ship. With a rear attack from RHIB group Gamma, we believe we can knock out the AA guns long enough to launch an aerial attack. The AH-6 is our best bet to launch this attack."
				
			};
            specialTasks[] = {
				
				"The pirate navy are now a major threat to all maritime vessels in the area. If we find any other armed vessels in the area we should prioritize the destruction of those as well.",
				"If Phantom is to be lost, we must destroy the stolen US assets. Use the stored demolition charges to destroy the two containers."
				
			};
            logistics[] = {
				
				"- x1 RHIB (MK-19, M2)",
				"- x2 RHIB (Unnarmed)",
				"- x1 UH-80 (x2 M136)",
				"- x1 AH-6M (x1 GAU, x16 HE Rockets)"
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"U_I_C_Soldier_Bandit_1_F", 1.0},
                    {"U_I_C_Soldier_Bandit_2_F", 1.0},
                    {"U_I_C_Soldier_Bandit_3_F", 1.0},
                    {"U_I_C_Soldier_Bandit_4_F", 1.0},
                    {"U_I_C_Soldier_Bandit_5_F", 1.0}
				};
                vests[] = {
                    {"V_TacVest_blk", 0.35},
                    {"V_Chestrig_blk", 0.35},
                    {"V_PlateCarrier2_rgr", 0.25},
                    {"", 0.05}
				};
                headgear[] = {
                    {"H_Bandanna_cbr", 0.15},
                    {"SP_BaseballCap_Tan", 0.15},
                    {"H_StrawHat", 0.15},
                    {"H_PASGT_basic_black_F", 0.25},
                    {"H_HelmetSpecB", 0.25},
                    {"", 0.05}
				};
                goggles[] = {};
                backpacks[] = {
                    {"B_FieldPack_cb_Bandit_3_F", 1.0},
                    {"B_Kitbag_cbr_Bandit_2_F", .48},
                    {"", 1.0}
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_AKS74U", 0.2},
                    {"CUP_arifle_AK74", 0.2},
                    {"CUP_arifle_RPK74_top_rail", 0.10},
                    {"CUP_lmg_m249_pip1", 0.10},
                    {"hlc_rifle_416D10C", 0.40}
				};
                launchers[] = {
                    {"CUP_launch_RPG18", 0.15},
                    {"CUP_launch_RPG7V", 0.05},
                    {"", 0.8}
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
