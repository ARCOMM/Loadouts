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
            situation[] = {"Gentlemen, I'm not going to lie to you, the situation is FUBAR. North Korea has broken the cease-fire and are advancing on NATO HQ here in Kavala without any formal declaration of war. Fighting has been going on for almost a day now and our garrison here managed to stop the initial assault. Bad news is we lost Aggelochori and it’s currently being used as a staging ground and frontline command post. Air forces are blowing the hell out of each other all across Altis and we’re hanging on by a fingernail, with one hell of a nail clipper inbound to remove us. So, welcome to the fingernail."};
            mission[] = {"Defend Kavala while friendly forces evac casualties and civilians. Most of the civilians have been secured but there are still pockets of US forces trapped out in the city. If you can, rescue them and pull them back to our areas of control. Defensive lines are marked on the map with blue squares. Each has static emplacements effective against armor and infantry.",
            "Check fire on any vehicles or movement to the south of Kavala. Friendly forces will be evacuating to Kavala.",            
            "We have confirmed the location of the Korean People’s Army commander in charge of local forces. He is stationed in the office building on the south side of Aggelochori near a Korean FOB. Killing him would almost certainly destroy any chance of coordinated attacks on both Kavala and Aggelochori. From our position here in the castle we've seen them carting in all sorts of ordnance and equipment. We’ve also had some near-misses from a few MANPADS in the area.",
            "- Defend Kavala using any means necessary so all civilian and casualties must be evaced from the AO by means of the air and harbor", 
            "- Extraction teams will leave every 15 minutes from mission start",
            "- Friendly convoys will be inbound from the south to also extract",
            "- Point Alamo OR Kavala harbor must not fall", 
            "- Should either fall extraction time will be lengthened by 15 minutes", 
            "- Extract once the order is given from high command."};
            friendlyForces[] = {"United States Military and South Korean Forces"};
            enemyForces[] = {"Korean People’s Army"};
            commandersIntent[] = {"Rescue all living casualties and civilians. Should our CO be lost the plan will remain defense and eventual evacuation. Air assets are, under no circumstances, to enage targets inside city limits, both Kavala and Aggelochori, without a direct laser designation from an on-site FAC. Only until the evacuation has succeeded, and the all-clear is given from friendly forces, are air assets able to dictate their own means of engagement inside the city."};
            movementPlan[] = {"Allied air assets have been ordered to remain outside of the AO to prevent any crossover on net or confusion about engaged targets. We have free reign on the town of Kavala and Aggelochori to the north. Anything outside of that zone is reported to be covered by enemy Air support and AAA. In other words: Off fucking limits."};
            fireSupportPlan[] = {};
            specialTasks[] = {"Retake the town of Aggelochori and kill the enemy commander to cripple the enemy offensive in the north."};
            logistics[] = {"x1 Black Wasp II Fighter Jet", 
            "x1 AH-1Z Viper Attack Helicopter", 
            "There are two ammo boxes with supplies next to the briefing table."};
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
					{"CFP_U_WorkUniform_DRK", 1}
				};
				vests[] = {
					{"CFP_Field_Satchel", 1}
				};
				headgear[] = {
					{"SP_SSh68CoverHelmet_DRK", 1}
				};
				goggles[] = {};
				backpacks[] = {
					{"B_RadioBag_01_black_F", .1},
					{"CUP_B_SLA_Medicbag", .9}
				};
				faces[] = {};
				voices[] = {};
				rifles[] = {
					{"CUP_arifle_AKS74", .8},
					{"CUP_lmg_PKM", .2}
				};
				launchers[] = {
					{"launch_RPG7_F", .1}
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
