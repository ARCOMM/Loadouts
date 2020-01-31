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
            situation[] = 
			{
				"This region of FATA has recently been a hotbed for IS activity and a frequent meeting place for high level IS officers. US intelligence have tracked on such leader to a small village in the Goram Valley. It appears this valley has a massive cave system believed to be an IS stronghold.",
				"Last week Iraqi SF were on on a routine patrol in the area when they were ambushed. It was assumed that those who were not found at the ambush site had been taken and killed elsewhere. It has just been confirmed that those Iraqis are still alive and being held in the cave system. While the priority is still the kill or capture of the IS officer, attempt to locate and assist the Iraqis if doing so does not comprimise the mission."
				
			};
            mission[] = 
			{
				"- Locate and kill IS officer",
				"- rescue and link up with Iraqi SF"
			};
            friendlyForces[] = 
			{
				"Iraqi SF",
				"It is possible that local military police forces will be drawn into the fight, be sure to PID and treat them as friendly."
			};
            enemyForces[] = 
			{
				"IS fighters",
				"While exact numbers are unknown we expect this specific officer to have roughly 150 men loyal to him. IS fighters in the region are known to be equipped with standard riles, AT, and support weapons. No heavy armor or air is known to operate in this area."
			};
            commandersIntent[] = 
			{
				"This is a kill or capture mission, but expect the officer to fight for his life. If you should come accross the Iraqi soldiers, they'll likely be more than happy to assist in finding and killing the officer."
			};
            movementPlan[] = 
			{
				"Last known sighting of the officer is somewhere in the village next to the riverbed. That should be the first place we search for our target."
			};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = 
			{
				"It will be easier to work with the Iraq soldiers if they have a way to communicate. Bring some spare 152s to communicate with their leadership should you locate them out in the field."
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
            situation[] = 
			{
				"This region of FATA has recently been a hotbed for IS activity and a frequent meeting place for high level IS officers. US intelligence have tracked on such leader to a small village in the Goram Valley. It appears this valley has a massive cave system believed to be an IS stronghold.",
				"Earlier last week we were ambushed and brought to these caves. a few days ago one of the younger fighters, no older than 15, told us our squad leader is actually his uncle and agreed to help us escape. Since then he has been smuggling weapons and ammo into our cells when the other fighters are sleeping. We have had no way to communicate with the rest of our squad members since being split up, but we have to assume there are more cells in these caves. The boy slipped us a paper and said the best time to break out is just before dawn today, apparently the IS fighters think there's going to be a rescue attempt. No way to know if this boy is telling the truth, but what do we have to lose....?"
				
			};
            mission[] = 
			{
				"- Escape the caves",
				"- Kill any IS fighters who try and stop you",
				"- If a rescue force does arrive extract with them"
			};
            friendlyForces[] = 
			{
				"rescue forces"
			};
            enemyForces[] = 
			{
				"IS fighters",
				"While exact numbers are unknown we expect this specific officer to have roughly 150 men loyal to him. IS fighters in the region are known to be equipped with standard riles, AT, and support weapons. No heavy armor or air is known to operate in this area."
			};
            commandersIntent[] = 
			{
				"Escape the cave"
			};
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
            enableGroupMarkers = false;
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
            AN_PRC_343[] = {"ana", "anam"};
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
               
                uniforms[] = {
                    {"CUP_O_TKI_Khet_Partug_01", 0.25},
                    {"CUP_O_TKI_Khet_Partug_02", 0.25},
                    {"CUP_O_TKI_Khet_Partug_03", 0.25},
                    {"CUP_O_TKI_Khet_Partug_04", 0.25}
                };
               
               
                vests[] = {
                    {"CUP_V_OI_TKI_Jacket4_01", 0.20},
                    {"CUP_V_OI_TKI_Jacket4_02", 0.20},
                    {"CUP_V_OI_TKI_Jacket4_04", 0.20},
                    {"CUP_V_OI_TKI_Jacket4_05", 0.20},
                    {"CUP_V_OI_TKI_Jacket4_06", 0,20}
                };
               
                headgear[] = {
                    {"H_ShemagOpen_khk", 0.14},
                    {"H_ShemagOpen_tan", 0.14},
                    {"H_Shemag_olive", 0.14},
                    {"CUP_H_TK_Lungee", 0.14},
                    {"CUP_H_TKI_Lungee_04", 0.14},
                    {"CUP_H_TKI_Lungee_05", 0.14},
                    {"CUP_H_TKI_Lungee_06", 0.14}
                };
               
                goggles[] = {};
               
                backpacks[] = {
                    {"usm_pack_762x51_bandoliers", 0.25},
                    {"B_FieldPack_cbr", 0.25}
                };
               
                faces[] = {
                    {"PersianHead_A3_01", 0.20},
                    {"PersianHead_A3_02", 0.20},
                    {"PersianHead_A3_03", 0.20},
                    {"Mavros", 0.20},
                    {"WhiteHead_16", 0.20}
                };
               
                voices[] = {};
               
                rifles[] = {
                    {"hlc_rifle_aks74", 0.15},
                    {"hlc_rifle_aks74u", 0.15},
                    {"hlc_rifle_akm", 0.15},
                    {"hlc_rifle_rpk", 0.13},
                    {"hlc_rifle_rpk74n", 0.13},
                    {"CUP_lmg_PKM", 0.13},
                    {"CUP_srifle_LeeEnfield", 0.15}
                };
               
                launchers[] = {
                    {"CUP_launch_RPG7V", 0.15},
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
