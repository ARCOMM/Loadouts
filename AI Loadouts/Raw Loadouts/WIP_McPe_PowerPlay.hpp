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
                "The ARCOMM PMC has been hired to eliminate the sitting president of the island nation of Bozcaada. The politics and motivations do not concern us. The money is very good so the mission will be carried out.",
                "We are currently sailing close to the coast of Bozcaada. The cargo ship we are using as a transport will slow down enough for us to get into our boats and head to shore."
                };
            mission[] = {
                "Your primary objective is to assassinate President Robert Alexei. The president will be located at his compound on the nothern side of Merkez.",
                "The client has demanded photographic proof of the deed.",
                "",
                "Your secondary objecitives are as follows:",
                "Recover all dog tags of fallen friendlies",
                "Escape the island OR hide in the countryside.",
                                        
            };
            friendlyForces[] = {
                "A platoon sized element of ARCOMM PMCs."
            };
            enemyForces[] = {"You will encounter three types of hostiles on the island:",
                            "At the presidential compound you will find the presidential security forces. These men are equipped with close quarter weaponry and nice suits.",
                            "The biggest threat will be the Bozcaadan military. They have several small bases all over the island and a very large air base on the western part of the island. One of these smaller bases is located close to the presidential palace. The Bozcaadans do not have access to heavy armor but there are lightly armored vehicles and helicopters on the island.",
                            "Lastly there is also the Bozcaadan police force. There is a police station in Merkez. Some of their officers are patrolling the streets amongst the civilian population. The police also have access to a SWAT team."
            };
            commandersIntent[] = {
                "Speaking of civilians, the ROE is completely open. We are here to make a shock and awe attack. Civilian deaths is bad press but in this case the money is too good to care.",
                "Firearms are outlawed on the island so if a civilian spots you there is a chance they will call the police.",
                "If you need to neutralize a target quietly you have been provided with supressed sidearms."
                                            };
            movementPlan[] = {
                "We would advice trying to avoid contact before you assault the presidential compound. If you do get into a firefight first responders will probably be the police. If they realise how well equipped you are they might call in the army.",
                "If you want to try escaping the island you are free to do so however you please. The cargo ship captain has promised to remain in the region in case you need an extract. Due to the presence of an airbase on the island an airborne extract is not to be recommended.",
                "If you choose to hide in the countryside you can make use of a hideout we have established on the southern side of the island. Make sure to get rid of any compromising vehicles before you get to the hideout."
            };
            fireSupportPlan[] = {};
            specialTasks[] = {
                "If possible recover all dog tags of fallen friendly operators. It would be nice if they can't tie ARCOMM to the attack. Being branded as terrorists is somewhat going to limit our clientele."
            };
            logistics[] = {
                "There will be a small cache of explosives on the ship that you may use however you please.",
                "The RHIB boats provided for transportation seat seven people including the driver."
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"U_B_GEN_Soldier_F", 1.0}
                };
                vests[] = {
                    {"CUP_V_C_Police_Holster", 0.8},
                    {"V_TacVest_blk_POLICE", 0.2}
                };
                headgear[] = {
                    {"H_Beret_gen_F", 1.0}
                };
                goggles[] = {
                    {"G_Aviator", 1.0}
                };
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"hgun_PDW2000_F", 0.2},
                    {"hgun_Rook40_F", 0.8}
                };
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
                    {"CUP_U_B_CDF_MNT_1", 1.0}
                };
                vests[] = {
                    {"CUP_V_B_RRV_TL", 0.2},
                    {"CUP_V_B_RRV_Scout", 0.2},
                    {"CUP_V_B_RRV_Scout2", 0.2},
                    {"CUP_V_B_RRV_Scout3", 0.2},
                    {"CUP_V_B_RRV_MG", 0.2}
                };
                headgear[] = {
                    {"CUP_H_CDF_H_PASGT_MNT", 1.0}
                };
                goggles[] = {};
                backpacks[] = {
                    {"CUP_B_AlicePack_Khaki", 1.0}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_M16A4_Base", 0.7},
                    {"hlc_lmg_minimi", 0.2},
                    {"CUP_lmg_L7A2", 0.1}

                };
                launchers[] = {
                    {"CUP_launch_M72A6", 0.1},
                    {"", 0.9}
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
