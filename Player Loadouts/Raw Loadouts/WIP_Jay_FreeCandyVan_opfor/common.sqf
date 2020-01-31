private ["_headgear", "_goggles", "_uniform", "_vest", "_weapon"];

_headgear = "";

_goggles = selectRandom [
  "G_Balaclava_blk",
  "G_Balaclava_oli"
];

_uniform = selectRandom [
  "U_BG_Guerrilla_6_1",
  "U_BG_Guerilla1_1",
  "U_BG_Guerilla2_1",
  "U_BG_Guerilla2_3",
  "U_BG_Guerilla3_1",
  "U_BG_leader",
  "U_I_G_Story_Protagonist_F",
  "U_I_C_Soldier_Bandit_2_F",
  "U_I_C_Soldier_Bandit_3_F",
  "U_I_C_Soldier_Para_1_F",
  "U_I_C_Soldier_Para_2_F",
  "U_I_C_Soldier_Para_3_F",
  "U_I_C_Soldier_Para_4_F",
  "U_I_C_Soldier_Camo_F",
  "MNP_CombatUniform_ASA_GC",
  "MNP_CombatUniform_ASA_GC_B",
  "MNP_CombatUniform_Militia_DE",
  "CUP_I_B_PMC_Unit_13",
  "CUP_I_B_PMC_Unit_3",
  "CUP_I_B_PMC_Unit_7",
  "CUP_I_B_PMC_Unit_23",
  "CUP_U_C_Rocker_02",
  "CUP_U_O_TK_MixedCamo"
];

_vest = selectRandom [
  "CUP_V_B_Eagle_SPC_Scout",
  "CUP_V_B_Eagle_SPC_Rifleman",
  "CUP_V_B_Eagle_SPC_DMR",
  "CUP_V_B_Eagle_SPC_Crew",
  "CUP_V_BAF_Osprey_Mk2_DPM_Soldier1",
  "CUP_V_BAF_Osprey_Mk2_DPM_Empty",
  "V_TacVest_blk",
  "V_TacVest_brn",
  "V_TacVest_camo",
  "V_TacVest_khk",
  "V_TacVest_oli",
  "V_I_G_resistanceLeader_F"
];

_weapon = selectRandom [
  ["hlc_rifle_RK62", "hlc_30Rnd_762x39_t_ak"],
  ["hlc_rifle_aek971worn", "hlc_30Rnd_545x39_t_ak"],
  ["hlc_rifle_aek971worn", "hlc_30Rnd_545x39_t_ak"],
  ["hlc_rifle_aek971worn", "hlc_30Rnd_545x39_t_ak"],
  ["hlc_rifle_akm", "hlc_30Rnd_762x39_t_ak"],
  ["hlc_rifle_akm", "hlc_30Rnd_762x39_t_ak"],
  ["hlc_rifle_akm", "hlc_30Rnd_762x39_t_ak"],
  ["hlc_rifle_rpk", "hlc_45Rnd_762x39_t_rpk"],
  ["hlc_rifle_ak47", "hlc_30Rnd_762x39_t_ak"],
  ["hlc_rifle_ak47", "hlc_30Rnd_762x39_t_ak"],
  ["hlc_rifle_ak47", "hlc_30Rnd_762x39_t_ak"],
  ["hlc_rifle_honeybadger", "29rnd_300BLK_STANAG_T"]
];

this forceAddUniform _uniform;
this addItemToUniform "CUP_17Rnd_9x19_glock17";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "SmokeShell";
this addItemToUniform "MiniGrenade";
this addItemToUniform "ACE_CableTie";
this addVest _vest;
for "_i" from 1 to 7 do {this addItemToVest (_weapon select 1);};
this addGoggles _goggles;
this addWeapon (_weapon select 0);
this addWeapon "CUP_hgun_Glock17_blk";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
