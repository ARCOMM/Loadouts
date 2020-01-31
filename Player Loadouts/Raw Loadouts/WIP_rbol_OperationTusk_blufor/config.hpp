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
            situation[] = {"Gentlemen, we have received word from a humint source that Abu Bin Bakur-Ali, the regional commander of the Baitur Rehamn Martyrs' Brigade, has emerged and is holed up in the region. He is out with his commanders, so now is the time to scoop him up and squeeze as much intel out of him.",
							"We know that he will be in a complex south of Zargabad for the next 24 hours, so that is why we were inserted into this low-profile post last night. Our job is to go and get Bakur-Ali and bring him to the Zargabad airport, where a CIA Special Activities unit will take custody of him and extract him on an incoming helicopter flight.",
							"As you might have noted last night, we have the pleasure of hosting a special breach team from our friends in Delta. It is their job to breach the mansion and capture our VIP target.",
							"Our job is play security. We are there to get Delta to the site, clear out opposition and make it nice and quiet for the breach team to their work as they have nervous dispositions.",
							"We then extract the VIP and the breach team to the Zargabad airport where we will be met by a CIA team, code-named Echo...yeah, THOSE guys. They will do a positive ID, and begin to interrorgate him. They say they need about 20 minutes to prep the VIP for final extraction, so we will post up security around the building.",
							"Note that the airport is held by the Royal Sahrani Army, but we know what that is worth. If we experience any sort of counterattack, please don't kill our hosts, but we need to protect Bakur-Ali at all costs. We will extract with the VIP, the breach team and the CIA boys.",
							"The ROE is only return fire until we get to the compound, then it is free fire and keep the initiative. OK, boys, we have a 15 minute brief and then mount up."};
			
            mission[] = {"- Capture Abu Bin Bakur-Ali",
						"- Extract him to the Zargabad airport to the building with the CIA team",
						"- Provide security during the breach and then at the airport."};
						
            friendlyForces[] = {"- Special Operator Breach Team - seven man special forces unit (under command of 75th ALS)",
								"- 75th Rangers, 1st Ranger Battalion, Alpha Company, 1st Platoon",
								"- CIA Special Activities, Group Echo (see special tasks)",
								"- 160th Special Operations Aviation Pilots (see special tasks)"};
            enemyForces[] = {"Baitur Rehamn Martyrs Brigade, our intel identifies +/- 100 men, multiple technicals, light and possibly heavy armor."};
            commandersIntent[] = {"Maintain initiative by moving to the compound with the VIP as quickly as possible. 75th clears the compound and sets up security. Delta breachs and everyone extracts back to the airport and set up security."};
            movementPlan[] = {"Movement to and from the VIP compound is at the discretion of ASL."};
            fireSupportPlan[] = {};
            specialTasks[] = {"CIA Special Activities Echo squad and 160th pilots will selected from players 'retired' from the game."};
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
                enabled = false;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {{"CFP_GUER_PolyDesTee", 0.25},
					{"CFP_GUER_ChocChippants", 0.25},
					{"CFP_GUER_3CDespants", 0.5},
					};
                vests[] = {"CUP_V_PMC_CIRAS_Coyote_Empty", 1};
                headgear[] = {{"H_ShemagOpen_tan", 0.2},
					{"CUP_H_TKI_Lungee_05", 0.3},
					{"CUP_H_TKI_Pakol_1_05", 0.2},
					{"CUP_H_TKI_SkullCap_03", 0.3}
					};
                goggles[] = {"CUP_G_Oakleys_Embr", .25};
                backpacks[] = {};
                faces[] = {{"PersianHead_A3_01", 0.4},
					{"PersianHead_A3_02",.4},
					{"TanoanHead_A3_06", 0.2},
					};
                voices[] = {};
                rifles[] = {{"CUP_arifle_AK74M_desert", 0.75},
					{"CUP_arifle_AK74M_GL_top_rail_desert", 0.1},
					{"CUP_lmg_UK59", 0.15}
					};
                launchers[] = {{"CUP_launch_RPG7V", 0.15},
					{"", 0.85}
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
