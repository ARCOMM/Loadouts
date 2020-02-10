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
                "Following a botched election the small island nation of Altis was thrown into turmoil. The new alatian government tried to contain the situation with martial law and waves of arrests. This ignited a revolution in the southern parts of the country. What followed was a short but very bloody civil war. The soviet friendly APP (Alatian Peoples Party) came out on top in this confrontation.",
                "Less than a week after the APP seized power they started to dismantle foreign assets on the island. When the United States government filed complaints they were at first ignored and once the american consul lodged a formal complaint he was arrested. The situation has only escalated since. The Alatians have received military support from both the Soviet and Cuban governments. The Cubans even sent soldiers over to help keep the peace.",
                "The president signed an order less than 24 hours ago approving the invasion of Altis. Our company landed three hours ago and have been gearing up for the assault on the capital since."
};

            mission[] = {
                "Our Company has received the honour of capturing the enemy capital, Kavala. This is where most of the enemy forces are located but it's also the seat of their leadership. According to intelligence this is also where they are holding the captured Consul as well as several other foreigners.",
                "Our primary objectives are as follows:",
                "- Find and liberate the captured Consul, we know the consul received a head wound during his apprehension. Transport him and any other civilians you liberate back to the staging area. We aren't entierly sure where the Consul is located but he is bound to be at one of the larger government buildings in the city.",
                "- Capture the acting president and leader of the APP, Esteban Rodriguez. Mr. Rodriguez is most likely located at the presidential estate. If capture is impossible, at least recover his remains.",
                "- Capture or kill the leader of the Alatian military forces. General José Ortega. The general has taken a liking to the large ruin of Kastro on the western coast of the city. He and most of the Cuban forces in the city are located here.",
                "Secondary Objectives:",
                "Clear out the military compound and neutralize any armored vehicles you encounter."
    };
            friendlyForces[] = {
                "A company of the United States Marine Corp. Attached to the company is either a medium mortar team and a recon team or two light support helicopters."
            };
            enemyForces[] = {
                "A large number of Alatian and Cuban forces are stationed in the city. The Alatian government has received a small number of BTR-60PB APCs from the Soviet union. They have also received a number of DShKM heavy machine guns, heavy mortars and RPG-7.",
                "The new government also seized the TV and radio station close to the hospital. It seems like they are using the building as some sort of prison facility."
            };
            commandersIntent[] = {};
            movementPlan[] = {
                "Our area of operation is the city itself. The surrounding area is being handled by army units. SF units who passed through the hills east of the city some time ago took accurate mortar fire. We assume there to be spotters in the hills.",
                "The hospital and the area around it is currently housing most of the areas civilians. As such this area is not to be entered unless absolutely necessary."                
            };
            fireSupportPlan[] = {
                "There are a lot of enemy HMG emplacements through out the city and the surrounding countryside. There might even be Anti-Air sites to the east and south of the town.",
                "As previously stated the area around the hospital is a refugee zone. Both mortars and Helicopters are forbidden to open fire upon that area."
            };
            specialTasks[] = {};
            logistics[] = {};
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
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"CUP_U_O_RUS_Flora_2", 1.0}
                };
                vests[] = {
                    {"CUP_V_O_TK_Vest_1", 1.0}
                };
                headgear[] = {
                    {"CUP_H_SLA_Helmet", 1.0}
                };
                goggles[] = {};
                backpacks[] = {};
                faces[] = {};
                voices[] = {};
                rifles[] = {
                    {"hlc_rifle_ak74", 0.6},
                    {"hlc_rifle_aks74", 0.3},
                    {"hlc_rifle_rpk74n", 0.1}
                };
                launchers[] = {
                    {"CUP_launch_RPG18", 0.1},
                    {"", 0.9}
                };
                attachments[] = {};
            };
            class INDFOR {
                enabled = true;
                removeNightVision = true;
                removeMedicalItems = true;
                prioritizeTracerMags = true;
                uniforms[] = {
                    {"MNP_CombatUniform_DDPMR", 1.0}
                };
                vests[] = {
                    {"usm_vest_LBE_rm", 0.50},
                    {"usm_vest_LBE_mg", 0.20}
                };
                headgear[] = {
                    {"MNP_Boonie_DDPM", 0.40},
                    {"MNP_Helmet_PAGST_US3Co", 0.50},
                    {"", 0.10}
                };
                goggles[] = {
                    {"CUP_TK_NeckScarf", 0.20},
                    {"", 0.80}
                };
                backpacks[] = {
                    {"usm_pack_762x51_ammobelts", 0.20},
                    {"", 0.80}
                };
                faces[] = {             
                };
                voices[] = {};
                rifles[] = {
                    {"hlc_rifle_ak47", 0.3},
                    {"hlc_rifle_akm", 0.4},
                    {"hlc_rifle_rpk", 0.1},
                    {"CUP_lmg_PKM", 0.1},
                    {"CUP_srifle_M14", 0.1}
                };
                launchers[] = {
                    {"CUP_launch_RPG18", 0.1},
                    {"", 0.9}
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
