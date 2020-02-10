this forceAddUniform "MNP_CombatUniform_CZ_B";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "16Rnd_9x21_Mag";

this addVest "MNP_Vest_CZ_1";
for "_i" from 1 to 3 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 4 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 8 do {this addItemToVest "ACE_30Rnd_556x45_Stanag_M995_AP_mag";};

this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};

this addHeadgear "MNP_Helmet_CZ";

comment "Add weapons";
this addWeapon "CUP_arifle_CZ805_A2";
this addPrimaryWeaponItem "CUP_optic_ZDDot";
this addWeapon "CUP_hgun_Duty";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

comment "Set identity";
[this,"MedB"] call bis_fnc_setUnitInsignia;
