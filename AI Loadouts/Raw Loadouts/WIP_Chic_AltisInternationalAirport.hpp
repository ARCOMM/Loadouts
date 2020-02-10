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
				"We are currently on the Naftia Peninsula. We are bordered to the east by the Pyrgos Gulf, and to the south and west by the Mediterranean Sea.",
				"Weather",
				"Today:	High: 55°F/12°C | Low: 35°F/1°C | Sunrise: 0631 | BMNT: 0607 | Thunderstorms, overcast, winds from the north at 20 knots",
				"Today: Partly cloudy, winds from the north at 15 knots"
			};
			situation[] = {
				"Yesterday at 0600, Western Chipotlean forces attacked Wasabi over disputed territory in northern Altis. They have captured the Altis International Airport and have cut our platoon off from land-based reinforcements. The Wasabian 2nd Rifle Battalion has suffered significant casualties and has surrendered to the Chipotleans at the Isthmus. Chipotleans have taken control of the peninsula.",
				"Marine air operations are still ceased due to poor weather at the LHA."
			};
			enemyForces[] = {
				"Multiple company-sized Chipotlean elements at Anthrakia and Chatkia. Security forces augmented by anti-air and possible mechanized detachment stationed at the airfield. Chipotlean military wears pale green and tan uniforms and are armed with Russian small arms, RPGs, and ATGMs, with extremely limited night vision capabilities.",
				"Chipotleans can conduct coordinated company-size combined arms attacks, but are not proficient employing indirect fire in high winds.",
				"Enemy Most Likely Course of Action (EMLCOA).",
				"Chipotleans will conduct a hasty defense against our raid force and attempt to deter us from accomplishing our mission. Company-sized attacks may follow. Upon contact they will most likely halt their advance but will not withdraw until they have sustained heavy losses."
			};
			friendlyForces[] = {
				"1st Platoon. You have taken severe casualties. You are the main effort. One medium machine gun squad is attached.",
				"Weapons Platoon (-). In direct support. Equipped with Javelin ATGMs. 81mm mortar section in direct support and will respond to calls for fire from our platoon."
			};
            mission[] = {
				"NLT 0630 establish Plt BP; NLT 0700 raid Altis International Airport (AIA) in order to deny the enemy the ability to conduct air operations."
			};
            execution[] = {
				"My commander's intent is to prevent Chipotlean forces from conducting air operations from AIA. I believe the enemy's key strength is their ability to mobilize security forces rapidly. I believe that their key weakness is their lax security posture. I plan to exploit this weakness by attacking swiftly, seizing enemy weapons and equipment, and withdrawing before an effective response can be made. My endstate is that the majority of enemy aircraft, anti-air defenses, pilot and maintenance personnel, and infrastructure are destroyed."
			};
            fireSupportPlan[] = {
				"The purpose of my fire support plan is to disrupt the enemy on the airfield in order to prevent them from coordinating mass fires on our raid force and to neutralize enemy forces while they are vulnerable."
			};
            specialTasks[] = {
				"Alpha Squad (Main Effort). NLT 0700 obtain explosives from the enemy Ammunition Supply Point (ASP) and raid the airfield.",
				"Bravo Squad (Supporting Effort). NLT 0630 establish BP on the right (southeastern) flank. Block enemy forces from advancing from the north.",
				"Medium Machine Gun Squad (Supporting Effort 2). NLT 0630 establish BP, emplace MMGs with overlapping fields of fire."
			};
            logistics[] = {
				"Civilian and enemy vehicles may be used to reposition supplies.",
				"Repair, rearm, and refuel services are unavailable. Further requests will go through Plt CO.",
				"All casualties will be treated with self-aid, buddy-aid, and stabilized in position by Corpsman. No medevac available for any casualty.",
				"Vehicles available in place are: (2) Rhib boats with M2 .50 cal, (2) Rhib boats with M2 .50 cal and Mk19 40mm Grenade Launchers.",
				"Ammunition available in place is: (1) Ammunition crate, (1) Explosives crate, (2) Mk6 Mortar tubes with (32) HE, (8) Illum, (8) Smoke each."
			};
			commandAndSignal[] = {
				"If the Chipotleans threaten to overwhelm the raid force, fall back to the boats and egress to the south back to friendly lines."
			};
			specialConsiderations[] = {
				"Exercise personal flashlight discipline in enemy territory.",
				"Small arms fire is unlikely to attract attention. Heavy weapons larger than a LMG and explosives larger than a grenade will alert enemy defenders. Indirect fire/illum will alert the defenders.",
				"Only vehicle crewmen are authorized to operate captured mechanized vehicles."
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
            situation[] = {
				"The enemy has been pushed from the Naftia Peninsula. The enemy to the east are dug in at Anthrakia and Charkia and the Pyrgos Bay coastline is sparsely defended by friendly forces, leaving you potentially vulnerable to an attack from the sea at night."
			};
            mission[] = {
				"High command is pleased with our progress but we have suffered extreme casualties. We are attempting to redirect the majority of our forces to the east. Friendlies at Anthrakia are without a reserve or flanking force and are extremely vulnerable to an attack from the flanks or rear."
			};
            friendlyForces[] = {
				"The Chipotlean 2nd Mechanized Rifle Battalion is at your disposal. Do not commit Companies from Anthrakia unless the situation in the rear is dire. We have suffered some casualties which has reduced the fighting strength of our Companies",
				"2nd Mechanized Rifle Battalion consists of 3 fighting companies, each with approximately (60) soldiers, (2) MMG teams, (1) T-55, (1) ZSU-23 Afghanski, (2) BTR-60s, (2) BMP-2s, and (2) BRDM-2s."
			};
            enemyForces[] = {
				"The Wasabian 2nd Rifle Battalion has surrendered on Naftia Peninsula.",
				"The American Marines successfully evaded capture and are believed to be retreating to the eastern shoreline of the Naftia Bay."
			};
            movementPlan[] = {
				"Establish defensive lines at Anthrakia and conduct rotating patrols of Altis International Airport."
			};
			commandersIntent[] = {
				"Secure our forces until the storm subsides and we can resume ground and air combat operations over eastern Altis."
			};
            fireSupportPlan[] = {
			};
            specialTasks[] = {	
			};
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
            AN_PRC_148[] = {"co", "dc", "vc", "mmgtl", "mattl", "mtrl", "fac"};
			AN_PRC_152[] = {"co", "dc", "ftl", "m", "vc", "mmgtl", "mattl", "mtrl", "fac"};
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
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"CUP_U_O_SLA_Desert", 1}
                };
                vests[] = {
                    {"CUP_V_RUS_6B3_1", 1}
                };
                headgear[] = {
                    {"CUP_H_RUS_6B27", 1}
                };
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"CUP_arifle_AKS", 0.9},
                    {"CUP_arifle_RPK74_45", 0.1}
                };
                launchers[] = {
                    {"", 0.9},
                    {"CUP_launch_RPG7V", 0.1}
                };
                attachments[] = {};
            };
            class INDFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"CUP_U_O_Partisan_VSR_Mixed1", 1}
                };
                vests[] = {
                    {"CUP_V_I_RACS_Carrier_Vest_wdl_2", 1}
                };
                headgear[] = {
                    {"CUP_H_CZ_Hat01", 1}
                };
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"RH_M16A2", 0.9},
                    {"hlc_lmg_M249E1", 0.1}
                };
                launchers[] = {
                    {"", 0.9},
                    {"CUP_launch_M72A6", 0.1}
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
