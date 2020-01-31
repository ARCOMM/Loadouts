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
            situation[] = 
			{
				"Tembelan has been a logistics hub for American military operations in the Pacific, as well as a hub for trade due to the numerous off shore drilling sites around the island.",
				"The Tembelan government has declared war on the US. The Tembelan goverment claims they should have ownership of the American owned drilling sites. The Tembelans also claim unauthorized military weapons testing is being conducted by the Americans on the island without the consent of the local government. The Central Intelligence Agency indicates that the Tembelans are being supplied expensive military prototypes from an unknown source.",
				"The Americans have tried to keep the conflict from turning into all out war. Most offensive operations have been conducted by American special forces teams. One such team was a Delta Force unit that was sent to destroy a prototype tank and to extract the CIA agent who discovered it. While en route to their drop zone the CH-47F transporting the unit suffered a mechanical failure and crashed somewhere in the Hutan Kedua Forest. Enemy patrols quickly decended on the crash site forcing the Delta team deeper into the forest. The operators also had to abandon their own protoype ATV that was equiped with AT rockets intended to be used to destroy the protoype tank.",
				"An Air Force PJ team has been sent to rescue the Delta Force unit."
			};
            mission[] = 
			{
				"- The Delta Team must evade enemy patrols and attempt to establish communication with the rescue team.",
				"- The PJs and air crew must locate the Delta Unit.",
				"- Once the Delta Team is linked with the PJs both units will complete the original objectives to extract the CIA Agent from Toko Tempat and locate/destroy the prototype tank."
			};
            friendlyForces[] = 
			{
				"- Delta Force Operators",
				"- Air Force Pararescue"
			};
            enemyForces[] = 
			{
				"Tembelan Army",
				"The crash was spotted by the Tembelan Army and they are searching for the survivors. They have committed a massive amount of troops to this effort and the location of the tank has been reinforced.",
				"We should expect APCs, Light armor, and numerous roaming patrols. Exact troop numbers are unavailable at this time.",
				"There is a moderate AA threat (static AA guns) around the location of the tank."
			};
            commandersIntent[] = 
			{
				"The commander with the PJs at Selatan Airbase will have overall command of the mission.",
				"Utilizing night vision and thermal cameras the rescue team must search the forest for the Delta Force unit lost in the Hutan Kedua Forest. Once found, both units should move to complete the original objectives."
			};
            movementPlan[] = 
			{
				"- The Delta Force unit should attempt to evade enemy patrols, get their bearings, and attempt to signal the rescue team."
			};
            fireSupportPlan[] = {};
            specialTasks[] = 
			{
				"- Attempt to locate the crash site and demo the protoype ATV left behind. (This could be done by either team)."
			};
            logistics[] = 
			{
				"- 1x UH-60M transport (12 seats)",
				"- 1x OH-6M Recon (6 seats)",
				"- If the armor fielded by the Temblan Army poses too great a threat to the mission there are MAAWs launchers aboard the USS Wasp that can be airlifted by the UH-60M."
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
			AN_PRC_148[] = { "co", "dc","vc", "mmgtl", "mattl", "m", "resc_l", "fac", "resc_co" };
			AN_PRC_152[] = { "Resc_CO", "dc", "cp", "p", "vc", "mmgtl", "mattl", "mtrl", "fac" };
            AN_PRC_117F[] = {};
            AN_PRC_77[] = {};
        };
        class OPFOR {
			languages[] = { "english","russian","greek" };
			AN_PRC_343[] = { "all" };
			AN_PRC_148[] = { "co", "dc", "ftl", "vc", "mmgtl", "mattl", "fac", "m" };
			AN_PRC_152[] = { "co", "dc", "cp", "p", "vc", "mmgtl", "mattl", "mtrl", "fac" };
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
                uniforms[] = 
				{
					{"CUP_U_O_RUS_EMR_1", 1.00},
					{"", 0}
				};
                vests[] = 
				{
					{"CUP_V_CZ_vest04", 1,00},
					{"", 0}
				};
                headgear[] = 
				{
					{"CUP_H_RUS_6B27", 1.00},
					{ "", 0 }
				};
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
				rifles[] =
				{
					{ "hlc_rifle_ak12", .65},
					{ "hlc_rifle_RPK12", .35}
				};

				launchers[] =
				{
					{ "CUP_Launch_RPG18", .25},
					{ "", .8}
				};
                attachments[] = 
				{
					{"CUP_acc_flashlight", 1.00},
					{"", 0}
				};
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
