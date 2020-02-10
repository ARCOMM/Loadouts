_uniforms = [
  "CUP_I_B_PMC_Unit_24",
  "MNP_CombatUniform_Rebel_B",
  "U_BG_Guerilla2_3",
  "CUP_U_I_GUE_Anorak_02",
  "CUP_U_I_GUE_Anorak_03",
  "CUP_U_O_CHDKZ_Lopotev"
];

_headgears = [
  "CUP_H_PMC_Cap_Back_EP_Tan",
  "CUP_H_PMC_Cap_Back_EP_Grey",
  "CUP_H_PMC_Cap_Back_PRR_Tan",
  "CUP_H_PMC_Cap_Back_PRR_Grey"
];

this forceAddUniform selectRandom _uniforms;
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_CableTie";
this addItemToUniform "16Rnd_9x21_Mag";
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
this addVest "CUP_V_PMC_CIRAS_Black_Patrol";
for "_i" from 1 to 3 do {this addItemToVest "hlc_60Rnd_545x39_t_rpk";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
this addHeadgear selectRandom _headgears;
this addGoggles "G_Balaclava_blk";
this addWeapon "hlc_rifle_ak12";
this addPrimaryWeaponItem "hlc_muzzle_545SUP_AK";
this addPrimaryWeaponItem "optic_Holosight_blk_F";
this addItemToVest "hlc_60Rnd_545x39_t_rpk";
this addWeapon "hgun_Rook40_F";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "arcore_nightvision_Gen5";
