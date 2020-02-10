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
            situation[] = {
				"The former French colony of Malden has long been a criminal safe haven due to its weak police force and its lack of extradition policies with foreign nations. In recent months, however, the newly appointed Prime Minister has shifted the government's stance on international crime under increasing international pressure. As a result, career criminals that have settled on Malden are having their assets frozen and their luxurious properties raided by the national police force - the Gendarmerie.",

				"With their assets frozen and the risk of extradition growing larger by the day, a crew of armed robbers prepare to take down one final score so that they can escape from Malden and the law once and for all ..."
			};
            
			mission[] = {
				"- Breach the Le Port Bank and steal at least six bank deposit bags from the vault.",
				"- Make your way to the airport, clear the runway and escape from Malden by plane."
			};
			
            friendlyForces[] = {
				"Armed Robbers"
			};
			
            enemyForces[] = {
				"ION Security<br/>- Two security guards, armed with 9mm handguns, are working the night shift at the Le Port Bank.",
				
				"Gendarmerie<br/>- Typically armed with 5.56 and 7.62mm assault rifles. They are equipped with protective Kevlar equipment in their distinctive police blue color. Their rapid response teams use dark blue vans with Gendarmerie marks as insertion and pursuit vehicles.<br/><br/>- Their average response time is around two minutes. They will likely dispatch assault teams from their Le Port HQ to disrupt the heist.<br/><br/>- Expect roadblocks in towns, along the main roads and on the airfield runway, along with significant blocking forces."
			};
			
            commandersIntent[] = {};
            
			movementPlan[] = {
				"Use the Romeo teams to scout ahead and report on enemy positions."
			};
			
            fireSupportPlan[] = {};
            
			specialTasks[] = {};
            
			logistics[] = {
				"- Use the breachers' explosives to blow through the bank's perimeter fence.",
				"- Drag the deposit bags outside and load them into the SUVs.",
				"- Once at the airfield, load the bags into the planes."
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                
				uniforms[] = {
					{"U_B_GEN_Soldier_F", 0.80},
					{"U_B_GEN_Commander_F", 0.20}
				};
                
				vests[] = {
					{"V_TacVest_blk", 1}
				};
				
                headgear[] = {
					{"H_PASGT_basic_black_F", 0.90},
					{"H_MilCap_gen_F", 0.10},
					{"H_Beret_gen_F", 0.10}
				};
				
                goggles[] = {
					{"G_Shades_Black", 0.10},
					{"G_Shades_Green", 0.10},
					{"G_Aviator", 0.10},
					{"", 0.70}
				};
				
                backpacks[] = {};
                
				faces[] = {
					{"GreekHead_A3_01", 0.10},
					{"GreekHead_A3_02", 0.10},
					{"GreekHead_A3_03", 0.10},
					{"GreekHead_A3_04", 0.10},
					{"GreekHead_A3_05", 0.10},
					{"GreekHead_A3_06", 0.10},
					{"GreekHead_A3_07", 0.10},
					{"GreekHead_A3_08", 0.10},
					{"GreekHead_A3_09", 0.10},
					{"GreekHead_A3_11", 0.10}
				};
                
				voices[] = {
					{"Male01ENGFRE", 0.50},
					{"Male02ENGFRE", 0.50}
				};
                
				rifles[] = {
					{"hlc_rifle_vendimus", 0.40},
					{"hlc_rifle_FAL5061", 0.40}
				};
                
				launchers[] = {};
               
			   attachments[] = {
					{"CUP_acc_Flashlight", 1}
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
