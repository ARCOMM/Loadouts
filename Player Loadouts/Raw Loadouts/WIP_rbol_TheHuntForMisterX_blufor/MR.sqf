
comment "Add weapons";
this addWeapon "CUP_arifle_HK417_20";
this addPrimaryWeaponItem "hlc_muzzle_300blk_KAC";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_15_Flashlight_Black_L";
this addPrimaryWeaponItem "optic_Arco_AK_blk_F";
this addPrimaryWeaponItem "CUP_20Rnd_762x51_HK417";
this addWeapon "hlc_Pistol_P228";
this addHandgunItem "HLC_optic228_VTAC";
this addHandgunItem "hlc_13Rnd_9x19_B_P228";

comment "Add containers";
this forceAddUniform "MNP_CombatUniform_PPU_A";
this addVest "skn_b_nbc_xrt_tac_blk";
this addBackpack "B_AssaultPack_blk";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {this addItemToUniform "hlc_13Rnd_9x19_B_P228";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_20Rnd_762x51_HK417";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_20Rnd_762x51_HK417";};
this addItemToVest "SmokeShellYellow";
this addItemToVest "SmokeShellRed";
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_20Rnd_762x51_HK417";};
for "_i" from 1 to 4 do {this addItemToBackpack "hlc_13Rnd_9x19_B_P228";};
this addItemToBackpack "SmokeShellRed";
this addItemToBackpack "SmokeShellYellow";
this addHeadgear "CUP_H_USArmy_Helmet_ECH1_Black";
this addGoggles "CUP_G_PMC_Facewrap_Black_Glasses_Dark";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

