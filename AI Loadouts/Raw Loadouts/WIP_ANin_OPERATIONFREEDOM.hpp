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
            situation[] = {"Gentlemen, the worst has come to pass. The President of the united states has been taken by all the terrorists in the world, Russia, China, North Korea, several eastern religions, and Steve Buscemi.", 
            "So command has just given us a bunch of Little Birds but fortunately Jim rigged up some seats that we can hook with the birds. Hope none of you are afraid of heights. The American people demand your service and success in this mission."};
            mission[] = {"- Go save the motherfucking president of the US of fucking A.",
            "- The President is being escorted to one of the marked safe houses by another team, find him there",
            "- Hostile Air will attack from the russian-held airfield and harrass us throughout the operation",
            "- Under no circumstances is the President to be extracted if ground forces have not established a perimeter around VIPER and the President. The LZ MUST be secured by all on-site forces. Leave nothing to chance.",
            "- Enemy forces will move to attack us from hard points and the airfield",
            "- Assault enemy forces with extreme brutality and force, destroy hostile hard points and keep OPFOR attention on us"
            };
            friendlyForces[] = {"Bald Eagles"};
            enemyForces[] = {"Communists and Liberals"};
            commandersIntent[] = {"Save the president and destroy all non-freedom-loving terrorists and communists you encounter.",
            "Immediately attack the enemy hardpoints to pull heat from VIPER and the President."};
            movementPlan[] = {"Move with patriotism and freedom."};
            fireSupportPlan[] = {"Surround and destroy the enemy with American cunning and firepower."};
            specialTasks[] = {"Save at least one small animal."};
            logistics[] = {"Freedom",
            "x2 MH-6J Little Birds",
            "x2 AH-6H Little Birds"};
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
            situation[] = {"We've managed to storm the compound where the president is being held and have him secured. Unfortunately some jackass forgot the radios with the frequency our rescue team is on but there are safe houses nearby they're expecting us in."};
            mission[] = {"Move to each safehouse and hold it as long as you are able. We strongly suggest changing locations between enemy attacks once you are running low on ammunition or are overwhelmed. Stay on the move and be careful not to get entrenched as enemy APCs and armor will attempt to dislodge you.",
            "Keep in mind you are not required to hold the safe houses, they are the expected rendezvous zones for our extraction team. Prioritize the president's life over your own at all costs.",
            "You MUST link up with ground teams and have them secure the president's extraction. There is no margin for error.",
            "DO NOT engage in long-protracted firefights. Be mobile, be small, be unnoticed. Only in emergency circumstances or instances where you possess absolute tactical superiority should you dig-in and fight for a position."};
            friendlyForces[] = {"USAF"};
            enemyForces[] = {"Everyone else"};
            commandersIntent[] = {"The President must survive, everyone and thing is expendable besides."};
            movementPlan[] = {"At your own discretion."};
            fireSupportPlan[] = {"The extraction teams will have CAS on site, but we do not have radio comm with them."};
            specialTasks[] = {"Each of the safe houses has resupply and rearm, use them at your disgretion."};
            logistics[] = {"Freedom"};
        };
        class CIVILIAN {
            situation[] = {"You are the President of the United States of America.",
            "Communist scum have abducted you and Freedom loving patriots have liberated you from the oppression of the freedom-hating OPFOR. Survive to lead your country to greatness, or die and prove your inability to beat the odds.",
            "You are armed with a .44 magnum, the larget handgun in existence. Lesser men have fired this weapon and died. You are no lesser man."
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
                    {"CUP_U_O_RUS_EMR_gloves_pads", .5},
                    {"CUP_U_O_RUS_EMR_1", .5},
                };
                vests[] = {
                    {"CUP_V_RUS_6B3_Flora_2", .5},
                    {"CUP_V_RUS_6B3_Flora_1", .5},
                    {"CUP_V_O_SLA_6B3_1_WDL", .5},
                };
                headgear[] = {
                    {"CUP_H_RUS_6B27_cover_headset_goggles", .33},
                    {"CUP_H_RUS_6B27_headset", .33},
                    {"CUP_H_RUS_6B27_cover", .34},
                };
                goggles[] = {};
                backpacks[] = {
                    {"CUP_B_AlicePack_Khaki", 1},
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"hlc_rifle_rpk", .33},
                    {"hlc_rifle_ak74_dirty", .33},
                    {"hlc_rifle_aks74u", .34},
                };
                launchers[] = {
                    {"CUP_launch_RPG7V", .1},
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
