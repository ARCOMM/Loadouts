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
            situation[] = {"While being in a seemingly abandoned and forgotten warzone, a UN convoy has been ambushed by an unknown force during humanitarian operations and is in need of help. UN soldiers are almost unarmed and cannot survive for long enough without support. Our job is to locate the UN forces and escort them to either LZ Southpaw or LZ Northpaw before they get killed. "};
            mission[] = {"- Locate the UN soldiers",
            "- Protect and guide them to LZ Southpaw or LZ Northpaw for helicopter extract"};
            friendlyForces[] = {"- The only friendly forces in the area are the UN stuck in Girna"};
            enemyForces[] = {"- Unknown, expected transport helicopters, armed vehicles and infantry"};
            commandersIntent[] = {"- The UN do not have radio comms inbetween, make sure to assign a rally troop to keep everyone secure and safe",
            "- LZ Southpaw provides a shorter, more dangerous/open route",
            "- LZ Northpaw provides a more covered, longer route, with a protected LZ",
            "- In case of emergency, make sure to tell the UN about the designated LZ's"};
            movementPlan[] = {"- Both parties need to call ready before mission start",
            "- UN cannnot pick up enemy weaponry",
            "- UN do not have a medic",
            "- Red markings mean high concentration"};
            fireSupportPlan[] = {};
            specialTasks[] = {"- Bonus points for getting all the UN FTL's out in one piece"};
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
            situation[] = {"While collecting abandoned food in a seemingly abandoned warzone, our convoy has been struck by several unidentified explosions. We knew that this was a risky operation, but did not come prepared due to being undersupplied, there are a few NATO elements around the island which will attempt a rescue mission. We have to fort up, and hold firm."};
            mission[] = {"- Wait for reinforcements to guide you out of trouble",
            "- Do NOT pick up enemy weapons",
            "- Use Fortify to bunker in",
            "- (Optional) Refuel the bus to gain an escape vehicle (still has some fuel too)",
            "- (Optional) Secure a lost PDW cache to arm yourself with self defense weapons and verious other gear",
            "- (Optional) Sweep Girna for abandoned weapons, vehicles too"};
            friendlyForces[] = {};
            enemyForces[] = {"- Unknown"};
            commandersIntent[] = {"- If our rescue team is wiped out an emergency search helicopter will be deployed, we need blue smoke to signal it.",
            "- Leaving the village is not advised(though not prohibited), we need all of us in one piece(and we don't have a medic)",
            "- Focus on window fortification, we do not have that many resources"};
            movementPlan[] = {"- Do not leave the blue circle until Safestart end",
            "- Do not pick up enemy weaponry(Rule)"};
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
            enableGroupMarkers = false;
        };
        class OPFOR {
            enableGroupMarkers = true;
        };
        class INDFOR {
            enableGroupMarkers = false;
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
            AN_PRC_343[] = {"co", "dc", "ftl"};
            AN_PRC_148[] = {};
            AN_PRC_152[] = {};
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
                    {"CUP_I_B_PMC_Unit_15", 0.5},
                    {"CUP_I_B_PMC_Unit_7", 0.5}
                };
                vests[] = {
                    {"CUP_V_CDF_6B3_5_Green", 0.5},
                    {"CUP_V_CDF_6B3_2_Green", 0.5}
                };
                headgear[] = {
                    {"CUP_H_USArmy_Helmet_ECH1_Black", 0.5},
                    {"CUP_H_USArmy_Helmet_ECH1_Green", 0.5}
                };
                goggles[] = {};
                backpacks[] = {
                    {"CUP_B_RUS_Backpack", 0.5},
                    {"CUP_B_RPGPack_Khaki", 0.5}
                    };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"hlc_rifle_akm", 0.5},
                    {"hlc_lmg_mk46", 0.5}
                    };
                launchers[] = {
                    {"CUP_launch_RPG7V", 0.15}
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
