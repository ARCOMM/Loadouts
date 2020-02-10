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
            situation[] = 
			{
				"May 28th, 1983. Takistan.",
				"American funded rebels have made deep cuts into our land, but have overextended themselves and with that an opportunity has revealed itself.",
				"Their main reinforcement route runs from <marker name='nur_marker'>Nur</marker>, cutting this line will trap the overextended rebels, dealing a decisive blow.",
				"Time is ticking however, our forces at <marker name='mulladost_marker'>Mulladost</marker> can't hold forever and may open an alternative route.",
				"Normally this would've been the task for a company, though for now you lot will have to do."
			};
            mission[] = 
			{
				"Seize <marker name='nagara_marker'>Nagara</marker> within 80 minutes."
			};
            friendlyForces[] = 
			{
				"A forward element are present within the AO, but aren't responding. <marker name='forward_element'>Last known position</marker>, search it for any survivors."
			};
            enemyForces[] = 
			{
				"A companys worth of armed rebels and some medium armoured vehicles within the marked out AO.",
				"Possible reinforcements from ASRs and MSRs. North should be largely secure due to the minefield.",
				"There are minefields present within the valley, though the enemy has been nice enough to mark them with signs."
			};
            commandersIntent[] = 
			{
				"As you are on a time limit, consider simply demolishing the opposition using the tools available and performing squad bounding while mounted."
			};
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
            languages[] = {"russian"};
            AN_PRC_343[] = {"co","m","dc", "r", "vc"};
            AN_PRC_148[] = {"co", "dc"};
            AN_PRC_152[] = {};
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
                removeMedicalItems = false;
                prioritizeTracerMags = false;
                uniforms[] = {{"CUP_O_TKI_Khet_Partug_01", 1},{"CUP_O_TKI_Khet_Partug_02", 1},{"CUP_O_TKI_Khet_Partug_03", 1},{"CUP_O_TKI_Khet_Partug_04", 1},{"CUP_O_TKI_Khet_Partug_05", 1},{"CUP_O_TKI_Khet_Partug_06", 1},{"CUP_O_TKI_Khet_Partug_07", 1},{"CUP_O_TKI_Khet_Partug_08", 1},{"CUP_O_TKI_Khet_Jeans_01", 1},{"CUP_O_TKI_Khet_Jeans_02", 1},{"CUP_O_TKI_Khet_Jeans_03", 1},{"CUP_O_TKI_Khet_Jeans_04", 1}};
                vests[] = {{"CUP_V_OI_TKI_Jacket1_01", 1},{"CUP_V_OI_TKI_Jacket1_02", 1},{"CUP_V_OI_TKI_Jacket1_03", 1},{"CUP_V_OI_TKI_Jacket1_04", 1},{"CUP_V_OI_TKI_Jacket1_05", 1},{"CUP_V_OI_TKI_Jacket1_06", 1},{"CUP_V_OI_TKI_Jacket2_01", 1},{"CUP_V_OI_TKI_Jacket2_02", 1},{"CUP_V_OI_TKI_Jacket2_03", 1},{"CUP_V_OI_TKI_Jacket2_04", 1},{"CUP_V_OI_TKI_Jacket2_05", 1},{"CUP_V_OI_TKI_Jacket2_06", 1},{"CUP_V_OI_TKI_Jacket3_01", 1},{"CUP_V_OI_TKI_Jacket3_02", 1},{"CUP_V_OI_TKI_Jacket3_03", 1},{"CUP_V_OI_TKI_Jacket3_04", 1},{"CUP_V_OI_TKI_Jacket3_05", 1},{"CUP_V_OI_TKI_Jacket3_06", 1},{"CUP_V_OI_TKI_Jacket4_01", 1},{"CUP_V_OI_TKI_Jacket4_02", 1},{"CUP_V_OI_TKI_Jacket4_03", 1},{"CUP_V_OI_TKI_Jacket4_04", 1},{"CUP_V_OI_TKI_Jacket4_05", 1},{"CUP_V_OI_TKI_Jacket4_06", 1},{"CUP_V_OI_TKI_Jacket5_01", 1},{"CUP_V_OI_TKI_Jacket5_02", 1},{"CUP_V_OI_TKI_Jacket5_03", 1},{"CUP_V_OI_TKI_Jacket5_04", 1},{"CUP_V_OI_TKI_Jacket5_05", 1},{"CUP_V_OI_TKI_Jacket5_06", 1},{"CUP_V_OI_TKI_Jacket6_01", 1},{"CUP_V_OI_TKI_Jacket6_02", 1},{"CUP_V_OI_TKI_Jacket6_03", 1},{"CUP_V_OI_TKI_Jacket6_04", 1},{"CUP_V_OI_TKI_Jacket6_05", 1},{"CUP_V_OI_TKI_Jacket6_06", 1}};
                headgear[] = {{"CUP_H_TKI_SkullCap_01", 1},{"CUP_H_TKI_SkullCap_02", 1},{"CUP_H_TKI_SkullCap_03", 1},{"CUP_H_TKI_SkullCap_04", 1},{"CUP_H_TKI_SkullCap_05", 1},{"CUP_H_TKI_SkullCap_06", 1},{"CUP_H_TKI_Lungee_01", 1},{"CUP_H_TKI_Lungee_02", 1},{"CUP_H_TKI_Lungee_03", 1},{"CUP_H_TKI_Lungee_04", 1},{"CUP_H_TKI_Lungee_05", 1},{"CUP_H_TKI_Lungee_06", 1},{"CUP_H_TKI_Lungee_Open_01", 1},{"CUP_H_TKI_Lungee_Open_02", 1},{"CUP_H_TKI_Lungee_Open_03", 1},{"CUP_H_TKI_Lungee_Open_04", 1},{"CUP_H_TKI_Lungee_Open_05", 1},{"CUP_H_TKI_Lungee_Open_06", 1},{"CUP_H_TKI_Pakol_1_01", 1},{"CUP_H_TKI_Pakol_1_02", 1},{"CUP_H_TKI_Pakol_1_03", 1},{"CUP_H_TKI_Pakol_1_04", 1},{"CUP_H_TKI_Pakol_1_05", 1},{"CUP_H_TKI_Pakol_1_06", 1},{"CUP_H_TKI_Pakol_2_01", 1},{"CUP_H_TKI_Pakol_2_02", 1},{"CUP_H_TKI_Pakol_2_03", 1},{"CUP_H_TKI_Pakol_2_04", 1},{"CUP_H_TKI_Pakol_2_05", 1},{"CUP_H_TKI_Pakol_2_06", 1}};
                goggles[] = {{"", 5},{"G_Aviator", 1},{"CUP_FR_NeckScarf2", 1},{"CUP_FR_NeckScarf2", 1},{"G_Bandanna_oli", 1}};
                backpacks[] = {{"", 6},{"CUP_B_AlicePack_Bedroll", 1},{"CUP_B_AssaultPack_Coyote", 1},{"CUP_B_AlicePack_Khaki", 1}};
                faces[] = {};
                voices[] = {};
                rifles[] = {{"CUP_lmg_PKM", 1},{"CUP_arifle_RPK74", 2},{"CUP_arifle_AK47_Early", 4},{"CUP_srifle_LeeEnfield", 1},{"CUP_arifle_AKS", 2},{"CUP_arifle_M16A1", 2}};
                launchers[] = {{"", 5},{"CUP_launch_RPG7V", 1},{"CUP_launch_RPG18", 1}};
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
