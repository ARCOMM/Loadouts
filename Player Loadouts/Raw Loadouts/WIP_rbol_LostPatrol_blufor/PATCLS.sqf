
comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam_vest";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_epinephrine";
this addItemToUniform "ACE_personalAidKit";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_17Rnd_9x19_glock17";};
this addVest "CUP_V_B_Eagle_SPC_Patrol";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_EMAG_Tan";};
this addItemToVest "SmokeShellPurple";
this addItemToVest "SmokeShellYellow";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_1Rnd_HE_M203";};
this addBackpack "CUP_B_MedicPack_ACU";
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_30Rnd_556x45_EMAG_Tan";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_1Rnd_HE_M203";};
this addItemToBackpack "SmokeShellRed";
this addItemToBackpack "SmokeShellGreen";
this addHeadgear "CUP_H_USMC_BOONIE_PRR_DES";
this addGoggles "G_Combat";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_BUIS_desert_GL";
this addPrimaryWeaponItem "CUP_muzzle_snds_G36_desert";
this addPrimaryWeaponItem "CUP_optic_Eotech533";
this addWeapon "CUP_hgun_Glock17";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
