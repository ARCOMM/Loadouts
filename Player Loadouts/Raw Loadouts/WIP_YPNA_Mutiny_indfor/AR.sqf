this forceAddUniform "CUP_U_B_CDF_FST_2";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";

this addVest "CUP_V_CDF_6B3_3_FST";
for "_i" from 1 to 3 do {this addItemToVest "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addItemToVest "10Rnd_9x21_Mag";

this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};

this addHeadgear "CUP_H_RUS_6B27";

comment "Add weapons";
this addWeapon "hlc_rifle_rpk74n";
this addWeapon "hgun_Pistol_01_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
