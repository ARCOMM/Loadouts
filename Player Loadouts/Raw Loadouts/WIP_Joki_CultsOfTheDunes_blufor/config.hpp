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
				"Anizay. Close to Takistan.",
				"NATO Marines have captured a high-value target - a Takistani Cult leader Alexis Feebarov. The VIP, who has spread his influence over Takistan and parts of Anizay, was being transported by a helicopter convoy over Anizay - a region mostly controlled by a rival cult led by Stephan Krijgerov and CSAT-Russian Alliance.",
				"Both of the factions - The Krijgerov's Cult and The CSAT-Russia alliance are in desperate need of the VIP due to how much power he has. Our intel says Krijgerov's cult already have reached the crashsite and moved the hostage, but we still need to investigate it to find any NATO Marines alive that were not executed.",
				"It is known that Krijgerov's cult are fanatics of toxic gasses and released them out in to the region, so Gasmasks are required while operating in Anizay.",
				"Find the VIP and do not let him get captured by any other factions.",
			};
            mission[] = {
				"-Investigate the crashsite",
				"-Checkout a known prison site",
				"-Checkout Krijgerov's mansion",
			};
            friendlyForces[] = {
				"NATO Airforce"
			};
            enemyForces[] = {
				"Krijgerov's Cultists",
				"Krijgerov's Cultists are old Takistani soldiers and civillians. They hold a strong, but old-fashioned Mechanized force. They use old AK variants and some Vietnam-era weaponry.",
				"CSAT-Russian Alliance",
				"CSAT-Russian Alliance uses mostly modern gear: AK-12's and RPK-12's and their vehicles consists of heavily armored Karatel's and Otokars and other various older variants of CSAT-Russia's gear.",
			};
            commandersIntent[] = {
				"Do not take off your Gasmasks.",
				"Do not fire unless you're fired upon.",
				"Both CSAT-Russian Alliance and Krijgerov's Cultists are enemy forces if they open fire on you.", 
			};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
				"-M2A3 ERA Bradley IFV",
				"-HMMWV M1151 M2",
				"-3x HMMWV (Unarmed)",
				"-HMMWV MK19",
				"-HMMWV M2",
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
					{"MNP_CombatUniform_RU_Med_D", 1}
				};
                vests[] = {
					{"MNP_Vest_RU_D", 1}
				};
                headgear[] = {};
                goggles[] = {
					{"skn_m50_gas_mask_hood", 1}
				};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"hlc_rifle_ak12", 0.75},
						{"hlc_rifle_RPK12", 0.25}
				};
                launchers[] = {};
                attachments[] = {};
            };
            class INDFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
					{"MNP_CombatUniform_US3Co_A", 0.5},
						{"usm_bdu_d", 0.5},
				};
                vests[] = {
					{"V_Chestrig_khk", 0.90},
						{"usm_vest_pasgt_lbe_gr_m", 0.1},
				};
                headgear[] = {};
                goggles[] = {
					{"skn_m04_gas_mask_blu", 1}
				};
                backpacks[] = {
					{"B_AssaultPack_rgr", 1}
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"hlc_rifle_ak47", 0.2},
						{"hlc_rifle_aks74", 0.2},
							{"hlc_lmg_m60", 0.1},
								{"hlc_rifle_Colt727", 0.2},
									{"hlc_smg_mp5a3", 0.1},
										{"RH_M16A2", 0.2},
				};
                launchers[] = {
					{"launch_RPG7_F", 0.03},
				{"", 0.97}
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
