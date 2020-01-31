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
                "Our counter offensive through Finland is going well. We took the Russians by surprise and have ended up a few kilometers behind enemy lines.",
                "Command wants us to use our advantage to strike at enemy positions in our vicinity.",
                "We need to strike fast and hard. Once we make contact they will no doubt call for reinforcements. The plan is to strike an enemy motorpool and cause as much damage as possible before moving on to our main objective: The pair of anti-ship missile batteries located at an old WW2 fortress.",
                "Neutralizing those batteries would enable the US to move their carriers closer to shore and provide our assault with some much needed air support.",
                "Once the batteries are neutralized we are to fall back to friendly lines."
            };
            mission[] = {
                "- Attack the enemy motorpool, cause as much damage as possible.",
                "- Attack the enemy fortress and destroy the missile batteries stationed there.",
                "- Exfiltrate the AO to the south east.",
                "-Optional-",
                "- A US Chinook crashed in the area not too long ago, if you find any surviving crew members do try to rescue them."
            };
            friendlyForces[] = {
                "1 Platoon of German Panzergrenadiers. Attached to the platoon is a armored section."
            };
            enemyForces[] = {
                "The Russian forces in the area consists of infantry, light and heavy armor. Expect enemy reinforcements from mostly the west but also possibly the north.",
                "There is also a enemy heliport to the west, you might see enemy helicopters inside the AO."
            };
            commandersIntent[] = {
                "Use the attack on the motorpool as a distraction. Strike hard and fast. Quickly move on to your next objective to avoid the enemy reinforcements.",
                "Be on your guard when crossing the old world war two battle line. There are still old tank traps and bunkers strewn across the landscape."
            };
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "- 1x Leopard 2A6 - 3 crew.",
                "- 1x Wiesel with Mk20 Auto cannon - 2 crew.",
                "- 1x Wiesel RFCV forward recon vehicle - 2 crew.",
                "- 4x Dingo MRAPs with MG3 CROWS - 2 crew, 4 passengers."
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
            situation[] = {
                "The Russians are unaware of the players presence at the start of the mission. When they hit the Motorpool the Russians there will call for reinforcements. Give the players 15-20min from first contact then send enemy reinforcements to the Motorpool.",
                "Same goes for any time the players make contact further along in the mission. In case the armed Wiesel is used, send choppers at them. That auto cannon shouldn't have any issue taking out a few choppers."
            };
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
                    {"CUP_U_O_RUS_EMR_1", 1.0}
                };
                vests[] = {
                    {"CUP_V_RUS_6B45_1", 0.33},
                    {"CUP_V_RUS_6B45_2", 0.33},
                    {"CUP_V_RUS_6B45_3", 0.33}
                };
                headgear[] = {
                    {"CUP_H_RUS_6B46", 0.5},
                    {"CUP_H_RUS_6B47", 0.5}
                };
                goggles[] = {
                    {"CUP_RUS_Balaclava_grn", 0.3},
                    {"", 0.7}
                };
                backpacks[] = {
                    {"CUP_B_RUS_Pack_MG"}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_lmg_Pecheneg", 0.1},
                    {"CUP_arifle_RPK74M", 0.2},
                    {"CUP_arifle_AK107_railed", 0.1},
                    {"CUP_arifle_AK74M", 0.4},
                    {"CUP_arifle_AK74M_GL", 0.2}
                };
                launchers[] = {
                    {"CUP_launch_RPG18", 0.2},
                    {"CUP_launch_RPG7V", 0.1},
                    {"", 0.7}
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
