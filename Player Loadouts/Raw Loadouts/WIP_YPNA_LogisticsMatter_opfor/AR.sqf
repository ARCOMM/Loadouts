this forceAddUniform "MNP_CombatUniform_RO_Rg";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "16Rnd_9x21_Mag";};

this addVest "MNP_Vest_RU_T2";
for "_i" from 1 to 4 do {this addItemToVest "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};

this addBackpack "B_FieldPack_oli";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
this addHeadgear "MNP_Helmet_PAGST_RO";

comment "Add weapons";
this addWeapon "hlc_rifle_RPK12";
this addWeapon "hgun_Rook40_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
