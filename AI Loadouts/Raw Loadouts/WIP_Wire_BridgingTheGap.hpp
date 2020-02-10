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
            situation[] = {"Nordic Coalition has been pushing south through Germany after a disastrous outcome in operation Breaking Point and are at risk of gaining a foothold to push south into more of Europe. The US are hoping to push back against this modern blitz by using the old 'one crossing left' tactic, holding the main way across a major river. "};
            mission[] = {"Primary mission is to hold the main bridge.","Secondary mission is to blow up the western most bridge, this is required to stop enemies from having early crossing and taking the main bridge from behind us.", "Optional objective is to defend the ammo cache, should the enemy find it and blow it up you will rely on what you have until relieved or enemy repelled."};
            friendlyForces[] = {"US Army"};
            enemyForces[] = {"Nordic Coalition combined forces between Finland and Norway. Multiple platoons worth of infantry. Norway assorted vehicles: Leopard 2SG, M113A3, and RG-31 M2 OD. Finland assorted vehicles: Leopard 2SG, BMP-2, Land Rover."};
            commandersIntent[] = {"Send a detachement force to blow the western bridge with 3 or more charges in a cluster, use rest of forces to defend main bridge as required."};
            movementPlan[] = {};
            fireSupportPlan[] = {"Firesupport on route, 80mm mortars will hit when allies are close enough to relieve your defense."};
            specialTasks[] = {"During briefing lead elements can purchase and place sandbags and M2 tripods. There are 20 tickets with sandbags costing 1 and tripods costing 3 a piece."};
            logistics[] = {"Two M-ATV's for transport, one M-ATV with Explosives and Two M-ATV's for MAT teams. Everything else is what you are carrying or entrenchment positions."};
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
            situation[] = {"US has set up defenses against Nordic Coalition armies approach on bridge."};
            mission[] = {"US is trying to defend the bridge, blow up western bridge and defend ammo cache to the east. Only the center bridge is vital. Throw curveballs through the forest, be relatively creative with the tanks for good scare effect but not focused destruction."};
            friendlyForces[] = {};
            enemyForces[] = {};
            commandersIntent[] = {};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = { "Mission is timed, 45 minutes is the aim but not a hard number" };
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
					{"MNP_CombatUniform_Fin_A", 0.5},
					{"MNP_CombatUniform_Fin_B", 0.5} };
                vests[] = {
					{"MNP_VEST_FIN_1", 0.5},
					{ "MNP_VEST_FIN_2", 0.5} };
                headgear[] = {
					{"MNP_Boonie_FIN", 0.5},
					{"MNP_Helmet_FIN_T", 0.5} };
                goggles[] = {};
                backpacks[] = {
					{"b_carryall_oli", 0.15},
					{"", 0.85} };
                faces[] = {
					{"whitehead_20", 1} };
                voices[] = {};
                rifles[] = {
					{"hlc_rifle_rk62", 0.85},
					{"cup_lmg_pkm", 0.15} };
                launchers[] = {
					{"cup_launch_m72a6", 0.20},
					{"", 0.80} };
                attachments[] = {};
            };
            class INDFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
					{ "MNP_CombatUniform_NOR_A", 0.5 },
					{ "MNP_CombatUniform_NOR_B", 0.5 } };
                vests[] = {
					{ "MNP_VEST_NOR_1", 0.5 },
					{ "MNP_VEST_NOR_2", 0.5 } };
                headgear[] = {
					{ "MNP_Boonie_NOR", 0.5 },
					{ "MNP_Helmet_DS", 0.5 } };
                goggles[] = {};
                backpacks[] = {
					{ "b_carryall_oli", 0.15 },
					{"", 0.85} };
                faces[] = {
					{ "whitehead_20", 1 } };
                voices[] = {};
                rifles[] = {
					{"arifle_SPAR_01_blk_F", 0.80},
					{"lmg_03_F", 0.15},
					{"hlc_lmg_mg3", 0.5} };
                launchers[] = {
					{ "cup_launch_m72a6", 0.20 },
					{"", 0.80} };
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
            budget = 20;
            objects[] = {
				{"Land_BagFence_01_long_green_F", 1},
				{ "Land_BagFence_01_round_green_F", 1 },
				{ "Land_BagFence_01_short_green_F", 1 },
				{"CUP_B_M2StaticMG_MiniTripod_USMC", 3},
				{"CUP_B_M2StaticMG_USMC", 3} };
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
