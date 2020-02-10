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
            situation[] = {"We are screwed..... We were the lucky few to be out on patrol before Opfor sprung a suprise attack on us and knocked out almost all of our forces. The few of us survived have little to no leadership experience and are hannging by a thread, all we know is in the event of base attack our training tells us to proceed to the pre-briefed rendezvous point and wait for friendlies.","In the crossfire with enemy forces we lost most of our armor battalion and all that survived in working condition is an M113 and an M1A1 Abrams but both suffered damage internally from ricochet which killed both armor commanders and punctured the fuel tanks which now have slow leaks when in use. The M113 gunner also reluctently took lead to this cluster #@!@ due to his recent promotion in rank (poor bastard). After cleaning out the vehicles of blood and guts the abrams gunner spots a small friendly fireteam bringing up the rear and also appear to be in bad shape."," The firetram eventually rallyed with the armor and reported the base was in full evacuation and retreat order was given. After assesing your current situation you realize most Bluefor LR comms devices are being jammed and are useless. The only LR powerful enough to overcome the jamming is the armor rack radios. The M113 gunner then loads all the fireteam straglers inside and gives the order to move out."  };
            mission[] = {"Get to the renzdevous marked on map and wait for friendlies","Resupply, Refuel armor","Give opfor some payback for all friendly forces lost","Extract via nearby airport"};
            friendlyForces[] = {"You heard a garbled wanker speak on the radio and assume friendly forces are british"};
            enemyForces[] = {"During the battle you were able to identify German and Russian factions working together","Armor battalions were reported on the move, Expect search and destroy tactics"};
            commandersIntent[] = {};
            movementPlan[] = {"Opfor Aerial recon have been spotted providing fire missions for artillery and missle boats. They have been giving accurate tageting positions and BDA and seen commonly making flight paths away from the main MSR. Stay on the main road to the meet point unless attacking enemy forces on the way."};
            fireSupportPlan[] = {};
            specialTasks[] = {"Attack opfor targets of opportunity"};
            logistics[] = {"1xM113","1xM1A1 Abrams"};
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
            situation[] = {"We recently recieved an emergency distress call from Blufor forces Altis base calling for assist. After looking at our satelites we can assume that was their last transmission before being overrun. Realtime images show German and russian forces working together im mass numbers."," Our commander has a soft spot for our boys in blue and elected for a full company mobilization. After airdropping in the cover of night local milita contacted us and gave us intel on the ground (lots of air,tanks,infantry), (great intel right...) and also donated Old Besse(ZU-23) and what ammo they have left for her loaded in a vic. Local militia also warned us Besse has a drinking problem and might have to make frequent stops.","HQ called in and told us we were pinged on radar from Opfor on our airdrop and are watching small strike forces and armed aerial recon mobilize as we speak. HQ also gave us intel on Blufor rendezvous point where we will meet up with them and assault an airfield for exfil. After a quick brief with command comms went silent as Opfor started jamming out frequencies which meant only one thing.....they are coming!." };
            mission[] = {"Meet at rendezvous point","Extract via nearby airfield"};
            friendlyForces[] = {"Blufor-Unknown strength"};
            enemyForces[] = {"Russian and German battalions"};
            commandersIntent[] = {};
            movementPlan[] = {"Grab some wheels at a designated vehicle depot","Opfor Aerial recon have been spotted providing fire missions for artillery and missle boats. They have been giving accurate tageting positions and BDA and seen commonly making flight paths away from the main MSR but recently have been seen roaming closer looking for contacts. Stay on the main road till the meet point ","Keep in mind you will be driving mostly Opfor vehicles and need a way for Blufor to PID accurately"};
            fireSupportPlan[] = {};
            specialTasks[] = {};
            logistics[] = {"1xZU-23(Old Besse)","1xAmmo vlc"};
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
            AN_PRC_148[] = {};
            AN_PRC_152[] = {};
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
            AN_PRC_148[] = {"co", "dc", "ftl", "matl","m"};
            AN_PRC_152[] = {"co", "dc","matl","m"};
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
					{"CUP_U_B_GER_Tropentarn_1", .5},
					{"CFP_U_BattleDressUniform_Sword2", .5}
				};
                vests[] = {
					{"CUP_V_MBSS_PACA2_CB", .25},
					{"usm_vest_rba_lbe_gr", .25},
					{"CUP_V_O_Ins_Carrier_Rig", .5}
				};
                headgear[] = {
					{"CUP_H_OpsCore_Covered_Tropen", .30},
					{"CUP_H_RUS_6B47_SF_headset_goggles_desert", .30},
					{"CUP_H_RUS_K6_3_Shield_Up_khaki", .20},
					{"CUP_H_RUS_K6_3_Shield_Down_khaki", .20}
				};
                goggles[] = {};
                backpacks[] = {
					{"B_Kitbag_rgr", .5},
					{"", .5}
				};
                faces[] = {};
                voices[] = {};
                rifles[] = {
					{"SMG_03_khaki", .15},
					{"CUP_arifle_OTS14_GROZA_Grip", .20},
					{"arifle_AK12_arid_F", .30},
					{"arifle_RPK12_arid_F", .10},
					{"arifle_AK12U_arid_F", .25}
				};
                launchers[] = {
					{"CUP_launch_M136_Loaded", .2},
					{"", .8}
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
