comment "Add containers";
this forceAddUniform selectRandom ["CUP_I_B_PMC_Unit_23", "CUP_U_O_CHDKZ_Lopotev", "CUP_I_B_PMC_Unit_5", "CUP_I_B_PMC_Unit_14"];
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "MNP_Vest_NZ_1";
this addItemToVest "CUP_HandGrenade_RGD5";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellRed";};
this addItemToVest "SmokeShellGreen";
for "_i" from 1 to 5 do {this addItemToVest "hlc_20Rnd_762x51_B_fal";};
for "_i" from 1 to 2 do {this addItemToVest "hlc_20Rnd_762x51_T_fal";};
this addItemToVest "9Rnd_45ACP_Mag";
this addHeadgear "H_HelmetB_camo";

comment "Add weapons";
this addWeapon "hlc_rifle_FAL5000Rail";
this addPrimaryWeaponItem "optic_Yorris";
this addWeapon "hgun_ACPC2_F";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
