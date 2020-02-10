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
				"Our target is the regional warlord Hafiz Haidari.",
				
				"One of his lieutenants just slipped up in interrogation and revealed that his boss is organizing regionwide terrorist operations out of this valley. All we have to do is follow the trail of intel, and by the time the sun comes up we'll be kicking down his door.",
			};
			
            mission[] = {
				"- Raid the stash house and search for intelligence.",
				"- Kill or capture Hafiz Haidari."
			};
			
            friendlyForces[] = {
				"Army Compartmented Element",
				"160th Special Operations Aviation Regiment",
			};
			
            enemyForces[] = {
				"Regional Wahhabist Militia",
				
				"This militia is fairly well-equipped, known to use a range of Soviet-era small arms and heavy weapons. Expect technicals, equipped with medium and high-caliber machine guns, along with the odd anti-armor gun and light armored vehicle."
			};
			
            commandersIntent[] = {
				"Go through everything with a fine comb and grab all potential intelligence you can find. Look for laptops, satphones, manilla folders - anything that points us in the direction of Haidari."
			};
			
            movementPlan[] = {};
            
			fireSupportPlan[] = {
				"Each helicopter is armed with two M134 miniguns for self-defense and fire support. The Black Hawks are equipped with a co-pilot camera for air-to-ground reconnaissance."
			};
			
            specialTasks[] = {
				"If you are unable to capture him alive, bring Haidari back to COP Gordon in a body bag."
			};
            
			logistics[] = {
				"Including door gunners, each Chinook seats 27 passengers while the Black Hawks seat 14 each. Slingable and airdroppable resupply boxes are located at COP Gordon."
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                
				uniforms[] = {
					{"CUP_O_TKI_Khet_Partug_01", 0.25},
					{"CUP_O_TKI_Khet_Partug_02", 0.25},
					{"CUP_O_TKI_Khet_Partug_03", 0.25},
					{"CUP_O_TKI_Khet_Partug_04", 0.25}
				};
				
                
				vests[] = {
					{"CUP_V_OI_TKI_Jacket4_01", 0.20},
					{"CUP_V_OI_TKI_Jacket4_02", 0.20},
					{"CUP_V_OI_TKI_Jacket4_04", 0.20},
					{"CUP_V_OI_TKI_Jacket4_05", 0.20},
					{"CUP_V_OI_TKI_Jacket4_06", 0,20}
				};
                
				headgear[] = {
					{"H_ShemagOpen_khk", 0.14},
					{"H_ShemagOpen_tan", 0.14},
					{"H_Shemag_olive", 0.14},
					{"CUP_H_TK_Lungee", 0.14},
					{"CUP_H_TKI_Lungee_04", 0.14},
					{"CUP_H_TKI_Lungee_05", 0.14},
					{"CUP_H_TKI_Lungee_06", 0.14}
				};
               
			    goggles[] = {};
                
				backpacks[] = {
					{"usm_pack_762x51_bandoliers", 0.25},
					{"B_FieldPack_cbr", 0.25}
				};
                
				faces[] = {
					{"PersianHead_A3_01", 0.20},
					{"PersianHead_A3_02", 0.20},
					{"PersianHead_A3_03", 0.20},
					{"Mavros", 0.20},
					{"WhiteHead_16", 0.20}
				};
                
				voices[] = {};
               
			    rifles[] = {
					{"hlc_rifle_aks74", 0.15},
					{"hlc_rifle_aks74u", 0.15},
					{"hlc_rifle_akm", 0.15},
					{"hlc_rifle_rpk", 0.13},
					{"hlc_rifle_rpk74n", 0.13},
					{"CUP_lmg_PKM", 0.13},
					{"hlc_rifle_FAL5061", 0.15}
				};
                
				launchers[] = {
					{"CUP_launch_RPG7V", 0.15},
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
