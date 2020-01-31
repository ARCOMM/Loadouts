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
            situation[] = {
                "11th of October 1967",
                "As you all know, the Soviets didn't react kindly to our declaration of independence. Unfortunately the reaction from NATO hasn't been as strong as we had hoped.",
                "So as of last night we are at war. We knew this was comming and have prepared accordingly. All of the aircraft have been moved off-site and are safe for now.",
                "The latest news is that Marshal Grechko has tasked at least two divisions of the Red Army to our region. A sizeable portion of these troops will no doubt be assigned to capture this airfield.",
                "We've also been told that the VDV paratroopers are involved. Good thing we have the radar still working, it will be able to spot any aircraft heading in our direction.",
                "Anyway, high' command's plan is to hold out for a NATO reaction. Gods willing it will be in our favour. Until then, we hold."
            };
            mission[] = {
                "- Defend the airfield at any cost.",
                "If your defence fails, ensure the following:",
                "- Make sure destroy the radar installation at the communications building.",
                "- Destroy the fuel depot.",
                "- Destroy as much munitions as you are able.",
                "- Try to disable to the air control tower."
            };
            friendlyForces[] = {
                "1 Platoon of national guard.",
                "Attached to the platoon is a mortar unit and a mobile AT team."
            };
            enemyForces[] = {
                "The Red Army.",
                "We have a motorised division to our south-west and we've received word that the Soviets are dropping paratroopers behind our lines.",
                "We should be fairly safe from the north and north-west. The forest will hamper any vehicle movement and paratroopers won't be able to land there."
            };
            commandersIntent[] = {
                "Position yourselves wisely. The airfield is large and you can't hope to cover all sectors with your limited numbers.",
                "Make use of whatever you can find at the airbase. Make sure to take stock of the munitions depot."
            };
            movementPlan[] = {
                "To the south-east of the airfield is CAMP 131. Under no circumstances are you allowed near or inside the camp. What goes on there is way above our paygrade. The guards shoot first and ask questions later."
            };
            fireSupportPlan[] = {
                "Avoid firing mortar barrages into villages and the like. Keep damage to airfield structures to a minimum, unless you retreat from the airfield."
            };
            specialTasks[] = {
                "The comms building has a working radar installation. As long as it is functioning it will provide you with warnings of incoming air contacts."
            };
            logistics[] = {
                    "There's a lot of small arms and ammo available over at the munitions bunkers. You can also find explosives at the munitions depot.",
                    "All vehicles, munitions and heavy weapons at the airfield are at our disposal."
            };
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
                "Utilize the provided OPFOR units to assault the airfield from the west, southwest and south.",
                "The helicopters provided are to land paratroopers on the eastern side of the airfield. Note the pre-placed invisible helipads.",
                "BLUFOR is set to hostile to both INDFOR and OPFOR. The players are not to approach CAMP131. If they do, fire a few rounds in their direction. If there is time you can stage a opfor assault on the camp. The one blufor AI inside a building has explosive charges for extra effect.",
                "The intent is to hit the players hard with mechanized infantry and tanks. They have a lot of firepower to aid them. Try flanking along logical routes but avoid hitting them from the north and north east. Maybe hit them from the north west after some time has passed. No armored vics from the east, only paratroopers and infantry."
            };
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
            AN_PRC_343[] = {"co", "dc", "ftl", "m"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class OPFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"co", "dc", "ftl", "m"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
            AN_PRC_152[] = {};
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class INDFOR {
            languages[] = {"english","russian","greek"};
            AN_PRC_343[] = {"co", "dc", "ftl", "m"};
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "fac", "m"};
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"CUP_U_O_SLA_Urban", 1.0}
                };
                vests[] = {
                    {"CUP_V_O_SLA_6B3_5_URB", 1.0}
                };
                headgear[] = {
                    {"CUP_H_ChDKZ_Beret", 1.0}
                };
                goggles[] = {
                    {"G_Bandanna_blk", 1.0}
                };
                backpacks[] = {
                    {"CUP_B_AlicePack_OD", 1.0}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_AKMS", 1.0}
                };
                launchers[] = {};
                attachments[] = {};
            };
            class OPFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"CUP_U_O_RUS_Flora_1", 1.0}
                };
                vests[] = {
                    {"CUP_V_RUS_Smersh_1", 0.33},
                    {"CUP_V_O_Ins_Carrier_Rig_Light", 0.33},
                    {"CUP_V_O_Ins_Carrier_Rig_MG", 0.33}
                };
                headgear[] = {
                    {"CUP_H_TK_Helmet", 1.0}
                };
                goggles[] = {};
                backpacks[] = {
                    {"CUP_B_AlicePack_Khaki", 1.0}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_AKM_Early", 0.5},
                    {"CUP_arifle_AKMS_Early", 0.2},
                    {"CUP_arifle_RPK74", 0.2},
                    {"CUP_lmg_PKM", 0.1}
                };
                launchers[] = {
                    {"CUP_launch_RPG18", 0.1},
                    {"", 0.9}
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
            budget = 1500;
            objects[] = {
                {"Wire", 80},
                {"Land_BagFence_Long_F", 60},
                {"Land_BagFence_Short_F", 30},
                {"Land_BagFence_Round_F", 70},
                {"Land_BagFence_End_F", 20},
                {"Land_BagFence_Corner_F", 30},
                {"Hedgehog", 50},
                {"Fort_RazorWire", 30},
                {"Land_fortified_nest_small", 150},
            };
        };
        class CIVILIAN {
            budget = -1;
            objects[] = {};
        };
    };
};
