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
			situation[] = { "A massive insurgent faction has risen up in a far distant land. This faction goes by the name: Movement of the Red Star. This group is made up mostly of former local defense troops. It is heavily suspected that the Russian goverment is supplying the insurgents in order to cause futher political instability in Europe. The insurgents have taken over the town of Schwemlitz and its surrounding villages.",
			"An element of British Royal Marines is continuing the offensive operations in the area in hope of quickly ending this insurection."};
            mission[] = {"- Locate and destroy the Artillery and AA inplacement located somewhere in the forest.", 
				"- Destroy the enemy Supply cache at Probien.", 
				"- Secure the enemy motor pool."};
            friendlyForces[] = {"British Royal Marines"};
            enemyForces[] = {"Drone recon has spotted massive amounts of Insurgent armor and supporting infantry entering the AO.",
				"- Upwards of 2 armor companies mixed with BTR-2s and T-72s", 
				"- Various forms of technicals including some SPG-9s",
				"- Roughly 75 troops mostly garrisoned in the towns of the AO."};
            commandersIntent[] = {"Complete all three tasks to ensure a killing blow is dealt to this insurection"};
            movementPlan[] = {"The roads can be dangerous. Avoid entering new clearings/fields via roads as the enemy will likely focus their attention there. Conducting light recon on the fields will give you a better idea of where the enemy positions are before committing our entire force."};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {"-2x Challenger Mk2", 
				"-2x Mastiff MRAPs", 
				"-2x Ridgeback MRAPs",
			"Additional Javelin rockets are stored in the Mastiff MRAPs."};
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
					{ "CUP_U_O_CHDKZ_Kam_04", 0.25 },
					{ "CUP_U_O_CHDKZ_Kam_02", 0.25 },
					{ "CUP_U_O_CHDKZ_Kam_05", 0.25 },
					{ "CUP_U_O_CHDKZ_Kam_06", 0.25 }
				};

				vests[] = {
					{ "CUP_V_O_Ins_Carrier_Rig", 1.0 }
				};

				headgear[] = {
					{ "CUP_H_ChDKZ_Beanie", 0.80 },
					{ "CUP_H_ChDKZ_Cap", 0.10 }
				};

				goggles[] = {};

				backpacks[] = {
					{ "CUP_B_INS_Backpack_AR", 0.50 },
					{ "CUP_B_INS_AlicePack_Exp", 0.50 }
				};

				faces[] = {
					{ "WhiteHead_01", 0.10 },
					{ "WhiteHead_02", 0.10 },
					{ "WhiteHead_04", 0.10 },
					{ "WhiteHead_05", 0.10 },
					{ "WhiteHead_06", 0.10 },
					{ "WhiteHead_18", 0.10 },
					{ "WhiteHead_09", 0.10 }
				};

				voices[] = {
					{ "cup_d_male01_ru", 0.10 },
					{ "cup_d_male02_ru", 0.10 },
					{ "cup_d_male03_ru", 0.10 },
					{ "cup_d_male04_ru", 0.10 },
					{ "cup_d_male05_ru", 0.10 }
				};

				rifles[] = {
					{ "CUP_arifle_RPK74", 0.20 },
					{ "CUP_arifle_AKS74", 0.20 },
					{ "CUP_arifle_AKS74U", 0.20 },
					{ "CUP_arifle_AK74", 0.20 },
					{ "CUP_arifle_AKM", 0.20 }
				};

				launchers[] = {
					{ "CUP_launch_RPG18", .08 },
					{ "", 0.92 }
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
