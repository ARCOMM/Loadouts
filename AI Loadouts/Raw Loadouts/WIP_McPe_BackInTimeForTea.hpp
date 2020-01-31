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
            situation[] = {"A short while ago our sister platoon ran into an ambush in a small settlement on the outskirts of Bastam. They have several confirmed KIA and a few wounded on site. Their convoy consisted of two MRAPs, a Warrior and a Challenger 2. The ambush was triggered when the Challeger ran over an IED. Following the IED blast several RPGs were fired at the convoy. This destroyed the warrior and one of the MRAPs. The challenger crew and the fireteam from the smaller of the MRAPs survived."};
            mission[] = {"Your primary objective is the repair and recovery of the disabled Challenger. I will not be the first commander who lost a Challenger under my command. Get that vehicle back!",
                            "",
                            "Your secondary objective is to recover any personell that survived the ambush.",
                            "",
                            "Optional objectives:",
                            "Recover the bodies of any friendly soldiers lost in the ambush. They lost their lives in service of queen and country. They deserve a proper burial."

                        };
            friendlyForces[] = {"A platoon of Britains finest stationed at the Loy Manara airbase.",
                                "The remnants of second platoon on the outskirts of Bastam.",
                                "I have has assigned a small team of engineers to help recover the damaged Challenger."
                                };
            enemyForces[] = {
                "The enemy is the irregular Takistani militia. They have access to cars, trucks and lightly armored vehicles. They are mostly located in and around Feruz Abad, Bastam and Rasman.",
                "There have been the odd sighting of militiamen in Zavarak and Garmsar. This was quite some time ago however so we're not sure what the situation is in these villages at the moment."
            };
            commandersIntent[] = {
                "Right now the attacks on the survivors outside of Bastam seems to have died down. The enemy is probably gathering for another push. Make the most of the time you have.",
                "Try to watch your fire around the mosque of Bastam. We don't need to upset the locals further."
                            };
            movementPlan[] = {
                "There are no safe roads north of the mountains. Watch out for hostiles. Especially in the villages that dot the landscape.",
                "The village of Timurkalay can be considered safe due to a recent suicide bombing which left most of the village and it's population in ruins."
            };
            fireSupportPlan[] = {};
            specialTasks[] = {"Should there be no way to recover the Challenger you have been provided with explosives to permanently disable it.", 
                                "If the tank crew is lost the engineers received a crash course in tank driving."
                            };
            logistics[] = {
                "The survivors have access to their one surviving MRAP. It took a hit to the fuel tank, luckily it didn't blow up but the damn thing drained in no time. The MRAP contains extra ammo but it's low on medical supplies since these were used up to tend to the recently wounded. There is also the challenger but it is badly damaged.",
                "The QRF have access to:",
                "- Eight Mastiff MRAPs armed with the L111A1 HMG - 11 Seats. Four of these are considered spare and only to be used in case additional transport is required.",
                "- One Jackal armed with a L7A1 and a L134A1 GMG - 11 Seats",
                "- One Wolfhound Engineering vehicle armed wtih a L111A1 HMG - 3 Seats"
                
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
            AN_PRC_148[] = {"co", "dc", "ftl", "vc", "mmgtl", "mata", "fac", "m"};
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"CUP_O_TKI_Khet_Jeans_04", 0.1},
                    {"CUP_O_TKI_Khet_Jeans_02", 0.1},
                    {"CUP_O_TKI_Khet_Jeans_01", 0.1},
                    {"CUP_O_TKI_Khet_Partug_04", 0.1},
                    {"CUP_O_TKI_Khet_Partug_02", 0.1},
                    {"CUP_O_TKI_Khet_Partug_01", 0.1},
                    {"CUP_O_TKI_Khet_Partug_07", 0.1},
                    {"CUP_O_TKI_Khet_Partug_08", 0.1},
                    {"CUP_O_TKI_Khet_Partug_05", 0.1},
                    {"CUP_O_TKI_Khet_Partug_06", 0.1},
                    {"CUP_O_TKI_Khet_Partug_03", 0.1},
                    {"U_C_Mechanic_01_F", 0.1},
                    {"CUP_I_B_PMC_Unit_2", 0.1},
                    {"CUP_U_O_SLA_Green", 0.1},
                    {"U_I_C_Soldier_Bandit_2_F", 0.1},

                };
                vests[] = {
                    {"CUP_V_B_GER_Carrier_Rig_2_Brown", 0.1},
                    {"CUP_V_I_RACS_Carrier_Rig_2", 0.1},
                    {"CUP_V_I_RACS_Carrier_Rig_wdl_2", 0.1},
                    {"CUP_V_OI_TKI_Jacket1_05", 0.1},
                    {"CUP_V_OI_TKI_Jacket4_04", 0.1},
                    {"CUP_V_OI_TKI_Jacket4_05", 0.1},
                    {"CUP_V_OI_TKI_Jacket4_02", 0.1},
                    {"CUP_V_OI_TKI_Jacket3_04", 0.1},
                    {"CUP_V_OI_TKI_Jacket3_03", 0.1},
                    {"CUP_V_OI_TKI_Jacket2_04", 0.1},
                    {"CUP_V_OI_TKI_Jacket2_03", 0.1},
                    {"CUP_V_O_Ins_Carrier_Rig", 0.1},
                    {"V_BandollierB_cbr", 0.1},
                    {"CUP_V_I_Guerilla_Jacket", 0.1},
                    {"V_Chestrig_khk", 0.1}
                    

                };
                headgear[] = {
                    {"CUP_H_TKI_Lungee_Open_01", 0.1},
                    {"CUP_H_TKI_Lungee_02", 0.1},
                    {"CUP_H_TKI_Pakol_1_01", 0.1},
                    {"CUP_H_TKI_Pakol_1_03", 0.1},
                    {"CUP_H_TKI_Pakol_2_02", 0.1},
                    {"CUP_H_TKI_SkullCap_01", 0.1},
                    {"CUP_H_TKI_SkullCap_05", 0.1},
                    {"CUP_H_TKI_Lungee_Open_04", 0.1},
                    {"CUP_H_TKI_Lungee_Open_06", 0.1},
                    {"CUP_H_TK_Helmet", 0.1},
                    {"H_Shemag_olive", 0.1},
                    {"H_ShemagOpen_tan", 0.1},
                    {"H_ShemagOpen_khk", 0.1},
                    {"CUP_H_SLA_Helmet", 0.1},
                    {"CUP_H_NAPA_Fedora", 0.1},
                    {"", 0.1}
                    
                };
                goggles[] = {};
                backpacks[] = {
                    {"CUP_B_RPGPack_Khaki", 0.1},
                    {"CUP_B_AlicePack_Khaki", 0.1},
                    {"", 0.8}
                };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"hlc_rifle_ak74", 0.1},
                    {"hlc_rifle_ak47", 0.1},
                    {"hlc_rifle_akm", 0.1},
                    {"hlc_rifle_akmgl", 0.1},
                    {"hlc_rifle_aks74", 0.1},
                    {"hlc_rifle_aks74u", 0.1},
                    {"hlc_rifle_rpk", 0.1},
                    {"hlc_rifle_rpk74n", 0.1},
                    {"hlc_rifle_L1A1SLR", 0.1},
                    {"CUP_srifle_SVD_des", 0.05},
                    {"CUP_lmg_PKM", 0.1},
                    {"RH_M16A2", 0.05}
                    
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
