this forceAddUniform "MNP_CombatUniform_ISR";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "16Rnd_9x21_Mag";
this addVest "MNP_Vest_ISRKahki_1";
for "_i" from 1 to 2 do {this addItemToVest "16Rnd_9x21_Mag";};
this addItemToVest "SmokeShell";
this addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 5 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Yellow";};
this addBackpack "B_Carryall_oli";
for "_i" from 1 to 35 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 12 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 2 do {this addItemToBackpack "30Rnd_556x45_Stanag";};
this addHeadgear "H_HelmetSpecB";
this addGoggles "G_Combat";
this addWeapon "arifle_TRG21_F";
this addPrimaryWeaponItem "optic_Holosight_blk_F";
this addWeapon "hgun_P07_F";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";