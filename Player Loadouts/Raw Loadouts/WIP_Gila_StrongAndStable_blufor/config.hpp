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
				"The microstate of Podagorsk is undergoing a bloody civil war. A faction of separatist rebels, dedicated to reuniting Podagorsk with the Russian Federation, has overthrown the democratically-elected government and waged war against all opposition.",
				
				"The separatists are frantically pushing to gain a strategic foothold in northern Podagorsk. They have already seized the capital of Berezniki, but took a significant amount of casualties when a group of civilians and police took up arms against them. In an attempt to intimidate the local population and eliminate opposition, the separatists began shelling the town of Protvino during the night.",
				
				"In the early hours of the morning, the mayor of Protvino managed to relay a distress signal to a NATO contingency force stationed at the country's only airbase. Subsequently, a platoon of British soldiers have been tasked with evacuating the civilians before the separatists can reach the city..."
			};
            
			mission[] = {
				"- Evacuate the survivors from Protvino while delaying the separatist advance.",
				"- Destroy the artillery battery located west of the city."
			};
			
            friendlyForces[] = {};
            enemyForces[] = {
				"Separatist Rebels",
				
				"The separatists are armed with modern Russian small arms and heavy weapons, and have been known to utilize technicals alongside Soviet-era vehicles like BRDMs, BTRs and BMPs. Additionally, a couple of T-72s in separatist hands were spotted during the assault on Berezniki."
			};
			
            commandersIntent[] = {};
            
			movementPlan[] = {
				"- The bridges to the northwest and northeast are important choke points.",
				"- MSR Biscuit is vital to potential armor and motorized reinforcements coming from Berezniki.",
				"- Aircraft must avoid the static air defenses in Berezniki and the mountains to the north."
			};
			
            fireSupportPlan[] = {
				"We have a single AW159 Wildcat armed with a 20mm autocannon holding 1200 rounds and a 12-shot FFAR pod. Equipped with a copilot-controlled FLIR camera for reconnaissance. Holds 8 passengers, not including the pilots, for emergency transport.",
				
				"Each of the MAT teams carries one FGM-148 Javelin and two missiles. These can be rearmed through aerial resupply. Each of the boxes holds another two missiles."
			};
            
			specialTasks[] = {
				"The mayor of Protvino, Oleksiy Kolisnyk, is our first priority for extraction. He is known to wear a black pinstripe suit and a red tie. If he was killed in the shelling, retrieve his body and bring it back to base.", 
				
				"The separatists are using faulty Soviet surplus ammunition, and a significant amount of the ordnance fired into Protvino did not detonate. The sappers must attempt to defuse any unexploded ordnance (UXO) that poses a threat."
			};
			
            logistics[] = {
				"- All personnel have detectors that give off visual and audible cues near UXOs.",
				"- Sappers are equipped with defusal kits and explosives to neutralize UXOs.",
				"- Each medic carries one body bag in case we need to CASEVAC the mayor.",
				"- Our two AW101 Merlins hold 25 passengers each and carry a non-thermal camera ball.",
				"- Resupply crates can be slingloaded or cargo-loaded and airdropped by the Merlins.",
				"- Refuel, rearm and repair trucks for friendly aircraft are available at the staging area."
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
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgtl", "mattl", "mtrl", "fac", "spr"};
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
					{"CUP_U_O_RUS_EMR_1", 0.50},
					{"CUP_U_O_RUS_EMR_2_VDV", 0.50}
				};
                
				vests[] = {
					{"CUP_V_RUS_6B3_1", 1}
				};
				
                headgear[] = {
					{"CUP_H_RUS_6B27", 0.50},
					{"CUP_H_RUS_6B27_NVG", 0.50}
				};
				
                goggles[] = {};
                backpacks[] = {};
                faces[] = {
					{"WhiteHead_01", 0.20},
					{"WhiteHead_02", 0.20},
					{"WhiteHead_03", 0.20},
					{"WhiteHead_04", 0.20},
					{"WhiteHead_23", 0.20}
				};
                voices[] = {};
                
				rifles[] = {
					{"hlc_rifle_ak74m", 0.30},
					{"hlc_rifle_aks74", 0.10},
					{"hlc_rifle_aks74u", 0.10},
					{"hlc_rifle_akm", 0.30},
					{"hlc_rifle_rpk_75rnd", 0.10},
					{"CUP_lmg_PKM", 0.10}
				};
                
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
