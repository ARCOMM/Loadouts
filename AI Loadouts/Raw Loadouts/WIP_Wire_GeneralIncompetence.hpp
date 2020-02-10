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
        freezeTime = 1;
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
            situation[] = {"An underground faction has been siphoning gear of the German army and fashion themselves as the next world leaders, they've set themselves up in a peaceful region and blocked of parts of the area from Civilian access. Locals know they have fashioned a lookout as a shooting range but are at a loss to remaining base locations. Due to rising concerns over risk of violence, and failing ears of country government, the locals have elected to hire a mercenary group to eliminate the faction general and hopefully cause chaos and breakdown of the group. Funds low they hired a small but up and coming group called ARCOMM."};
            mission[] = {"Find and eliminate Faction General, identifiable by Blue officer beret"};
            friendlyForces[] = {"ARCOMM mercenary group and Independantly hired pilots with military experience hoping for recognition. Make sure to trade spare radios for communications."};
            enemyForces[] = {"Faction with stolen equipment, expect everything from HMG trucks to Tanks."};
            commandersIntent[] = {"Main force will take over the shooting range and equip themselves with better vehicles and guns, as well as the AT weaponry for MAT team.""""Pilots will Scout area for enemy bases and locations and report them back to main unit. If opportunity presents itself, steal armed helicopters.""""Kill Enemy Commander when found, then exfil back to Fallingbostel."};
            movementPlan[] = {"At leads discretion, The open road grants quick access, while the trees provide cover. The enemy should not have any reason to worry about helicopters flying past as they haven't implemented martial law, but the more we fight the more likely they are to send their own assets out or clear the skies, be wary."};
            logistics[] = {"We have no support line, plan well with what is available at the fire range. We know that they have brought 4 armed trucks, with a fireteams worth of weapons each of rifles and AR weaponry, and have a stock of MAAWS in the local building."};
        };
        class INDFOR {
			situation[] = { "An underground faction has been siphoning gear of the German army and fashion themselves as the next world leaders, they've set themselves up in a peaceful region and blocked of parts of the area from Civilian access. Locals know they have fashioned a lookout as a shooting range but are at a loss to remaining base locations. Due to rising concerns over risk of violence, and failing ears of country government, the locals have elected to hire a mercenary group to eliminate the faction general and hopefully cause chaos and breakdown of the group. Funds low they hired a small but up and coming group called ARCOMM." };
			mission[] = { "Find and eliminate Faction General, identifiable by Blue officer beret" };
			friendlyForces[] = { "ARCOMM mercenary group and Independantly hired pilots with military experience hoping for recognition." };
			enemyForces[] = { "Faction with stolen equipment, expect everything from HMG trucks to Tanks." };
			commandersIntent[] = { "Main force will take over the shooting range and equip themselves with better vehicles and guns, as well as the AT weaponry for MAT team.""""Pilots will Scout area for enemy bases and locations and report them back to main unit. If opportunity presents itself, steal armed helicopters.""""Kill Enemy Commander when found, then exfil back to Fallingbostel." };
			movementPlan[] = { "At leads discretion, The open road grants quick access, while the trees provide cover. The enemy should not have any reason to worry about helicopters flying past as they haven't implemented martial law, but the more we fight the more likely they are to send their own assets out or clear the skies, be wary." };
			logistics[] = { "We have no support line, plan well with what is available at the fire range." };
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
			situation[] = { "An underground faction has been siphoning gear of the German army and fashion themselves as the next world leaders, they've set themselves up in a peaceful region and blocked of parts of the area from Civilian access. Locals know they have fashioned a lookout as a shooting range but are at a loss to remaining base locations. Due to rising concerns over risk of violence, and failing ears of country government, the locals have elected to hire a mercenary group to eliminate the faction general and hopefully cause chaos and breakdown of the group. Funds low they hired a small but up and coming group called ARCOMM." };
			mission[] = { "Find and eliminate Faction General, identifiable by Blue officer beret" };
			friendlyForces[] = { "ARCOMM mercenary group and Independantly hired pilots with military experience hoping for recognition. Make sure to trade spare radios for communications." };
			enemyForces[] = { "Faction with stolen equipment, expect everything from HMG trucks to Tanks." };
			commandersIntent[] = { "Main force will take over the shooting range and equip themselves with better vehicles and guns, as well as the AT weaponry for MAT team.""""Pilots will Scout area for enemy bases and locations and report them back to main unit. If opportunity presents itself, steal armed helicopters.""""Kill Enemy Commander when found, then exfil back to Fallingbostel." };
			movementPlan[] = { "At leads discretion, The open road grants quick access, while the trees provide cover." };
			logistics[] = { "We have no support line, plan well with what is available at the fire range." };
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = false;
                prioritizeTracerMags = true;
                uniforms[] = {
					{"MNP_CombatUniform_Germany_S", 0.5},
					{"MNP_CombatUniform_Germany", 0.5} 
				};
                vests[] = {
					{"MNP_Vest_Germany", 0.5},
					{"MNP_Vest_Germany_2", 0.5}
				};
                headgear[] = {
					{"MNP_Helmet_Germany", 0.7},
					{"MNP_Boonie_GER_T", 0.2},
					{"MNP_Helmet_PAGST_UN", 0.1}
				};
                goggles[] = {
					{"G_Bandanna_sport", 0.3},
					{"G_Bandanna_beast", 0.3},
					{"", 0.4}
				};
                backpacks[] = {
					{"B_Bergen_dgtl_F", 0.08},
					{"", 0.92}
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"hlc_rifle_G36CTac", 0.4},
					{"hlc_rifle_hk33a2RIS", 0.3},
					{"hlc_rifle_M14", 0.3}
				};
                launchers[] = {
					{"launch_NLAW_F", 0.1},
					{"", 0.90}
				};
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
