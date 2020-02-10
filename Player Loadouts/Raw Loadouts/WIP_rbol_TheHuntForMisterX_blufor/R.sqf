
comment "Add weapons";
this addWeapon "CUP_arifle_M4A3_black";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_15_Flashlight_Black_L";
this addPrimaryWeaponItem "optic_Aco_smg";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";
this addWeapon "hlc_Pistol_P228";
this addHandgunItem "HLC_optic228_VTAC";
this addHandgunItem "hlc_13Rnd_9x19_B_P228";

comment "Add containers";
this forceAddUniform "MNP_CombatUniform_PPU_A";
this addVest "skn_b_nbc_xrt_tac_blk";
this addBackpack "B_AssaultPack_blk";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "hlc_13Rnd_9x19_B_P228";};
for "_i" from 1 to 3 do {this addItemToUniform "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToVest "hlc_13Rnd_9x19_B_P228";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellYellow";
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_fieldDressing";};
this addItemToBackpack "ACE_morphine";
this addItemToBackpack "ACE_CableTie";
this addItemToBackpack "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_13Rnd_9x19_B_P228";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_30Rnd_556x45_Stanag";};
this addHeadgear "CUP_H_USArmy_Helmet_ECH1_Black";
this addGoggles "CUP_G_PMC_Facewrap_Black_Glasses_Dark";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
