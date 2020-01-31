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
				"We are currently in DZ CHICKADEE on the Naftia Peninsula. We are bordered to the north by the Drimean Isthmus, to the east by the Pyrgos Gulf, and to the south and west by the Mediterranean Sea. The terrain is gently rolling hills dissected by improved roads and treelines. All areas are unrestricted for both vehicle and foot mobile traffic.",
				"Weather",
				"Today:	High: 55°F/12°C | Low: 35°F/1°C | Sunset: 1757 | EENT: 1827 | Moonrise: 1621 | %Illum: 92% | Mostly cloudy, rain, winds from the north at 15 knots",
				"Tonight: Thunderstorms, freezing rain, winds from the northeast at 25 knots"
			};
			situation[] = {
				"SPMAGTF has been conducting joint training of friendly Wasabian military forces in the Zaros region for the past two weeks. LHA-6 America is conducting fleet exercises in the eastern Mediterranean.",
				"At 0600, Western Chipotlean forces attacked Wasabi over disputed territory in northern Altis. They have captured the Altis International Airport and have cut our platoon off from land-based reinforcements. The Wasabian 2nd Rifle Battalion has blunted the worst of the initial attack and halted the Chipotlean 3rd Mechanized Rifle and Armored Battalions north of Drimea, but we have suffered significant casualties. Chipotleans have conducted probing attacks throughout the day but have not yet made a concerted effort to take the peninsula.",
				"Marine aircraft have conducted numerous strikes and attrited many enemy vehicles, but as of 1545 all air operations have been suspended due to poor weather at the LHA."
			};
			enemyForces[] = {
				"Multiple company-sized Chipotlean elements at Zaros and Therisa. Chipotlean military wears pale green and tan uniforms and are armed with Russian small arms, RPGs, and ATGMs, with extremely limited night vision capabilities.",
				"Chipotleans can conduct coordinated company-size combined arms attacks, but are not proficient employing indirect fire in high winds. Chipotleans can withdraw if their attacks are unsuccessful.",
				"EMLCOA.",
				"Chipotleans will conduct multiple company-sized attacks on our defensive perimeter and attempt to destroy our positions to seize the Naftia Peninsula. Their goal is to eliminate U.S.-Wasabian forces so that they may redeploy their forces to the north, as well as seize key terrain from which to assert control over the Pyrgos Gulf and prevent future amphibious raids. They will use combined arms attacks and attempt to identify and exploit any gaps in our perimeter. These attacks will most likely be preceded by rocket and cannon fire. Upon contact they will most likely continue the attack and not withdraw until they have sustained heavy losses. They are willing to accept those losses to show strength and resolve to a local and international audience."
			};
			friendlyForces[] = {
				"1st Platoon. You have taken severe casualties. You are the main effort. Effective 1200 today, one medium machine gun squad is attached.",
				"Weapons Platoon (-). In direct support. Equipped with TOW and Javelin ATGMs. Established near Plt Command Post (CP). 81mm mortar section established in firing position near Plt CP and will respond to calls for fire from our platoon.",
				"Single LAV-25 being repaired and refueled at this time. Available if requested.",
				"Wasabian 2nd Rifles located on left (Western) and right (Eastern) flanks, established in BP. Wasabian military wears dark green uniforms with red berets and uses a mixture of U.S. and Russian small arms and vehicles."
			};
            mission[] = {
				"NLT 1630 establish Plt BP; retain Naftia Peninsula (from 10 o'clock - 2 o'clock - 12 o'clock is grid north) in order to deny the enemy key terrain. Tie in physically with company-sized remnants of Wasabian 2nd MRB on both flanks."
			};
            execution[] = {
				"My commander's intent is to prevent Chipotlean forces from taking the Naftia Peninsula. I believe the enemy's key strength is their ability to conduct company-size combined arms operations. I believe that their key weakness is the inability to accurately employ indirect fire and aircraft in high winds and at night. I plan to exploit this weakness by emplacing our own fire support in the open to engage enemy troops advancing across the isthmus. My endstate is that all Chipotlean attackers are destroyed, defensive positions are improved overnight, and landing zones are prepared for air or sea-delivered reinforcements tomorrow."
			};
            fireSupportPlan[] = {
				"The purpose of my fire support plan is to disrupt the enemy within the platoon engagement area in order to prevent the enemy from coordinating mass fires on our positions and to neutralize enemy forces while they are vulnerable."
			};
            specialTasks[] = {
				"Alpha Squad (Main Effort). NLT 1630 establish BP on the left (western) flank. Block enemy forces from advancing from the north.",
				"Bravo Squad (Supporting Effort). NLT 1630 establish BP on the right (eastern) flank. Block enemy forces from advancing from the north.",
				"Medium Machine Gun Squad (Supporting Effort 2). NLT 1630 establish BP, emplace one MMG on the left flank and one MMG on the right flank with overlapping fields of fire."
			};
            logistics[] = {
				"Wasabian military and nationals have spent the last 8 hours laying tactical wire and filling Hescos for vehicle run up positions.",
				"Ammunition, food, and water were air dropped by KC-130s at 1000 in DZ CHICKADEE and staged at defensive lines. Vehicles may be used to reposition supplies. Repair, rearm, and refuel services available at Plt CP. Further requests will go through Plt CO.",
				"All casualties will be treated with self-aid, buddy-aid, and stabilized in position by Corpsman. No medevac available for any casualty.",
				"Vehicles available in place are: (1) MTVR Cargo, (1) MTVR Repair, (1) MTVR Resupply, (1) HMMWV Unarmed, (1) HMMWV SOV .50 cal with Javelin Ammo, (1) LAV-25."
			};
			commandAndSignal[] = {
				"I will be at the A Co CP coordinating 2nd Platoon's efforts preparing defenses, LZs, and shore landing areas to the south. If the Chipotleans threaten the integrity of our defensive lines or breach the final protective line in any way, fall back to secondary defensive positions and continue to delay them until nightfall."
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
				"The swift attack this morning caught the Wasabians off guard but you are dangerously overextended. The enemy to the east are dug in at Anthrakia and Charkia and the Pyrgos Bay coastline is sparsely defended by friendly forces, leaving you potentially vulnerable to an attack from the sea at night."
			};
            mission[] = {
				"High command is pressuring you to attempt to take the Naftia Peninsula by sunset while committing as few resources as possible to the attack. Taking the Peninsula will allow us to redirect the majority of our forces to the east. Attempting to commit too many attackers to any single engagement can leave friendlies at Anthrakia without a reserve or flanking force."
			};
            friendlyForces[] = {
				"The Chipotlean 3rd Mechanized Rifle Battalion and 3rd Armored Battalion are at your disposal, but the 3rd Armor is refueling at Neochori and held in reserve for the eastern fighting. Do not commit Companies from the Armored Battalion unless the Mechanized Rifle Battalion is failing to make progress. We have suffered some casualties which has reduced the fighting strength of our Companies",
				"3rd Mechanized Rifle Battalion consists of 3 fighting companies, each with approximately (60) soldiers, (2) MMG teams, (1) T-55, (1) ZSU-23 Afghanski, (2) BTR-60s, (2) BMP-2s, and (2) BRDM-2s.",
				"3rd Armored Battalion consists of 3 fighting companies, each with (30) soldiers, (2) MAT teams, (2) T-72s, (1) ZSU-23 Afghanski, (4) BMP-2s, and (2) BRDM-2s."
			};
            enemyForces[] = {
				"The Wasabian 2nd Rifle Battalion is believed to be stationed to the south on Naftia Peninsula, establishing defensive positions. They are low on ammunition and supplies so this should be an easy fight. Enemy fortifications are expected to be light, augmented by possible single T-72.",
				"The Wasabians have been conducting joint training with the American Marines. We have taken this opportunity to show our strength and force the Americans out of our affairs on Altis. We received reports that an entire Company of Americans were killed in Zaros. It is believed that the majority of the remaining Americans are now in Charkia. If any remain to the south, it is probably only a single squad with limited supplies."
			};
            movementPlan[] = {
				"At 1645, we believe the enemy will drop their guard as the sun sets, expecting no attack to come until the morning. Engage with reconnaissance patrols followed by single company-sized attacks until the Wasabians on the Naftia Peninsula are eliminated or surrender."
			};
			commandersIntent[] = {
				"The attack must be concluded by 1830. Commit to attacks at night or in the coming thunderstorm only if you think the battle can be easily won and the enemy routed, otherwise withdraw to Drimea and fortify. High casualties are acceptable to clear this flank and drive the Americans off of Altis for good."
			};
            fireSupportPlan[] = {};
            specialTasks[] = {
				"Spawn units in the fields behind Therisa. BLUFOR MAT teams can see a lot of the terrain behind the hill from their flank.",
				"Depending on how well the defenders are doing, you may be able to send half or double waves in.",
				"As the weather degrades and the sun sets, bodies and vehicle wrecks can be cleaned up that were destroyed from further away during daylight.",
				"You may try to take one flank or the other, prompting players to commit to a flanking counterattack of their own.",
				"Vehicles can mow down single-strand concertina wire. It blows tires but tracks are fine. Infantry ignores single-strand concertina wire completely... They're notionally cutting through.",
				
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
			AN_PRC_152[] = {"co", "dc", "m", "vc", "mmgtl", "mattl", "mtrl", "fac"};
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
