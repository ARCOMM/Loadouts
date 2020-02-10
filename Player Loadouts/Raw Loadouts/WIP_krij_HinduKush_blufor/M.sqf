this forceAddUniform "CUP_O_TKI_Khet_Partug_01";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_Delta_2";
for "_i" from 1 to 8 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
this addBackpack "usm_pack_m5_medic";
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
this addHeadgear "CUP_H_TKI_Pakol_2_06";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_desert";
this addPrimaryWeaponItem "CUP_acc_Flashlight_desert";
this addPrimaryWeaponItem "CUP_optic_CompM2_Desert";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

