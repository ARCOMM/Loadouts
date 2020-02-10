this forceAddUniform "MNP_CombatUniform_CZ_B";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "16Rnd_9x21_Mag";

this addVest "MNP_Vest_CZ_2";
for "_i" from 1 to 6 do {this addItemToVest "hlc_50Rnd_762x51_B_MG3";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};

this addBackpack "B_FieldPack_oli";
for "_i" from 1 to 6 do {this addItemToBackpack "hlc_50Rnd_762x51_B_MG3";};

this addHeadgear "MNP_Helmet_CZ";

comment "Add weapons";
this addWeapon "hlc_lmg_MG3";
this addWeapon "CUP_hgun_Duty";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";