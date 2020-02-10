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
        freezeTime = 2;
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
            situation[] = {"Early this morning CSAT forces conducted an amphibious assault on the island of Straits. They launched from their 7th Fleet located offshore to the North-West. In a scramble to react to the assault and protect the NATO HQ and airfield on the island NATO forces abandoned all other positions and fell back. The US 4th Fleet has been diverted to assist with the withdrawal."};
            mission[] = {"-Insert by helicopter onto the island of Stratis at Camp Rogain","-Extract three supply crates and the MRAP each at Camp Rogain, Air Station Mike, and Camp Maxwell", "-Extract back to the 4th Fleet"};
            friendlyForces[] = {"All other NATO units on the island have fallen back to the HQ and airfield and are preparing to extract via transport planes. They will provide little support other than securing the West flank of the island. They are expected to fully withdraw once the supplies at Camp Rogain are extracted."};
            enemyForces[] = {"Unknown amount of infantry forces supported by light vehicles"};
            commandersIntent[] = {"Attempt to establish as wide a perimeter as needed to secure the extraction of the supplies and vehicles. Forces may have to be deployed outside the wire to accomplish this. "};
            movementPlan[] = {"Insert at camp Rogain via Chinook(s) using the Little-bird as cover. Once supplies are extracted airlift units to the next objective."};
            fireSupportPlan[] = {"1x AH-6 'Little-bird' armed with 5000 rounds for the M134 and 38 CRV7 70mm FFARs", "2x CH-47I 'Chinooks' with 2x	M134 Mini-guns holding 2000 rounds each and ability to hold 16 passengers.", "The 2nd AH-6 and 3rd CH-47I can only be used with approval from High Command(Zeus)"};
            specialTasks[] = {};
            logistics[] = {"Supply Crates can be loaded into the MRAP then moved and unloaded at the pickup zone to be slung. They take approx 30sec to load and unload.", "Additional supplies are inside the Chinooks."};
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
            situation[] = {"CSAT Forces are attacking the island of Stratis while BLUFOR are attempting to extract supplies from three bases."};
            mission[] = {"Push each base as BLUFOR attempted to extract supplies. Give them around 3-5min at each base to setup."};
            friendlyForces[] = {"Whatever infantry and transport vehicles as needed. A maximum of 5x minigun prowlers mainly to suppress the player positions and as light AA."};
            enemyForces[] = {"Platoon of infantry, 2x Chinooks(Armed with Miniguns) and 1x Littlebird(Rockets and Miniguns)"};
            commandersIntent[] = {"Pressure and perimeter is the name of the game here. Players holding the base itself is not enough, they need to set a wide perimeter to defend the insert and extract of their helis. Players should be under contact for the majority of the time, but still make sure to give them breaks in between waves. Make sure you attack hard when your troops 'hear' the enemy helis incoming. If the players are quick at each base and set a solid perimeter then they should have the victory, however it won't be easy for them, wait till your troops see a mistake, then strike."};
            movementPlan[] = {"Use trucks and foot to deploy troops."};
            fireSupportPlan[] = {};
            specialTasks[] = {"Keep in mind friendly BLUFOR forces on the airfield, avoid attacking any of the positions from the South. Keep an armed prowler or two in the rear of your lines to prevent enemy CAS from having free reign."};
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
            AN_PRC_117F[] = {"cp", "p", "fac"};
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
					
					{"U_O_CombatUniform_ocamoF", 0.8},
					{"U_O_OfficerUniform_ocamo", 0.2},
					
				};
                vests[] = {
					
					{"V_Chestrig_khk", 0.5},
					{"V_BandollierB_khk", 0.5},
					
				};
                headgear[] = {
					
					{"", 0.01},
					{"H_HelmetO_ocamo", 0.8},
					{"H_Beret_ocamo", 0.19},
					
				};
                goggles[] = {};
                backpacks[] = {
					
					{"B_Carryall_ocamo_AAR", 0.48},
					{"B_AssaultPack_ocamo", 0.48},
					{"", 0.02},
					
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					
					{"arifle_Katiba_C_F", 0.45},
					{"arifle_Katiba_F", 0.45},
					{"LMG_Mk200_F", 0.10},
					
				};
                launchers[] = {
					
					{"CUP_launch_RPG18", 0.15},
					{"", 0.85},
					
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
