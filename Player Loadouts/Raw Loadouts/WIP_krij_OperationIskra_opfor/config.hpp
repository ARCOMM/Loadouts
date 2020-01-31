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
				"After years of conflict in Takistan, Zargabad was placed under joint occupation between the American and Russian militaries. Since the start of the occupation American and Russian relations have reached cold war levels of distrust. Recently civil unrest has plagued the country. The recent turmoil has reached a flashpoint. Both the Americans and Russians are looking to capitalize on this coup to remove the others influence on the region.",
				"Local Insurgents have inspired the people of Zargabad to rise up and push out the occupational forces within the city. Most of the noncombatants have fled the city and it is almost completely occupied by hostile insurgents. A reactionary force of Russian troops is the first to reach the outskirts of the city.",
				"The coup caught both sides off guard. The Russian forces fought until the last man while the Americans tried to withdrawl. An American Diplomat was ambushed and killed trying to escape the city with sensitive documents. An American helicopter was shot down somewhere over the city while trying to extract troops. Russian FSB wants both the documents and helicopter seccured for later examination."
			};
            mission[] = {
				"- Destroy the rocket trucks in the construction site ", "- Recover the diplomats documents ", "- Secure the Blackhawk crash site ", "- Eliminate the enemy commander", "- Recapture the old military base "
			};
            friendlyForces[] = {};
            enemyForces[] = {
				"Takistani Insurgents.",
				"We are certain that the enemy has some type of armor elements in the city but we cannot be sure of their exact strength or composition. Expect anything from BTRs to T-72s.",
				"It is also likely that they will have some form of anti-tank defenses in place so it is best to stay vigilent. "
			};
            commandersIntent[] = {
				"Sweep the city and eliminate any and all insurgent troops.Securing the city will ensure that Russia can prevent American influence from returning to Takistan."
			};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {
				"Due to the urgency of our mission, we were unable to secure up to date maps. Our maps should be relatively accurate, but Zargabad has had some substantial construction in the past 10 years so there may be structures present that are not marked on your maps comrades.",
				"- 1x BMP-3","- 2x BMP-2K", "- 2x URAL tranports"
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
            AN_PRC_148[] = {};
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
				uniforms[] =
				{
					{ "U_I_C_Soldier_Para_2_F", 0.15 },
					{ "U_I_C_Soldier_Para_3_F", 0.35 },
					{ "U_I_C_Soldier_Para_4_F", 0.25 },
					{ "U_I_C_Soldier_Para_1_F", 0.25 }
				};

				vests[] =
				{
					{ "V_Chestrig_khk", 0.20 },
					{ "V_Chestrig_oli", 0.20 },
					{ "V_BandollierB_khk", 0.20 },
					{ "V_BandollierB_oli", 0.20 },
					{ "V_TacChestrig_oli_F", 0.20 }
				};
				headgear[] =
				{
					{ "H_Bandanna_khk", 0.20 },
					{ "H_BoonieHat_oli", 0.20 },
					{ "H_Cap_oli", 0.20 },
					{ "H_HeadBandaged_stained_F", 0.10 },
					{ "H_Shemag_oli", 0.15 },
					{ "", 0.15 }
				};

				goggles[] =
				{
					{ "", 1.00 }
				};
				backpacks[] =
				{
					{ "", 1.00 }
				};

				faces[] = {};
				voices[] = {};
				rifles[] =
				{
					{ "rhs_weap_akm", 0.65 },
					{ "rhs_weap_aks74u", 0.15 },
					{ "rhs_weap_pkm",  0.20 }
				};

				launchers[] =
				{
					{ "rhs_weap_rpg26", 0.20 },
					{ "", 0.80 }
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

