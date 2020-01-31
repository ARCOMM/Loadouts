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
            situation[] = {"AAF has set up well outside their operational district in the local forest area and are behaving increasingly aggressive towards the surrounding area. Sources are uncertain if this is a setup for bigger plans or a leader for AAF functioning on their own.", "Two AAF helicopter pilots have defected to our undercover operators and have provided locations on current compounds and will be assisting the mission."};
            mission[] = {"Primary mission is to locate and capture the VIP alive, his location has been narrowed down to being inside a white medical building with a red diamond on the roof. Should the VIP die bring him back in a body bag.", "VIP description is an individual wearing AAF generals uniform and a red cap.", "Additional mission is to destroy any radio towers and antennas you come across to limit information leakage before leaving."};
            friendlyForces[] = {"Undercover Blufor operators in unmarked uniforms, Four AAF pilots in piloting gear."};
            enemyForces[] = {"AAF Infantry, Warrior IFV, Leopard 2 MBT, Two AH-64D"};
            commandersIntent[] = {"Attack the hidden airfield first to provide the pilots with armed helicopters, our pilots should be able to do a scout for us to both find main asset location and take out any high risk assets before returning. Pilots have assured us the helicopters will have plain helmets in them to avoid any Blu on Blu once they are back on the grounds."};
            movementPlan[] = {"At ground leads discretion"};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {"5 offroad vehicles with extra munition, explosives and cable ties."};
        };
        class OPFOR {
            situation[] = { "AAF has set up well outside their operational district in the local forest area and are behaving increasingly aggressive towards the surrounding area. Sources are uncertain if this is a setup for bigger plans or a leader for AAF functioning on their own.", "Four AAF pilots have 'defected' to the opposing forces to assist with anything they need while maintaining their own mission parameters of eliminating the AAF Lead element. This leader knows who we are and could out us for everything we have done and know of both their faction and the true AAF and puts the entire AAF at risk, this cannot happen. Do not provide this information to your collaborators." };
            mission[] = {"Primary mission is to locate the VIP together with the collaborators, and make sure he dies in an accident, Do not fire rocketpods at assumed locations as that would be to obivous. Go along with every other mission agenda provided to limit any suspicion on yourself, getting caught attempting to assassinate the general would ruin our relations and make our benefactors unwilling to cooperate with us in the future"};
            friendlyForces[] = {"Yourself and your Copilots, Friendly foreign operators"};
            enemyForces[] = {"AAF Infantry, Warrior IFV, Leopard 2 MBT, Two AH-64D"};
            commandersIntent[] = {"Attack the hidden airfield first to provide yourself with armed helicopters, you have assured the other team that there are plain helmets in the helicopters to avoid risk of friendly fire."};
            movementPlan[] = {"At ground leads discretion"};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {"You only have what you left the AAF with, borrow or steal whatever extra you need."};
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
			situation[] = {"Players are attacking the airfield for air assets, then multiple compounds for a VIP target"};
            mission[] = {"Spawn in appropriate patrols and land rovers as needed on the roads, to keep environment clean and not overcrowded with preplaced items."};
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
					{"U_I_CombatUniform", 0.5},
					{"U_I_Combatuniform_shortsleeve", 0.5},
				};
                vests[] = {
					{"V_TacVest_oli", 0.4},
					{"V_PlateCarrierIA1_dgtl", 0.2},
					{"V_TacVest_camo", 0.4},
				};
                headgear[] = {
					{"H_HelmetIA", 0.8},
					{"H_MilCap_dgtl", 0.2},
				};
				goggles[] = { 
					{"G_Bandanna_Aviator", 0.4},
					{"G_Bandanna_oli", 0.3},
					{"G_Bandanna_tan", 0.3},
				};
                backpacks[] = {
					{"B_Assaultpack_dgtl", 0.8},
					{"B_Bergen_dgtl_F", 0.2},
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"SMG_03C_camo", 0.25},
					{"arifle_Mk20_F", 0.25},
					{"arifle_Mk20C_F", 0.25},
					{"SMG_03_camo", 0.25},
				};
                launchers[] = {
					{"launch_MRAWS_green_rail_F", 0.15},
					{"", 0.85},
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
