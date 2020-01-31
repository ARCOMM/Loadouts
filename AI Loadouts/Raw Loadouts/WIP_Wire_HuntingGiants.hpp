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
            situation[] = {"Americans are setting up base in the area to control the entire region, a preemptive strike to have market and transport control. The people seem neutral in the matter so its up to those in the know to ensure this does not go smoothly."};
			mission[] = { "Mission is to use the Americans own equipment to disrupt their base and communications abilities as well as make it look like the Americans are simply incompetent. **Make sure to remove all items you intend to use from the bases they are stolen from or they will be compromised**", "", "First objective is to steal the required vehicles from the first base on our route. Portray yourself as a Spec Ops unit and you should not be bothered.", "", "Second objective is to gather explosives from the second base on our route. Be on the lookout for more experienced soldiers here commanded by individuals wearing BLUE NATO Beret, they will likely start shooting and detail our differences on the radio.", "", "Third Objective is to take out Mark Bishop at the farm before the mansion, to lower coordination abilities in the area. He should be wearing a Black beret with UN markings", "", "Fourth and final objective is to destroy their communications options at the Mansion, as well as leveling the mansion with its occupants to ensure any intel and secrets are buried in fire and dust. Exfil from there" };
            friendlyForces[] = {"people against being 'liberated' preemptively"};
            enemyForces[] = {"US Mixed Unit, using HMMWV's with mounted weaponry as well as Badger IFV's. Potential for Armor."};
            commandersIntent[] = {"Follow the road and act professional for as long as possible to avoid early engagement. When engaged its at field leads disgression how to murder the enemy. Dump all vehicles no longer deemed necessary as you procure better equipment."};
            movementPlan[] = {"When at objective 1 and 2, if able to wait for the local forces to open the gates for you to subject yourself to minimal amount of suspicion."};
            fireSupportPlan[] = {};
            specialTasks[] = {"Behave professional at first base, no shooting, no throwing smokes, minimal communication with enemy. Do not let the enemy know we are the enemy."};
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
            AN_PRC_117F[] = {"fac"};
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
					{"U_B_CombatUniform_mcam", 0.50 },
					{"U_B_CombatUniform_mcam_vest", 0.50} };
				vests[] = {
					{"V_PlateCarrier1_rgr", 0.50 },
					{"V_PlateCarrierSpec_rgr", 0.25},
					{"V_PlateCarrierGL_rgr", 0.25} };
				headgear[] = {
					{"H_HelmetB", 0.35 },
					{"H_Cap_tan", 0.30},
					{"H_HelmetB_black", 0.35} };
				goggles[] = {};
				backpacks[] = {
					{"B_AssaultPack_rgr", 0.40 },
					{"", 0.60} };
				faces[] = {};
				voices[] = {};
				rifles[] = {
					{"arifle_SPAR_01_blk_F", 0.65 },
					{"arifle_SPAR_03_blk_F", 0.25},
					{"hlc_rifle_M4", 0.10} };
				launchers[] = {
					{"launch_NLAW_F", 0.20 },
					{"", 0.80} };
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
					{"U_B_CombatUniform_mcam", 0.50 },
					{"U_B_CombatUniform_mcam_tshirt", 0.50}
				};
				vests[] = {
					{"V_PlateCarrier1_rgr", 0.75 },
					{"V_Chestrig_rgr", 0.25} };
				headgear[] = {
					{"H_HelmetB", 0.35 },
					{"H_Cap_tan", 0.30},
					{"H_HelmetB_black", 0.35} };
				goggles[] = {};
				backpacks[] = {
					{"B_AssaultPack_rgr", 0.40 },
					{"", 0.60} };
				faces[] = {};
				voices[] = {};
				rifles[] = {
					{"arifle_SPAR_01_blk_F", 0.60 },
					{"arifle_SPAR_03_blk_F", 0.15},
					{"hlc_rifle_M4", 0.25} };
				launchers[] = {
					{"launch_NLAW_F", 0.20 },
					{"", 0.80} };
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
