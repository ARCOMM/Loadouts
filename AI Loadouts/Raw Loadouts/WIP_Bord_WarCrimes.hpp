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
                "We have been tasked with investigating recent war crimes against civilian populace in the town of Garmsar. The warlord responsible for the area is supported by the US military, but recently he has been severing ties with us and there have even been reports of him acquiring Soviet era vehicles and guns.",
                "A USMC unit has been dispatched via air and moved to the outskirts of Garmsar where supposedly a genocide has occured."
            };
            mission[] = {
                "Investigate if war crimes were commited against the civilian populace in the town Garmsar. If strong evidence has been acquired you have full authority to engage the enemy and capture or kill the enemy warlord in his HQ."
            };
            friendlyForces[] = {
                "US Marine Corps",
                "6x MTVR",
                "1x TOW HMMVW",
                "1x BVP-2 (Borrowed from Czech Military in the area for this operation)"
            };
            enemyForces[] = {
                "Guerilla fighters armed with Soviet era weaponry",
                "Possible RPG7s",
                "Possible BTR60, BMP1 and BTR40"
            };
            commandersIntent[] = {
                "Do not engage the opposing forces until hostile intent has been shown or sufficient evidence of a war crime were found."
            };
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "We have limited ressuply in the vehicles.",
                "The HMMVWs contain rifleman and AR ressuply, TOW HMMVW contains MAT ressuply and the BVP contains both."
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
            mission[] = {
                "There is a group of indfor who are burying the dead (supposedly) in warcrime town, when mission start drive them away.",
                "If they escape have them park the truck visibly at the position where blufor will first encounter enemy to give them a signal",
                "Mission ends if warlord surrenders, if he is killed then all troops move on blufor for revenge (let them know)",
                "If the warlord buys some time then blufor can get attacked in that time (if the mission is too short)"      
            };
            friendlyForces[] = {};
            enemyForces[] = {
                "They can repair to orange, but RPG7 will make a part RED and two side hits is a kill. The ultimate killers are the BMPs"
            };
            commandersIntent[] = {};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "1x BMP 2x BTR per town would be ideal in my head"
            };
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
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgl", "matl", "mtrl", "fac"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class OPFOR {
            languages[] = {"english"};
            AN_PRC_343[] = {"all"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {"co", "dc", "cp", "p", "vc", "mmgl", "matl", "mtrl", "fac"};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class INDFOR {
            languages[] = {"english"};
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
                    {"U_BG_Guerilla3_1", 0.33},
                    {"U_BG_Guerilla1_1", 0.33},
                    {"U_BG_Leader", 0.34}
                };
                vests[] = {
                    {"CUP_V_OI_TKI_Jacket2_03", 1}
                };
                headgear[] = {
                    {"CUP_H_TKI_Lungee_1 6", 1}
                };
                goggles[] = {
                    {"", 1}
                };
                backpacks[] = {
                    {"CUP_B_AlicePack_Khaki", 1}
                };
                faces[] = {
                    {"", 1}
                };
                voices[] = {
                    {"", 1}
                };
                rifles[] = {
                    {"CUP_arifle_AK47_early", 1}
                };
                launchers[] = {
                    {"", 0.85},
                    {"CUP_launch_RPG18", 0.15}
                };
                attachments[] = {
                    {"", 1}
                };
            };
            class INDFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"U_BG_Guerilla3_1", 0.33},
                    {"U_BG_Guerilla1_1", 0.33},
                    {"U_BG_Leader", 0.34}
                };
                vests[] = {
                    {"CUP_V_OI_TKI_Jacket2_03", 1}
                };
                headgear[] = {
                    {"CUP_H_TKI_Lungee_1 6", 1}
                };
                goggles[] = {
                    {"", 1}
                };
                backpacks[] = {
                    {"", 1}
                };
                faces[] = {
                    {"", 1}
                };
                voices[] = {
                    {"", 1}
                };
                rifles[] = {
                    {"CUP_arifle_AK47_early", 1}
                };
                launchers[] = {
                    {"CUP_launch_RPG7V", 1}
                };
                attachments[] = {
                    {"", 1}
                };
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
