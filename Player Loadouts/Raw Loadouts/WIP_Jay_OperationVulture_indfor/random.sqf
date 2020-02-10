private ["_uniforms", "_vests", "_headgears"];

_uniforms = [
  "CUP_U_C_Woodlander_01",
  "CUP_U_C_Woodlander_02",
  "CUP_U_C_Woodlander_03",
  "CUP_U_C_Woodlander_04",
  "CUP_U_I_GUE_Anorak_02",
  "CUP_U_I_GUE_Anorak_03",
  "U_I_C_Soldier_Bandit_2_F",
  "U_I_C_Soldier_Bandit_3_F",
  "U_BG_Guerrilla_6_1",
  "U_BG_Guerilla2_1",
  "U_BG_Guerilla2_3",
  "CUP_O_TKI_Khet_Partug_02",
  "CUP_O_TKI_Khet_Partug_04",
  "CUP_O_TKI_Khet_Partug_06",
  "CUP_O_TKI_Khet_Partug_08",
  "U_I_C_Soldier_Para_3_F",
  "U_I_C_Soldier_Para_4_F",
  "CUP_I_B_PMC_Unit_13",
  "CUP_I_B_PMC_Unit_3",
  "CUP_U_C_Rocker_02",
  "CUP_U_O_RUS_Gorka_Green",
  "CUP_U_O_TK_Green",
  "CUP_U_C_Villager_03"
];

_vests = [
  "V_BandollierB_blk",
  "V_BandollierB_cbr",
  "V_BandollierB_ghex_F",
  "V_BandollierB_rgr",
  "V_BandollierB_khk",
  "V_BandollierB_oli",
  "CUP_V_OI_TKI_Jacket2_01",
  "CUP_V_OI_TKI_Jacket2_02",
  "CUP_V_OI_TKI_Jacket2_03",
  "CUP_V_OI_TKI_Jacket2_04",
  "CUP_V_OI_TKI_Jacket2_05",
  "CUP_V_OI_TKI_Jacket2_06",
  "CUP_V_OI_TKI_Jacket3_01",
  "CUP_V_OI_TKI_Jacket3_02",
  "CUP_V_OI_TKI_Jacket3_03",
  "CUP_V_OI_TKI_Jacket3_04",
  "CUP_V_OI_TKI_Jacket3_05",
  "CUP_V_OI_TKI_Jacket3_06",
  "CUP_V_OI_TKI_Jacket5_01",
  "CUP_V_OI_TKI_Jacket5_02",
  "CUP_V_OI_TKI_Jacket5_03",
  "CUP_V_OI_TKI_Jacket5_04",
  "CUP_V_OI_TKI_Jacket5_05",
  "CUP_V_OI_TKI_Jacket5_06",
  "CUP_V_OI_TKI_Jacket6_01",
  "CUP_V_OI_TKI_Jacket6_02",
  "CUP_V_OI_TKI_Jacket6_03",
  "CUP_V_OI_TKI_Jacket6_04",
  "CUP_V_OI_TKI_Jacket6_05",
  "CUP_V_OI_TKI_Jacket6_06"
];

_headgears = [
  "CUP_H_TKI_Pakol_1_01",
  "CUP_H_TKI_Pakol_1_02",
  "CUP_H_TKI_Pakol_1_03",
  "CUP_H_TKI_Pakol_1_04",
  "CUP_H_TKI_Pakol_1_05",
  "CUP_H_TKI_Pakol_1_06",
  "CUP_H_TKI_Pakol_2_01",
  "CUP_H_TKI_Pakol_2_02",
  "CUP_H_TKI_Pakol_2_03",
  "CUP_H_TKI_Pakol_2_04",
  "CUP_H_TKI_Pakol_2_05",
  "CUP_H_TKI_Pakol_2_06"
];

this forceAddUniform selectRandom _uniforms;
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "HandGrenade";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_HandFlare_White";};

this addVest selectRandom _vests;

for "_i" from 1 to 2 do { this addItemToVest "CUP_8Rnd_9x18_Makarov_M"; };
this addWeapon "CUP_hgun_Makarov";

this addHeadgear selectRandom _headgears;

this linkItem "ItemMap";
this linkItem "ItemCompass";
