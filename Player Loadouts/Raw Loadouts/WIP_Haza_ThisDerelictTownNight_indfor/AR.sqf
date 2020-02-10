this forceAddUniform "MNP_CombatUniform_Ukrainian";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_Fortify";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "16Rnd_9x21_Mag";};

this addVest "MNP_Vest_UKR_B";
this addItemToVest "CUP_HandGrenade_RGD5";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};

this addBackpack "B_FieldPack_oli";
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
this addHeadgear "MNP_Helmet_PAGST_UKR";

comment "Add weapons";
this addWeapon "hlc_rifle_RPK12";
this addPrimaryWeaponItem "CUP_optic_TrijiconRx01_black";
this addPrimaryWeaponItem "CUP_acc_Flashlight";
this addWeapon "hgun_Rook40_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
