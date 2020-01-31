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
				"Chernarus. Days after the disaster of Operation Bloodskies. While European allies were failing their objectives on the east, the US Marines secured the whole western beachhead and pushed into the region and secured most of the region, this kind of blitz actions of the US Marines made their lines thin.",
				"Although the US Marines have successfully completed their given objectives, the Europeans did not and placed gaps in our advance. For example, the resistance leaders that were supposed to be saved from the enemy hands were executed. Without them, our knowledge of the area is minimal which gives the enemy the advantage of guerilla tactics to cripple our advance.",
				"Recently, a very secure convoy of supplies moving towards the frontline lost contact with HQ, the US Marine Recon forces are moving in to investigate and retrieve the supplies back.",
				
			};
            mission[] = {
				"-Investigate the convoys path, find where the convoy was hit.",
				"-Find the convoy supply trucks (3x) and secure them",
				"-Wait for friendly logistics team to pick up the trucks",
			};
            friendlyForces[] = {
				"US Marines Recon"
			};
            enemyForces[] = {
				"Chernarussian army",
				"Chernarussian airforce",
				"The Chernarussian army in this side of the battlefield will be lightly armed. Expect HMG-armed UAZ's, BRDM's as the bulk of the enemy mechanized force. It is unknown if there are any heavy or medium armed vehicles in the area.",
				"Chernarussian airforce consists of paratroopers, Mi-8MT's and Ka-50 Blacksharks, no fixed-plane aircraft was spotted in the area",
			
			};
            commandersIntent[] = {
				"-Base EagleEye was supposed to get a part of the supplies from the convoy. We are expecting that the enemy might have either captured the base or destroyed it.",
				"-Sticking to the convoy path (blue dots) is recommended",
				"-Beware of new enemy tactics. They will use the cover of the forests as much as possible. We are suspecting they have fortified positions in the hills",
				"-Expect civillian presence."
			};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {
				"-Destroy all air assets",
				"-Avoid destroying civillian vehicles/buildings",
			};
            logistics[] = {
				"2x HMMWV M2",
				"1x HMMWV SOV (Mk19)",
				"1x HMMWV SOV (M2)",
				"1x HMMWV Avenger (Anti-air)",
				"HMMWV's and M1151's for additional transport"
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
