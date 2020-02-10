
comment "Add weapons";
this addWeapon "LMG_Mk200_F";
this addPrimaryWeaponItem "optic_Aco_smg";
this addPrimaryWeaponItem "200Rnd_65x39_cased_Box";
this addWeapon "hlc_Pistol_P228";
this addHandgunItem "HLC_optic228_VTAC";
this addHandgunItem "hlc_13Rnd_9x19_B_P228";

comment "Add containers";
this forceAddUniform "MNP_CombatUniform_PPU_A";
this addVest "skn_b_nbc_xrt_tac_blk";
this addBackpack "B_AssaultPack_blk";

comment "Add items to containers";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {this addItemToUniform "hlc_13Rnd_9x19_B_P228";};
this addItemToVest "200Rnd_65x39_cased_Box";
for "_i" from 1 to 3 do {this addItemToVest "hlc_13Rnd_9x19_B_P228";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellYellow";
this addItemToBackpack "ACE_tourniquet";
this addItemToBackpack "ACE_EarPlugs";
this addItemToBackpack "ACE_CableTie";
for "_i" from 1 to 3 do {this addItemToBackpack "200Rnd_65x39_cased_Box";};
this addHeadgear "CUP_H_USArmy_Helmet_ECH1_Black";
this addGoggles "CUP_G_PMC_Facewrap_Black_Glasses_Dark";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
