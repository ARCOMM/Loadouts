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
        freezeTime = 1;
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
                "The weather is getting worse. We can't wait any longer, we need to strike now before we start freezing to death.",
                "We inserted three days ago and the hike over here was supposed to take a day but we only got here this morning. Damn weather.",
                "The airstrip to the east is the home base for the 31st Guards Airborne Brigade. We are here to avenge their attack on our soil a few months ago."              
            };
            mission[] = {
                "- Attack the enemy airfield and cause as much damage as possible.",
                "- Exfiltrate via British helicopter.",
                "Optional:",
                "- Disrupt enemy communications by destroying the radio tower."
            };
            friendlyForces[] = {
                "1 Platoon of Finish airborne trooops."                
            };
            enemyForces[] = {
                "Unknown number of Russian VDV paratroopers stationed at the Krasnostav airstrip.",
                "We also know of a Russian FOB located in Dubrovka. The units stationed here have access to Anti-Air and APCs."
            };
            commandersIntent[] = {
                "Cause as much devastation as possible. You've been provided with explosive charges, use them to blow up vehicles and buildings. Try to cause lasting damage.",
                "The key here will be speed and cohesion. We would recommend a simoultaneous strike at both the eastern radio tower and the airfield it self. This will cause confusion and probably delay their call for aid.",
                "The radiotower should be very lightly defended, only a handful of infantry.",
                "You probably wont see many people out doors, it's so cold only people with questionable sanity are outside."
            };
            movementPlan[] = {
                "Once you've caused enough damage, hold your ground until the extraction helicopter arrives.",
                "Lets hope the Brits have a pilot that's capable to get us out of this white hell."
            };
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
                    {"CUP_U_B_CDF_SNW_2", 1.0}

                };
                vests[] = {
                    {"CUP_V_CDF_6B3_4_SNW", 0.2},
                    {"CUP_V_CDF_6B3_3_SNW", 0.2},
                    {"CUP_V_CDF_6B3_5_SNW", 0.2},
                    {"CUP_V_CDF_6B3_2_SNW", 0.2},
                    {"CUP_V_CDF_6B3_1_SNW", 0.2}

                };
                headgear[] = {
                    {"CUP_H_CDF_H_PASGT_SNW", 1.0}

                };
                goggles[] = {
                    {"CUP_PMC_Facewrap_Winter", 1.0}

                };
                backpacks[] = {
                    {"B_FieldPack_oucamo", 1.0}

                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_AK109", 0.6},
                    {"CUP_arifle_AK109_GL", 0.1},
                    {"CUP_arifle_RPK74M", 0.2},
                    {"CUP_lmg_Pecheneg", 0.1}

                };
                launchers[] = {
                    {"CUP_launch_RPG7V", 0.1},
                    {"CUP_launch_RPG18", 0.1},
                    {"", 0.8}

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
