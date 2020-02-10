
comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam_vest";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToUniform "CUP_17Rnd_9x19_glock17";};
this addVest "CUP_V_B_Eagle_SPC_Patrol";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_EMAG_Tan";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_1Rnd_HE_M203";};
this addItemToVest "SmokeShellGreen";
this addItemToVest "SmokeShellRed";
this addBackpack "CUP_B_AssaultPack_Coyote";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_HandGrenade_M67";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_30Rnd_556x45_EMAG_Tan";};
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
