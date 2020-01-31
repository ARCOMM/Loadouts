
comment "Add weapons";
this addWeapon "LMG_Mk200_F";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "200Rnd_65x39_cased_Box_Red";
this addPrimaryWeaponItem "bipod_01_F_snd";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CFP_RAID_DBDU_1";
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
this addBackpack "B_AssaultPack_cbr";

comment "Add items to containers";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_CableTie";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_EarPlugs";
this addItemToVest "SmokeShellYellow";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
this addItemToVest "ACE_M84";
for "_i" from 1 to 2 do {this addItemToVest "200Rnd_65x39_cased_Box_Red";};
this addItemToBackpack "SmokeShell";
this addItemToBackpack "CUP_HandGrenade_M67";
this addItemToBackpack "SmokeShellYellow";
for "_i" from 1 to 2 do {this addItemToBackpack "200Rnd_65x39_cased_Box_Red";};
this addHeadgear "usm_helmet_pasgt_dcu";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "CUP_NVG_GPNVG_tan";