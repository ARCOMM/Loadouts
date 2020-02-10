this forceAddUniform "MNP_CombatUniform_Ranger_A";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_Eagle_SPC_SL";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 5 do {this addItemToVest "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 2 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Green";};
this addItemToVest "SmokeShell";
this addItemToVest "CUP_HandGrenade_M67";
this addHeadgear "CUP_H_CZ_Helmet09";

comment "Add weapons";
this addWeapon "CUP_arifle_M16A4_GL";
this addPrimaryWeaponItem "CUP_acc_Flashlight";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

