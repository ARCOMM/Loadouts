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
            situation[] = {
				
				"-- BULWARK PRIORITY RECORD : 03825B-02 --",
				"|| ENCRYPTION CODE: OASIS",
				"|| PUBLIC KEY: N/A",
				"|| REPORTED LOCATION: USS Valor",
				"|| SUBJECT: Retreat Order: //REDACTED//",
				"|| CLASSIFICATION: Rear Admiral Carter's situation report ",
				
				"-----------------------RECORD START------------------------",
				
				"Ladies and Gentleman this is Captain Andrew Carter. I am only going to say this once so listen up. A lot has happened within the last 48 hours. We have fire damage on multiple decks, most of our electronic systems are completely fried and we are now officially dead in the water. Our strike group is in shambles and we are missing 4 destroyers. We are on the backfoot here. As of two hours ago we lost contact with ground teams as we were sounding a general retreat. What have no way to confirm the message was received, or the location of any ground teams. From what we can tell they are scattered with short range radios at their disposal. We can only hope they are safe and still combat effective.",
				
				"With teams active in the AO, our fight is not over. As of right now I am launching a light airborne QRF to find and support our ground teams. Once our airborne units are in contact with the ground teams, we can move onto the operation at hand. Ground teams are to regroup and assault a Bulwark staging area. This staging area is set up in an abandoned FOB left behind by the islands previous government. Recon shows that the staging area should be home to useful supplies for both the ground team and the USS Valor. Teams should resupply and support the logistics helo as they lift any useful containers they can find. Engineering is telling me we only need two. Once the first crate away, ground teams are free to move on to the next objective as soon as they are resupplied.",
				
				"Moving farther south, we have gotten reports that the USS Fortune has run aground. We had scattered radio contact from the crew 30 or so minutes ago. Several deck crews have survived the impact and have made landfall down the coast. We fear they have been captured by Bulwark. To our knowledge they have been taken to a local villa in the area. We believe that Bulwark soldiers are held up in this villa awaiting extract. It would seem that this anomaly has done just as much damage to them, as its done to us. Neutralize all contacts in the compound and get that deck crew out of there.",
				
				"Now the last objective is fairly simple. From the villa we are to move to our primary extract point. We are staging our extraction at a hospital to the south. We expect there is heavy Bulwark contact in the area holding some civilians at the local hospital. If we can clear it, we will be able to extract our ground teams to the Valor, taking with us any captured or wounded civilians.",
				
				"Before we launch this mission, I think it is worth noting that Bulwark still has a strong grip on the island. The artifact did some damage to their command structure, but they are very quickly mobilizing. We believe they will be attempting to pull their northern forces south; regrouping at the Selatan military base to the south. We can expect convoys being routed from this northern airfield, so move as quick as we can. A MH-60 knighthawk and a AH-6 littlebird  will be escorting our logistics birds, to keep them off our ass. Supply is limited to all aircraft so make good use of any resources we find. ROE is full open here people, but take any prisoners if we can. We need intel, and I want Bulwark to answer for the loss of half our carrier group. Between the Villa and extraction point, there seems to be a downed Bulwark bird. Take any prisoners and any important crates we can find.",
				
				"That is all I have for now. I want all hands on deck and everyone at their assigned post. This is not a drill gentleman… We are at war.",

				" -----------------------RECORD END------------------------ "
				
			};
            mission[] = {
				
				"- Rally all friendly ground forces (2 minute briefing stage)",
				"- Rearm and sling load any useful cargo containers (2 out of 3 required)(Will effect resupply of aircraft)",
				"- Find and extract USS Fortune deck crew",
				"- Secure Bulwark crashsite and extract survivors/cargo",
				"- Extract previously captured citizens",
				"- Search for additional civilians and extract at Primary Extraction point"
				
			};
            friendlyForces[] = {
				
				"CBRN Ground teams",
				"USS Valor support helicopters"
				
			};
            enemyForces[] = {
				
				"- Bulwarks core PMC (Stark black NBC suit)",
				
			};
            commandersIntent[] = {};
            movementPlan[] = {};
            fireSupportPlan[] = {};
            specialTasks[] = {
				
				"As of right now we are at war with Bulwark. That being said we are in no fighting condition. Collect the nessesary supplies to repair the valor. If possible, we need to capture any surrendered forces, and rescue any wounded ground teams.",
				
			};
            logistics[] = {
				
				"-- Alpha --",
				"x1 M1165 GMV (M134)",
				"x1 HEMTT Transport",
				"-- Bravo --",
				"x3 M1151 (Unarmed)",
				"x1 M1151 (M2)",
				"-- Charlie --",
				"x1 M1151 (M2)",
				"x1 HEMTT Transport",
				
				"-- Pilots --",
				"x1 CH-53 (To be used for sling loading)",
				"x1 MH-47 (Backup transport for Phantom or Raptor)",
				"x1 MH-60S 'Knighthawk' x4 Pylons (x36 HERockets, 2400 30mm) (Unlocked after first container arrives at Valor + Pilot and copilot required)",
				"x1 AH-6M (325/2000* 50. BMG, and 5/19* HE Rockets) (To be used as replacement for MH-60 if uncrewed)",
				
				"*Vehicle Resupply at the USS Valor will be based on conatiners secured by Phantom. (Ammo container = Vehicle ammo truck, Fuel container = Fuel truck, Cargo container = Repair truck)"
				
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
            enableGroupMarkers = false;
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
            AN_PRC_343[] = {"co", "dc", "ftl", "vc", "mmgl", "matl", "m", "cp", "p"};
            AN_PRC_148[] = {};
            AN_PRC_152[] = {"cp", "p", "fac"};
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
                removeMedicalItems = false;
                prioritizeTracerMags = true;
                uniforms[] = {
					
					{"skn_u_nbc_indep_blk", 1.0},
					
				};
                vests[] = {
					
					{"CUP_V_B_Interceptor_Rifleman_Grey", 1.0},
					
				};
                headgear[] = {};
                goggles[] = {
					
					{"skn_m04_gas_mask_blk", 1.0},
					
				};
                backpacks[] = {
					
					{"B_ViperLightHarness_blk_F", 0.48},
					{"", 0.02},
					{"B_AssaultPack_blk", 0.48},
					
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					
					{"", 0.01},
					{"hlc_rifle_G36C", 0.88},
					{"CUP_arifle_MG36", 0.11},
					
				};
                launchers[] = {
					
					{"", 0.90},
					{"CUP_launch_RPG18", 0.10},
					
				};
                attachments[] = {
					
					{"CUP_acc_Flashlight", 0.49},
					{"", 0.01},
					{"CUP_acc_XM8_light_module", 0.48},
					
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
