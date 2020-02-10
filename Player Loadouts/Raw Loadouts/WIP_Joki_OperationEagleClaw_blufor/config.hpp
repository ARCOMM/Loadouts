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
            situation[] = {"Operation Eagle Claw, Pakistan. Year 2026. Months before Operation Spearhead and BluePearl. US Special forces team were tasked rescue a Ukrainian, NATO-backed scientist named Vladimir Alexeyev, who was captured by Rogue Pakistani army forces. Pakistani army itself has refused to offer help in rescuing the scientist for unknown reasons. We are going into this mission blind, all we know is the approximate location of the VIP and other objectives. We have no UAV, no sattellite or anything related to support us. Be safe out there.." };
            mission[] = {
				"-Move into the region and find the VIP while completing other objectives (Blue marked area)",
				"-Destroy Three ammo caches in and around Razzale villages (Red Border)",
				"-Investigate and clear the area of Bazarak"
				};
            friendlyForces[] = {
				"Pakistani Army"
			};
            enemyForces[] = {
				"Rogue Pakistani Army",
				"Unknown faction"};
            commandersIntent[] = {
				"The VIP is inside one of the villages, not inside the wilderness. Do not rush finding the VIP, he is too much of an important asset for bargaining deals for the Rogue army. Use your air assets to transport from one objective to the other."
				};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {
				"Identify the Unknown faction",
				 "Avoid flying over the main cities or bases of the region (TOTTAH, KHASSADAR, ABBADAEZ, BAHAD) to not disturb/anger the Pakistanis."
				 };
            logistics[] = {
				"MH-60L DAP (4 rocket pods) - 12x backseats, Pilot, copilot, 2 crewmen seats",
				"UH-60M (Transport) - 12x backseats, Pilot, Copilot, 2 crewmen seats"
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
                removeNightVision = false;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
					{"MNP_CombatUniform_Russia_Heavy_D", 1}
				};
                vests[] = {
					{"MNP_Vest_RU_D", 0.5},
						{"MNP_Vest_RU_D2", 0.5}
					
				};
                headgear[] = {
					{"MNP_Helmet_Russia_D", 1}
				};
                goggles[] = {};
                backpacks[] = {
					{"B_Kitbag_Cbr", 1}
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"arifle_SPAR_01_snd_F", 0.15},
						{"arifle_AK12_F", 0.70},
							{"hlc_rifle_RPK12", 0.15}
				};
                launchers[] = {
					{"launch_RPG32_F", 0.15},
						{"", 0.85}
				};
                attachments[] = {};
            };
            class INDFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
					{"CUP_U_B_CDF_DST_2", 0.5},
						{"CUP_U_B_CDF_DST_2", 0.5}
					
				};
                vests[] = {
					{"V_TacVest_khk", 1}
				};
                headgear[] = {
					{"CUP_H_USMC_MICH200_ESS_COMM_DES", 0.75},
						{"CUP_H_TKI_Lungee", 0.1},
							{"CUP_H_TKI_Lungee_05", 0.15}
				};
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"hlc_rifle_aks74", 0.25},
						{"hlc_rifle_aks74u", 0.25},
							{"hlc_rifle_ak47", 0.25},
								{"hlc_rifle_FAL5000", 0.15},
									{"hlc_rifle_rpk", 0.1}
				};
                launchers[] = {
					{"CUP_Launch_RPG7V", 0.05},
						{"", 0.95}
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
