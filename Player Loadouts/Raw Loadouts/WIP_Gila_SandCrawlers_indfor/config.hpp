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
				"Three years ago, Russia moved military forces into Takistan as part of an alleged agreement between the two nations. Since then, Takistan's largest military installation, Rasman Air Base, has served as an important foreign support base, providing critical logistical aid for Russian air operations and ground forces deploying to Syria.",
				"The Russian presence in Takistan has stirred up painful memories of the American invasion among the local population. Following the initial occupation in 2015, a local militia force consisting of defectors from the Takistani Army has mounted increasingly disruptive attacks against Russian installations. Undermanned and underequipped, Russian base forces have been unable to retaliate and crush the insurgency.",
				"Risking the loss of Rasman Air Base, the Russian Ministry of Defence has deployed a special reconnaissance detachment of Spetsnaz GRU to deal a lethal blow to the militia ..."
			};
			
            mission[] = {
				"- Destroy the two anti-air emplacements.",
				"- Seize the oil refinery.",
				"- Destroy the vehicle depot.",
				"- Exfiltrate to friendly territory in Rasman."
			};
			
            friendlyForces[] = {
				"- Spetsnaz GRU"
			};
            
			enemyForces[] = {
				"Takistani Militia",
				"The militia have been known to utilize captured US equipment and Soviet-era heavy weapons, but also utilize civilian vehicles to mask troop movement. They control the oil fields east of Rasman Air Base, and hold strategic strongholds in the towns of Zavarak and Ravanay. Expect vehicle and infantry patrols on connecting roads and vantage points in these areas."
			};
            
			commandersIntent[] = {};
            
			movementPlan[] = {};
            
			fireSupportPlan[] = {
				"- Two offroad trucks have been retrofitted with M2 .50 caliber machine guns."
			};
            
			specialTasks[] = {};
            
			logistics[] = {
				"- Each unarmed offroad truck is loaded with spare ammunition and demolition charges."
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
            situation[] = {
				"Three years ago, Russia moved military forces into Takistan as part of an alleged agreement between the two nations. Since then, Takistan's largest military installation, Rasman Air Base, has served as an important foreign support base, providing critical logistical aid for Russian air operations and ground forces deploying to Syria.",
				"The Russian presence in Takistan has stirred up painful memories of the American invasion among the local population. Following the initial occupation in 2015, a local militia force consisting of defectors from the Takistani Army has mounted increasingly disruptive attacks against Russian installations. Undermanned and underequipped, Russian base forces have been unable to retaliate and crush the insurgency.",
				"Risking the loss of Rasman Air Base, the Russian Ministry of Defence has deployed a special reconnaissance detachment of Spetsnaz GRU to deal a lethal blow to the militia ..."
			};
			
            mission[] = {
				"* Destroy the two anti-air emplacements.",
				"* Seize the oil refinery.",
				"* Destroy the vehicle depot.",
				"* Exfiltrate to friendly territory in Rasman.",
				"The patrols should be using their flashlights already, but if they're not, use the Tactical Light/IR Laser On/Off module in Zeus - set it to INDFOR with tactical light forced on.", 
				"Feel free to use the Garrison Building module to put AI in buildings if they do not occupy them already.",
				"There are mounted machine guns at the first three objectives - use them carefully and don't hesitate to remove the rest if one does too much damage.",
				"Vans and technicals loaded with infantry are placed in Zavarak. The vehicles that are already on the roads have preset waypoints - let them be. Use the civilian vehicles as a distraction.",
				"Send the vehicular reinforcements up the main roads - use them to slow down the players if they push through too quick or take too long at an objective."
			};
			
            friendlyForces[] = {
				"- Spetsnaz GRU"
			};
            
			enemyForces[] = {
				"Takistani Militia",
				"The militia have been known to utilize captured US equipment and Soviet-era heavy weapons, but also utilize civilian vehicles to mask troop movement. They control the oil fields east of Rasman Air Base, and hold strategic strongholds in the towns of Zavarak and Ravanay. Expect patrols and small roadblocks on connecting roads in these areas."
			};
			
            commandersIntent[] = {};
            movementPlan[] = {};
            
			fireSupportPlan[] = {
				"- Two offroad trucks have been retrofitted with M2 .50 caliber machine guns."
			};
            
			specialTasks[] = {};
            
			logistics[] = {
				"- Each unarmed offroad truck is loaded with spare ammunition and two demolition charges."
			};
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
					{"U_I_C_Soldier_Bandit_2_F", 0.33},
					{"U_I_C_Soldier_Bandit_5_F", 0.33},
					{"U_I_C_Soldier_Bandit_3_F", 0.33}
				};
				
                vests[] = {
					{"V_Pocketed_coyote_F", 0.45},
					{"V_Pocketed_olive_F", 0.45},
					{"rhsusf_iotv_ucp", 0.10}
				};
				
                headgear[] = {
					{"H_Shemag_olive", 0.33},
					{"H_ShemagOpen_tan", 0.33},
					{"H_ShemagOpen_khk", 0.33}
				};
                
				goggles[] = {
					{"G_Bandanna_shades", 0.30},
					{"G_Bandanna_oli", 0.30},
					{"G_Bandanna_blk", 0.30},
					{"", 0.10}
				};
                
				backpacks[] = {
					{"B_FieldPack_cbr", 0.25},
					{"B_FieldPack_oli", 0.25},
					{"", 0.50}
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
					{"rhs_weap_m16a4", 0.45},
					{"rhs_weap_m4", 0.35},
					{"rhs_weap_m249_pip", 0.20}
				};
				
                launchers[] = {
					{"rhs_weap_rpg26", 0.1}
				};
                
				attachments[] = {
					{"rhsusf_acc_wmx_bk", 1.0}
				};
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
