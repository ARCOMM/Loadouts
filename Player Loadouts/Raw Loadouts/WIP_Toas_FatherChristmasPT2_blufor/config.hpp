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
				
				"With Santas recent rescue, all of BLUFOR has witnessed a great success. Unfortunatly we are not out of the woods yet. It would appear that in repelling the Grinch's attack on Santa, we only poked the the hornets nest. We have radio chatter coming in from every corner of Chernarus. They all bring the same message... a promise from the Grinch.",
	
				"In his message the Grinch announced a full scale invasion of Chernarus in search for the Santa. Many BLUFOR outposts have been hit already, and there is no doubt our last remaining airbase is his next target. Outmanned and out gunned, our last QRF has only has one option. Escape to the sea.",
				
				"Also in full retreat is the remnant of a mechanized convoy from the far north western airbase. If Blufor is to escape this land, the QRF must move to rescue the convoy. Once the convoy is repaired both teams must push together to an abandoned Blufor industrial harbor. This harbor is BLUFOR's last chance at escaping with their lives. Good luck, and God speed."
			};
            mission[] = {
				
				"- Convoy is to hold their ground and await QRF support.",
				"- QRF is to rendezvous with and repair the disabled convoy. (GRID#:0990)",
				"- Regroup, escape to Nizhnoye and extract via boat,"
				
			};
            friendlyForces[] = {};
            enemyForces[] = {
				
				"Grinch-sponsored motorized and mechanized teams"
				
			};
            commandersIntent[] = {
				
				"Our primary priority should be to get Santa out alive. That being said we also need to prioritize the survival of our armored vehicles. It is clear the Grinch will not be stopped here in Chernarus. We must secure and extract any armored, or supply vehicles we can, as to fight another day.",
				
				"Though our support fleet has planned an extraction at a previously owned BLUFOR industrial port, there are no guarantees on what we are driving into. Our extraction may be late, or worse the Grinch could already have patrols in the area. No matter what, we need to keep a level head and hope for the best. If the extraction is late, we must hold the harbor at all costs. This is our one ticket out and we need it as safe and secure as possible."
				
			};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {

				"There is no briefing time. On mission start, the QRF is to quickly plan and depart to rescue the convoy.",
				"If Santa is to fall you must recover, and extract with the body."
				
			};
            logistics[] = {
				
				"QRF:",
				"- x1 LKW Transport (1x MG3)(Ammo resupply, x2 extra tracks, x4 extra wheels)",
				"- x1 LKW Fuel truck (1x MG3)(x2 extra tracks, x4 extra wheels)",
				"- x1 Fuchs 1A4 Engineering APC (1x MG3)(x10 extra tracks)",
				
				"Convoy:",
				"- x1 Wiesel 1A2 (TOW)",
				"- x1 Marader 1A5 (20mm) *Do not build large camo net*",
				"- x1 LKW Transport (1x MG3)",
				"- x1 LKW ammunition truck (1x MG3)(light infantry resupply)"
				
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
            AN_PRC_152[] = {"sa", "gr", "co", "dc", "cp", "p", "vc", "mmgl", "matl", "mtrl", "fac"};
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
                uniforms[] = {
					
					{"CUP_I_B_PMC_Unit_34", 1.0},
					{"", 0}
					
				};
                vests[] = {
					
					{"SP_Tactical1_White", 1.0},
					{"", 0}
					
				};
                headgear[] = {
					
					{"SP_SSh68CoverHelmet_White1", 0.9},
					{"SP_Beret2_Green", 0.1}
					
				};
                goggles[] = {
					
					{"G_Bandanna_blk", 0.48},
					{"SP_Goggles_Tan", 0.48},
					{"", 0.01}
					
				};
                backpacks[] = {
					
					{"MNP_B_RUW_FP", 0.49},
					{"CFP_RPGPack_White", 0.48},
					{"", 0.01}
					
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					
					{"hlc_rifle_ak12", 0.85},
					{"hlc_rifle_RPK12", 0.15},
					{"", 0}
					
				};
                launchers[] = {
					
					{"CUP_launch_RPG7V", 0.20},
					{"", 0.80}
					
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
