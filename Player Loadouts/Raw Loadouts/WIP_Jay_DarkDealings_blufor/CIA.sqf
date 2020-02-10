
_uniforms = [
  "U_BG_Guerilla2_1",
  "U_BG_Guerilla2_2",
  "U_BG_Guerilla2_3",
  "CUP_U_B_BAF_MTP_Tshirt",
  "U_I_C_Soldier_Bandit_3_F"
];

this forceAddUniform selectRandom _uniforms;
this addItemToUniform "hlc_12Rnd_40SW_B_P226";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_Flashlight_XL50";
this addVest "V_PlateCarrier1_blk";
for "_i" from 1 to 5 do {this addItemToVest "hlc_20Rnd_762x51_B_M14";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addHeadgear "CUP_H_PMC_Cap_Back_EP_Grey";
this addGoggles "G_Bandanna_sport";
this addWeapon "hlc_rifle_m14sopmod";
this addPrimaryWeaponItem "muzzle_snds_B";
this addPrimaryWeaponItem "CUP_optic_CompM2_Black";
this addWeapon "hlc_pistol_P226R_40Elite";
this linkItem "ItemMap";
this linkItem "ItemGPS";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
