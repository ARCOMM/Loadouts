this forceAddUniform "CUP_U_B_CDF_FST_1";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";

this addVest "CUP_V_CDF_6B3_1_FST";
for "_i" from 1 to 3 do {this addItemToVest "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 3 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 5 do {this addItemToVest "hlc_30Rnd_545x39_B_AK";};
for "_i" from 1 to 2 do {this addItemToVest "hlc_30Rnd_545x39_t_ak";};

this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};

this addHeadgear "CUP_H_RUS_6B27_NVG_olive";

comment "Add weapons";
this addWeapon "hlc_rifle_ak74";
this addWeapon "hgun_Pistol_01_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";

comment "Set identity";
[this,"MedB"] call bis_fnc_setUnitInsignia;
