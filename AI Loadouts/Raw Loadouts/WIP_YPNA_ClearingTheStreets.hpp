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
            situation[] = {"Russia has been a clear presence on Altis for the past decade. People have adjusted to their rule after their illegal takeover ten years ago and have formed no significant resistance since then. Some towns welcome the presence of Russian troops, although most towns with a Russian presence have been abandoned by civilians.", "We are a local PMC with our HQ primarily on Stratis. Work has mostly dried up since the civil war ten years prior and as such funding has been limited. Everybody has scraped together what they can for this mission, which will provide a lot of funding if we don't screw it up. So don't."};
            mission[] = {"We have been hired to deal a significant blow to the Russian operation in the area surrounding Charkia.", "Our client has hired us for the following missions: <br /> - Destroy a <marker name='fuel'>Russian fuel depot</marker> in Rodopoli <br/> - Seize the <marker name='town'>town of Charkia</marker> <br/> - Destroy a <marker name='hq'>Russian Forward HQ</marker> <br/> - Immobilise all helicopters found at the <marker name='helipad'>helipad</marker>"};
            friendlyForces[] = {"Our forces stationed at Kalithea."};
            enemyForces[] = {"Russia has a significant presence in the surrounding area. Expect everything from light infantry to heavy tanks (ie T-90s), with concentrated forces in the towns of Rodopoli and Charkia. Lighter resistance is expected the further south we go. The enemy is aware of our presence in the area."};
            commandersIntent[] = {"Clearing the town of Rodopoli is optional, so we should keep the time spent there to a minimum. Reinforcements are almost guaranteed the longer we stay in one area, so moving swiftly is key."};
            movementPlan[] = {"Move swiftly down south in a line from Rodopoli to the helipad. Clear the objectives along the way."};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {"We only managed to scrape together some old trucks from the local population in Kalithea. We have 4 trucks, which fit 14 people each. Additionally, we managed to gather a UAZ with a mounted DShKM."};
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
					{"MNP_CombatUniform_RO2_Rg", 0.25},
					{"MNP_CombatUniform_RO_Sh", 0.25},
					{"MNP_CombatUniform_RU_Med",0.25},
					{"MNP_CombatUniform_RO4_Rg",0.25}
				};
                vests[] = {
					{"MNP_Vest_RU_T2",0.25},
					{"MNP_Vest_RUMED",0.25},
					{"MNP_Vest_RU_T",0.25},
					{"MNP_Vest_RUMED_B",0.25}
				};
                headgear[] = {
					{"MNP_Helmet_PAGST_RO",0.5},
					{"MNP_Helmet_RU_LT",0.5}
				};
                goggles[] = {
					{"G_Bandanna_oli",0.15},
					{"CUP_RUS_Balaclava_grn",0.2},
					{"",0.65}
				};
                backpacks[] = {
					{"MNP_B_RU2_FP",0.3},
					{"MNP_B_RU2_CA",0.1},
					{"",0.6}
				};
                faces[] = {
					{"WhiteHead_04",0.3},
					{"WhiteHead_07",0.3},
					{"WhiteHead_18",0.3},
					{"AfricanHead_02",0.3}
				};
                voices[] = {
					{"cup_d_male01_ru",0.5},
					{"cup_d_male04_ru",0.5}
				};
                rifles[] = {
					{"CUP_arifle_AK74M", 0.5},
					{"CUP_arifle_RPK74M",0.2},
					{"CUP_arifle_AK74",0.2},
					{"CUP_arifle_AK47",0.1}
				};
                launchers[] = {
					{"launch_RPG7_F",0.1},
					{"CUP_launch_RPG18",0.2},
					{"",0.7}
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
