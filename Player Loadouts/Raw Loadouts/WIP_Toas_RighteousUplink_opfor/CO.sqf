
this forceAddUniform "MNP_CombatUniform_RU_Med";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACRE_PRC148";
this addItemToUniform "ACRE_PRC152";
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_CableTie";};
this addVest "MNP_Vest_RU_T2";
this addItemToVest "ACE_M84";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 9 do {this addItemToVest "hlc_30Rnd_545x39_B_AK";};
this addBackpack "B_Kitbag_sgg";
this addItemToBackpack "CUP_1Rnd_HE_GP25_M";
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_1Rnd_SmokeRed_GP25_M";};
this addHeadgear "MNP_Helmet_RU_LT";
this addGoggles "G_Bandanna_blk";

comment "Add weapons";
this addWeapon "hlc_rifle_ak12GL";
this addWeapon "CUP_hgun_Duty";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
