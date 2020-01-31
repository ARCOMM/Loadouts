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
                "The deal with the Bolivians went well. Shame about their choice of location though.",
                "So now were stuck with 400 kilos of Cocain on some back water islands in the east indies. The plan is to fly the product out of here, hopefully to Guam where we can then transport it towards the US.",
                "That's not our problem though. There's only two airfields on the islands and one of them is a military airfield and the other is one the other fucking island. There's a sizable military and police presence on both islands due to region instability and local guerillas.",
                "Do we risk it and attack the closer military airfield or take the longer route and go for the far airfield?"
            };
            mission[] = {
                "- Get the product off the islands, by air."
            };
            friendlyForces[] = {
                "Two dozen of the bosses most reliable. The Bolivians gave us a freaking rocket launcher as a parting gift. We have a couple of guys who were in the army in another life, they can handle that monster.",
                "We also have a pair of pilots with us. Shame the bastards don't know the first thing about flying helicopters."                
            };
            enemyForces[] = {
                "Local police - Heavily armed police with carbines and SMGs as standard issue armament.",
                "The military forces on the island utilize NATO equipment. They field helicopters, HUMMVWs and some sort of APCs.",
                "If we get into a sustained firefight with the police we can expect them to call on the military for help. It has become standard procedure with the guerilla activity.",
                "Just north east of Monyet airfield the military have their local HQ, we belive this is where most of their forces are located. The military also have a smaller base at the Gurun airfield.",
                "The Police have small checkpoints across the islands, with their main HQ being in Nirwana. There's also a police station in Kambani."
            };
            commandersIntent[] = {
                "So we only really have two options.",
                "Either we go for the closer (military) Monyet Airfield or the Gurun airfield on the other island.",
                "Both the army and police are on high alert due to the guerilla activity in the region. Martial law has been declared. They are likely to shoot any armed civilians on sight."
            };
            movementPlan[] = {
                "Should we decide to head for the Gurun airfield we can find boats at Tabako or Nirwana. And we've prepared cars at the marked location south of Bibung on the other island."
            };
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
                "There are 10 crates of product that we need to transport.",
                "We've got a few vehicles available to us right now:",
                "- 2x Offroads - 6 seats",
                "- 1x Sedan - 4 seats",
                "- 2x vans - 11 & 12 seats."
                
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"CUP_U_I_RACS_WDL_2", 1.0}
                };
                vests[] = {
                    {"V_PlateCarrier2_tna_F", 0.5},
                    {"V_PlateCarrier1_tna_F", 0.5}
                };
                headgear[] = {
                    {"H_HelmetB_tna_F", 0.25},
                    {"H_HelmetB_Enh_tna_F", 0.25},
                    {"H_Booniehat_tna_F", 0.25},
                    {"H_MilCap_tna_F", 0.25},
                };
                goggles[] = {};
                backpacks[] = {
                    {"B_AssaultPack_tna_F", 1.0}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_M16A4_Grip", 0.4},
                    {"CUP_arifle_M16A4_GL", 0.1},
                    {"hlc_lmg_M249E2", 0.1},
                    {"hlc_rifle_M4a1carryhandle", 0.4}                    
                };
                launchers[] = {
                    {"CUP_launch_M136", 0.1},
                    {"", 0.9}
                };
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
                    {"U_B_GEN_Commander_F", 0.7},
                    {"U_B_GEN_Soldier_F", 0.3}

                };
                vests[] = {
                    {"V_TacVest_blk_POLICE", 1.0}
                };
                headgear[] = {
                    {"H_Cap_police", 0.33},
                    {"H_PASGT_basic_blue_F", 0.33},
                    {"H_MilCap_gen_F", 0.33}
                };
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"hlc_rifle_Colt727", 0.5},
                    {"SMG_03C_black", 0.2},
                    {"hlc_smg_mp5a4", 0.3}
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
