this forceAddUniform "CUP_U_O_RUS_Flora_1";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_8Rnd_9x18_Makarov_M";};
this addVest "MNP_Vest_RU_T2";
this addItemToVest "CUP_HandGrenade_M67";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 7 do {this addItemToVest "hlc_30Rnd_545x39_B_AK";};
for "_i" from 1 to 3 do {this addItemToVest "hlc_30Rnd_545x39_t_ak";};
this addBackpack "MNP_B_RU1_FP";
for "_i" from 1 to 40 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_tourniquet";};
this addHeadgear "MNP_Helmet_RU_LT";
this addWeapon "hlc_rifle_ak12";
this addWeapon "CUP_hgun_Makarov";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
[this,"MedB"] call bis_fnc_setUnitInsignia;