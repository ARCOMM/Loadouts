comment "Add containers";
this forceAddUniform "CUP_I_B_PMC_Unit_17";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addVest "MNP_Vest_NZ_1";
this addItemToVest "CUP_8Rnd_9x18_Makarov_M";
for "_i" from 1 to 7 do {this addItemToVest "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addBackpack "B_Kitbag_mcamo";
for "_i" from 1 to 40 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 12 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_tourniquet";};
this addHeadgear "H_HelmetB_camo";

comment "Add weapons";
this addWeapon "CUP_arifle_AK74M";
this addWeapon "CUP_hgun_Makarov";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
[this,"MedA"] call bis_fnc_setUnitInsignia;
