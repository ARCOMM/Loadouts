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
            situation[] = {"TK militia have pushed us into a corner. They have managed to block both bridges connecting us to friendly forces. A tank platoon guarding the road to our east have started moving down a valley to assist us. Hold out until the attack is repelled or the friendly T72 platoon arrives via the canyon marked with our flag."};
            mission[] = {"Hold the town until we are received of duty."};
            friendlyForces[] = {"Serani Liberation Army"};
            enemyForces[] = {"TK militia with attached mechanized platoon. BRDM, BTR60, BMP2, and T55 "};
            commandersIntent[] = {"Use fortify to build area as needed. HMG teams are in charge of AGS and HMG bags in ammo truck. MAT is in charge of SPG and Metis bag."};
            movementPlan[] = {"Hold the line"};
            fireSupportPlan[] = {"Gambler will cover the road with the AT gun."};
            specialTasks[] = {};
            logistics[] = {"1 Ammo Ural contains AK ammo PKP ammo and HMG/MAT's weapon bags."};
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
            languages[] = {"english"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "infil", "m", "fac"};
            AN_PRC_152[] = {};
            AN_PRC_117F[] = {"infil", "fac"};
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
            languages[] = {"greek"};
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
                removeMedicalItems = false;
                prioritizeTracerMags = true;
                uniforms[] = {
					{"CUP_U_O_CHDKZ_Kam_01", 0.2},
					{"CUP_U_O_CHDKZ_Kam_02", 0.2},
					{"CUP_U_O_CHDKZ_Kam_03", 0.2},
					{"CUP_U_O_CHDKZ_Kam_04", 0.2},
					};
                vests[] = {"CUP_V_O_SLA_Flak_Vest03",1};
                headgear[] = {
					{"CUP_H_ChDKZ_Beanie",0.3},
					{"CUP_H_SLA_Helmet", 0.5},
					{"", 0.2}
				};
                goggles[] = {};
                backpacks[] = {
					{"CUP_B_AlicePack_Khaki", 0.3}
				};
                faces[] = {};
                voices[] = {};
				rifles[] = {
					{"CUP_arifle_AKM", 0.2},
					{"CUP_arifle_AK47", 0.5},
					{"CUP_arifle_AKS", 0.3},
					{"CUP_arifle_RPK74", 0.2}
				};
                launchers[] = { "launch_RPG7_F", 0.05};
                attachments[] = {"acc_flashlight", 0.2};
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
            budget = 1500;
            objects[] = {
				{Land_Plank_01_4m_F, 10},
				{Land_BagFence_Short_F, 20},
				{Land_BagFence_Long_F, 30},
				{Land_BagFence_Round_F, 20},
				{Land_BagFence_Corner_F, 10},
				{Land_BagFence_End_F, 5},
				{Land_fort_rampart, 30},
				{Fence_corrugated_plate, 40},
			};
        };
        class CIVILIAN {
            budget = -1;
            objects[] = {};
        };
    };
};
