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
            situation[] = {
                "Good morning comrades! Another beautiful day here in Afghanistan. We're currently staging in the village of Kakaru just north of the mountains that separates our territory from the Mujahideen. High command has decided to fall back on proven tactics used back in the great patriotic war! We shall force the Mujahideen out of their villages by burning their food and destroying their homes."
            };
            mission[] = {"Your primary tasks are to destroy the market and any food caches you find in the village Huzrutimam and then capture the Loy Manara airfield.", 
            "Secondary objectives are:",
            "- Search and destroy Mujahideen strong points in the valley.",
            "- Locate the Mi-8 helicopter that we lost in the valley and try to recover it's crew.",
            "- We've had reports of foreigners at the airfield. If you could find proof of NATO involvement with the Mujahideen it would help strengthen the worlds resolve against the capitalist pigs!"
            };
            friendlyForces[] = {
                "A platoon of Mechanized Guards Infantry"
            };
            enemyForces[] = {
                "Mujahideen forces are mostly made up of irregular militia using mostly equipment they have captured from us. They also have access to some dated NATO equipment. There has also been quite a large number of desertions from the afghan army. These former army members might field vehicles and somewhat improved gear."
            };
            commandersIntent[] = {
                "Civilians in the area are considered hostile but do not waste ammo on them unless you feel threatened. The village of Sultansafe has been bombarded from both the ground and the air. It is very unlikely that you'll find anything there except ruins."
            };
            movementPlan[] = {
                "Be wary of ambushes as you move. The Mujahideen have excellent knowledge of the area and will use that to their advantage."
            };
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "- 1x BMP-1p - 3 crew, 12 passengers, 4 external.",
                "- 4x BTR-60B - 2 Crew, 15 passengers, 6 external.",
                "- 1x BRDM Command vehicle, 1 driver 3 passengers."
            };
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
                    {"CUP_O_TKI_Khet_Partug_04", 0.2},
                    {"CUP_O_TKI_Khet_Partug_01", 0.2},
                    {"CUP_O_TKI_Khet_Partug_07", 0.2},
                    {"CUP_O_TKI_Khet_Jeans_01", 0.2},
                    {"CUP_O_TKI_Khet_Jeans_04", 0.2}
                
                };
                vests[] = {
                    {"CUP_V_OI_TKI_Jacket1_04", 0.2},
                    {"CUP_V_OI_TKI_Jacket1_01", 0.2},
                    {"CUP_V_OI_TKI_Jacket4_02", 0.2},
                    {"CUP_V_O_TK_CrewBelt", 0.2},
                    {"CUP_V_OI_TKI_Jacket4_04", 0.2}
                };
                headgear[] = {
                    {"CUP_H_TKI_Lungee_01", 0.2},
                    {"CUP_H_TKI_Pakol_1_01", 0.2},
                    {"CUP_H_TKI_Lungee_04", 0.2},
                    {"CUP_H_TKI_Lungee_Open_03", 0.2},
                    {"", 0.2}
                };
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_AK74", 0.3},
                    {"CUP_arifle_AK47", 0.3},
                    {"CUP_arifle_AKM", 0.3},
                    {"CUP_arifle_AKS", 0.3},
                    {"CUP_srifle_LeeEnfield", 0.1},
                    {"CUP_arifle_M16A2", 0.1},
                    {"CUP_lmg_PKM", 0.1},
                    {"CUP_arifle_RPK74_45", 0.1}                    
                };
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
