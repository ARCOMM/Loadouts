comment "Add weapons";
this addWeapon "CUP_arifle_M4A3_camo";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";
this addWeapon "CUP_launch_Javelin";
this addSecondaryWeaponItem "CUP_Javelin_M";

comment "Add containers";
this forceAddUniform "CFP_RAID_DBDU_1";
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
this addBackpack "CUP_B_USPack_Coyote";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_epinephrine";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShellYellow";
this addItemToVest "SmokeShell";
this addItemToBackpack "ACE_Fortify";
this addItemToBackpack "ACE_EntrenchingTool";
this addItemToBackpack "CUP_Javelin_M";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_30Rnd_556x45_Stanag";};
this addHeadgear "usm_helmet_pasgt_dcu";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "CUP_NVG_GPNVG_tan";