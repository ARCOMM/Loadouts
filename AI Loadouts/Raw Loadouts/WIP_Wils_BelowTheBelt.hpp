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
            situation[] = {"Once US forces gained control of the North Eastern island of Pulau Gurun, it was all too obvious that the South Western island of Pulau Monyet was next." ,"US Forces have gained a foothold on the northern end of the island, and began an assault on the Southern end of the island. The two cities of Nirwana and Tanjung have proven hostile to us, and we suspect that the Vietcong are hiding weapon caches there. We are to Sweep these villages and locate any caches, and mark their positions for later removal." ,"A small patrol near the Eastern end of the island has gone radio silent, and we are to investigate their disappearance. We know they were near the city of Larete, which is under hostile control. We are to clear that city and remove enemy soldiers." ,"We are then to extract by air, while we wait for fresh reinforcements to move in to this end of the island."};
            mission[] = {"Sweep the Southern towns for explosives. If any are found, mark their position for later removal." ,"Investigate the disappearance of the patrol." ,"Clear enemy presence from the city of Larete."};
            friendlyForces[] = {"US Marines."};
            enemyForces[] = {"Vietcong."};
            commandersIntent[] = {"These people are not our friends. If they are carrying a weapon, it is to do us harm. Even civilians do not want anything to do with us. Be mindful of this when moving through their cities."};
            movementPlan[] = {"Since the fireteams will be communicating within themselves with voice, it is best to keep them spread out, so that verbal commands do not go to the wrong team." ,"With one helicopter crew in the CAS bird, the second bird can be used to transport units between objectives."};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {"Two transport UH-1D and one gunship UH-1D." ,"FAC might want to take another 77 for air net, unless air will stay on PLT. If there are major issues then they can take a 117."};
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
            AN_PRC_343[] = {};
            AN_PRC_148[] = {};
            AN_PRC_152[] = {};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {"co", "rat", "p", "cp", "fac"};
        };
        class OPFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {};
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
                    {"U_BG_Guerilla1_1", .1},
                    {"U_I_C_Soldier_Bandit_5_F", .6},
                    {"U_I_C_Soldier_Para_4_F", .2},
                    {"U_I_C_Soldier_Para_1_F", .1}
                };
                vests[] = {
                    {"CUP_V_RUS_Smersh_1", .2},
                    {"CUP_V_O_Ins_Carrier_Rig_Light", .2},
                    {"", .6}
                };
                headgear[] = {
                    {"CUP_H_SLA_OfficerCap", .1},
                    {"H_Bandanna_cbr", .4},
                    {"vietsh_Head", .1},
                    {"", .4}
                };
                goggles[] = {};
                backpacks[] = {
                    {"CUP_B_AlicePack_Bedroll", .3},
                    {"CUP_B_CivPack_WDL", .3},
                    {"", .4}
                };
                faces[] = {
                    {"AsianHead_A3_05", .3},
                    {"usm_AsianHead_A3_02", .3},
                    {"AsianHead_A3_04", .3},
                    {"AsianHead_A3_03", .1}
                };
                voices[] = {};
                rifles[] = {
                    {"hlc_rifle_ak47", .1},
                    {"hlc_rifle_ak74", .2},
                    {"hlc_rifle_ak74_dirty", .5},
                    {"hlc_rifle_rpk", .2}
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"U_C_Poloshirt_blue", .2},
                    {"U_C_Poloshirt_salmon", .2},
                    {"U_BG_Guerilla2_3", .2},
                    {"U_I_C_Soldier_Bandit_1_F", .2},
                    {"U_I_C_Soldier_Bandit_4_F", .2}
                };
                vests[] = {};
                headgear[] = {
                    {"H_Bandanna_cbr", .4},
                    {"", .6}
                };
                goggles[] = {};
                backpacks[] = {};
                faces[] = {
                    {"AsianHead_A3_05", .3},
                    {"usm_AsianHead_A3_02", .3},
                    {"AsianHead_A3_04", .3},
                    {"AsianHead_A3_03", .1}
                };
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
