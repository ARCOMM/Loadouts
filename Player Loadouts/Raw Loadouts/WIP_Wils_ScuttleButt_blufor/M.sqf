this forceAddUniform "MNP_CombatUniform_NOR_B";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_personalAidKit";
this addItemToUniform "ACE_tourniquet";
 for "_i" from 1 to 3 do {this addItemToVest "CUP_18Rnd_9x19_Phantom";};
this addVest "MNP_Vest_NOR_2";
for "_i" from 1 to 7 do {this addItemToVest "ACE_30Rnd_556x45_Stanag_Mk318_mag";};
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
this addItemToVest "CUP_HandGrenade_M67";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addBackpack "B_Kitbag_rgr";
for "_i" from 1 to 40 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_tourniquet";};
this addHeadgear "MNP_Helmet_DS";
this addGoggles "G_Bandanna_khk";
this addWeapon "arifle_SPAR_01_blk_F";
this addPrimaryWeaponItem "CUP_optic_CompM4";
this addWeapon "CUP_hgun_Phantom";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
[this,"MedB"] call bis_fnc_setUnitInsignia;
