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
            orientation[] = {
				"We are currently in southwestern Chernarus. The terrain is rolling hills and dense forest. Terrain is unrestricted for foot mobile traffic and restricted for vehicle traffic.",
				"Weather",
				"Today: High: 65°F/18°C | Low: 46°F/8°C | Sunrise: 0704 | BMNT: 0617 | marine layer, becoming overcast with light showers"
				};
			situation[] = {
				"Srirachan forces are attempting to seize Chernogorsk. Marines have deployed to repel the attack and defeat the Srirachans in Chernogorsk."
				};
            enemyForces[] = {
				"Enemy infantry battalion supported by motorized, mechanized, and limited armored forces in the region, as well as platoon-sized headquarters, support, and security forces near the town of Gorka. Enemy augmented with mortar, weapons, and anti-air teams also in the region.",
				"Srirachan military wears light green camouflage uniforms and are armed with Russian small arms, RPGs, and vehicles, with limited night vision capabilities.",
				"Srirachans can conduct combined arms attacks but are spread thin across a broad front and will be slow to coordinate a response to a raid behind their lines. Srirachans can withdraw but are unlikely to pursue back across friendly lines."
			};
			friendlyForces[] = {
				"1st Platoon, Alpha Squad. You are the main effort. One medium machine gun is attached.",
				"Weapons Platoon (-). In direct support. Equipped with Javelin ATGMs, 81mm mortar section."
			};
			mission[] = {
				"NLT 0615 raid enemy headquarters IVO Gorka in order to disrupt enemy operations in Chernarus. Kill or capture enemy battalion commander and senior staff in Gorka."
			};
            execution[] = {
				"My commander's intent is to prevent Srirachans from launching combined arms attacks to seize Chernogorsk. The enemy's key strength is their numerical superiority. Their key weakness is their dispersion and posture. Exploit this weakness by attacking swiftly, seizing enemy weapons and equipment, destroying communications equipment, and withdrawing before an effective response can be made. My endstate is that enemy command, communications, and logistical support is crippled for at least 72 hours."
			};
            fireSupportPlan[] = {
				"Destroy and disrupt enemy responders to prevent them from massing fires on our raid force.",
				"Civilians are present in local towns; do not use HE larger than a hand grenade in towns except in self defense, and PID your targets."
			};
            logistics[] = {
				"Repair, rearm, and refuel services are unavailable.",
				"Vehicles available in place are: (5) HMMWVs with (1) Mk19, (1) M2, (1) M134, (1) M240, (1) TOW. Each seat (5) personnel, total capacity (25).",
				"No medevac available for any casualty.",
				"Ammunition available in place is: (1) Ammunition crate, (2) Explosives crates, (2) Mk6 Mortar tubes with (32) HE, (8) Illum, (8) Smoke each."
			};
			commandAndSignal[] = {
				"Green star cluster to indicate mission success and trigger friendly attack from Stary Sobor.",
				"If the Srirachans threaten to overwhelm the raid force, fall back to friendly lines via breakthrough if necessary. If raid force is enveloped and egress becomes impossible, conduct hasty defense of Gorka; remain in place for friendly force breakthrough from Stary Sobor. Red star cluster to indicate that egress back to friendly lines is no longer possible."
			};
			specialConsiderations[] = {
				"Lights may be used in rear areas. Exercise personal flashlight/headlight discipline in enemy territory.",
				"Small arms fire is unlikely to attract undue attention near the front line. Heavy weapons or turret fire will alert enemy defenders. Indirect fire/illum is unlikely to attract suspicion of forward observation unless consistent and accurate.",
				"Vehicles may be used as assault force, base of fire, or merely transportation at ASL's discretion.",
				"Excess collateral damage and numerous civilian casualties are likely to result in insurgent resistance in later stages of the conflict. Keep both at a minimum, but do not hesitate to engage the enemy with overwhelming firepower to accomplish the mission and save Marine lives."
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
            AN_PRC_148[] = {};
            AN_PRC_152[] = {"co", "dc", "m", "ftl", "vc", "mmgtl", "mattl", "mtrl", "fac"};
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
                removeNightVision = false;
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
