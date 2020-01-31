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
            situation[] = {"Iraqi forces have dug in around the Anizay AO and we need to dig them out. Infantry will be infiltrating the Anizay AO by means of helicopter. This will be taking place in the early morning and flying at low altitude, roughly 150M or less, to avoid their MANPAD and radar defenses. Helicopters must avoid the immediate area of hostile FOBs. AA and AAA have been confirmed to be active in all of them. Our assessed threat range of the AA in relation to helicopters flying below the previous altitude restriction is marked in red circles around each enemy stronghold. Assume that any helicopter entering those zones will be shot down. Additionally, the FOBs will send reinforcements to any location under attack. Once allied forces enter contact Iraqi forces will likely scramble and respond. So far they have ignored singlular radar signatures. Enemy patrols will increase dramatically once contact begins, Allied infantry will be expected to use what little time and stealth they have to close range with their targets and conduct their assault as urgently as possible to prevent being bogged down before even reaching their objectives.",
            "Pilots, as stated before: Be aware of the red circles on the map. These are known AA and AAA locations, helicopters must not fly above 150m roughly, even outside the threat zones, to avoid enemy radar, and AA. Jets are permitted to fly at their own discretion but use extreme caution. F-15s, keep in mind you have no armaments besides GBUs, so feel free to repair and rearm, but you cannot refit. You are expected to, once given the order by the on-station FAC, to make lightning strikes on all enemy FOBs and supply bases. Render them unable to send reinforcements to any part of the Anizay AO as quickly and effectively as you are able. Once this is complete, you are to destroy any hostile convoys entering from beyond the AO. However, the on-station FAC overrides any orders or objectives you have should friendly ground forces require CAS.",
            "Finally, Wardog squadron, hostile air has been reported near Anizay AO. Iraqi F-14s and L-39s, as well as attack helicopters. We received this information from our AWACS, Sky-Eye. Sky-eye will notify you should any air contacts encroach upon, or enter your AO. You may request any information on anything outside your radar range from Sky-Eye at any time.",
            "In summary, Wardog Squadron will provide CAS to ground forces and Strike the Iraqi FOBs so no reinforcements make it to the Mosque. Wardog will then move on to suppress incoming reinforcements outside the AO. Meanwhile, ground teams will land outside Anizay, secure the town, and the Mosque itself. Ground will then send a small force to kill and ID the Iraqi second-in-command. You must hold the Mosque at all times, this is imperative. Mission is completed when Iraqi forces are retreating and air superiority is established.",
            "It is up to the discretion of the on-site commander on whether the Mosque is attacked first or last, but keep in mind reinforcements will prioritize the Mosque. You must ID the commander, and second-in-command.",};
            mission[] = {"- Air Forces are tasked with destroying hostile FOBs, supply stations, and providing close air support for ground forces",
            "- Should air forces not destroy FOBs quickly enough, hostile forces will deploy from each FOB to reinforce the Anizay AO",
            "- Ground forces are to deploy around Anizay and clear it of hostile command structure",
            "- Several officers and the area commander have been spotted, these targets must be killed",
            "- Lastly, secure and hold the Mosque South West of Anizay as a sign of our supremacy."};
            friendlyForces[] = {"USAF"};
            enemyForces[] = {"Iraqi National Army"};
            commandersIntent[] = {"All military targets are to be levelled. Do not target the Mosque with any explosive weaponry, but all other civilian buildings are considered expendable should they contain hostile forces."};
            movementPlan[] = {};
            fireSupportPlan[] = {"CAS"};
            specialTasks[] = {};
            logistics[] = {"x2 UH-60 Blackhawk, x2 F-15E Strike Eagle"};
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
                    {"CFP_BDU_M81Iraq2", .33},
                    {"CFP_BDU_Green2", .34},
                    {"CFP_BDU_RGDPM", .33},
                };
                vests[] = {
                    {"CFP_AK_VEST_LOlive", .34},
                    {"CFP_AK_VEST_Olive", .33},
                    {"CUP_V_CDF_6B3_1_Green", .33},
                };
                headgear[] = {
                    {"SP_M1Helmet_Green", .25},
                    {"SP_M1Helmet_Tan", .25},
                    {"SP_M1Helmet_GrayDim", .25},
                    {"SP_M1Helmet_Black", .25},
                };
                goggles[] = {};
                backpacks[] = {
                    {"CUP_B_CivPack_WDL", .25},
                    {"usm_pack_alice", .25},
                    {"usm_pack_alice_prc77", .25},
                    {"B_Kitbag_cbr", .25},
                    };
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_lmg_PKM", .1},
                    {"CUP_arifle_AK47", .4},
                    {"CUP_arifle_FNFAL5061_wooden", .2},
                    {"CUP_srifle_SVD", .2},
                    {"CUP_arifle_RPK74_top_rail", .1},
                    };
                launchers[] = {
                    {"CUP_launch_Igla", .05},
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
