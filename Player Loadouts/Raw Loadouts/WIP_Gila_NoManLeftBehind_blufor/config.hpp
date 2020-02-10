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
        freezeTime = 2;
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
				"In late February, a C-130 carrying a platoon of Norwegian soldiers suffered from mechanical failure over the Mediterranean. Although many of the soldiers managed to conduct an emergency jump from the plane, the platoon became dispersed over the island of Bozcaada, which is occupied by a hostile garrison of the Czech Armed Forces. Although they suffered great losses, the scattered platoon managed to fight their way off the island, but a single man was left behind amid the chaos and subsequently captured.",
				
				"More than a month later, Norwegian authorities have exhausted all diplomatic measures and see no choice but to use military force to retrieve their soldier. Relying on their strong alliance with the United States through NATO, the special forces of the Royal Norwegian Navy have requested assistance from their American counterparts, and are now preparing to assault the island of Bozcaada to retrieve their missing man before it is too late..."
			};
            
			mission[] = {
				"- Locate and rescue the captured Norwegian soldier."
			};
			
            friendlyForces[] = {
				"- United States Navy, SEAL Team 8",
				"- Royal Norwegian Navy, Marinejegerkommandoen (MJK)"
			};
			
            enemyForces[] = {
				"Czech Armed Forces",
				
				"The enemy garrison primarily consists of an infantry force, but it has been known to rely on Soviet-era armor assets like BTR-60s and ZSU-23s, along with heavy guns like DShKMs and KORDs to defend isolated compounds. Intelligence suggests that two reinforcement garrisons are stationed at the western airfield and in the town of Merkez. Due to their two static anti-air batteries, in addition to a roaming ZSU-23, we are unable to utilize aircraft until these assets are destroyed. The exact location of the easternmost anti-air position is unknown, but it is likely less defended than the primary anti-air battery to the west.",
				
				"The Czech military intelligence service has a covert presence on the island, and operates a number of black sites for interrogation of political and military prisoners. In the aftermath of the escape, the Czechs convinced themselves that the Norwegians received help from the civilian population, and commenced surprise arrests during the night. The missing Norwegian is likely held alongside civilian suspects at one of the Military Intelligence black sites."  
			};
			
            commandersIntent[] = {};
            
			movementPlan[] = {
				"The RHIBs will be utilized for the initial insertion. If the anti-air emplacements are not destroyed, the boats will be used for extraction as well - make sure to land at a secure location where the boats can be left unattended.",
				"We are unable to transport ground vehicles to the island, and will have to commandeer enemy vehicles if necessary."
			};
			
            fireSupportPlan[] = {
				"4x RHIBs armed with .50 caliber machine guns and 40mm grenade launchers. Total passenger capacity of 11, not including the driver and gunner.",
				
				"2x MH-60L Black Hawks armed with 4000 rounds of 7.62mm for two M134 miniguns, with a passenger capacity of 12, not counting the two door gunners and pilots.",
				
				"2x AH-6M Little Birds with one passenger seat for emergency extraction. One armed with 6000 rounds for the 7.62mm M134 and a 14-shot FFAR pod, the other with 1300 rounds of .50 caliber for the GAU-19, 4x DAGRs and a single AGM-114K Hellfire."
			};
            
			specialTasks[] = {
				"- Destroy the two anti-air batteries and the ZSU-23 to allow CAS and helicopter extraction.",
				"- Locate and release potential civilian hostages."
			};
            
			logistics[] = {
				"- 2x demolition blocks with accompanying clackers are stored in each of the RHIBs.",
				"- Each medic carries a body bag in case the Norwegian soldier has been killed.",
				"- Aircraft can return to the ship in order to refuel, repair and rearm."
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
                    {"CUP_U_B_CZ_WDL_TShirt", 1}
                };
                vests[] = {
                    {"MNP_Vest_CZ_1", 0.5},
					{"MNP_Vest_CZ_2", 0.5}
                };
                headgear[] = {
                    {"CUP_H_SLA_Beret", 1}
                };
                goggles[] = {};
                backpacks[] = {
                    {"CUP_B_AlicePack_Khaki", 0.3}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_Sa58P", 0.5},
                    {"CUP_arifle_Sa58P_des", 0.15},
					{"CUP_arifle_Sa58V_camo", 0.15},
					{"CUP_lmg_PKM", 0.20}
                };
                launchers[] = {
					{"CUP_launch_RPG7V", 0.15},
					{"", 0.85}
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
