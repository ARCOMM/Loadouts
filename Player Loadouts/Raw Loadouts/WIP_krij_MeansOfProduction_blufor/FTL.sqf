
this forceAddUniform "CUP_O_TKI_Khet_Partug_01";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 7 do {this addItemToUniform "CUP_30Rnd_556x45_Stanag";};
this addVest "CUP_V_B_RRV_Scout2";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
this addItemToVest "CUP_30Rnd_556x45_Stanag";
this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_1Rnd_Smoke_M203";};
this addHeadgear "CUP_H_TKI_Pakol_2_06";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_BUIS_desert_GL";
this addPrimaryWeaponItem "CUP_acc_Flashlight_desert";
this addPrimaryWeaponItem "CUP_optic_CompM2_Desert";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
