this forceAddUniform "U_C_IDAP_Man_Jeans_F";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "30Rnd_762x39_Mag_F";};
this addVest "CUP_V_O_TK_Vest_1";
for "_i" from 1 to 7 do {this addItemToVest "30Rnd_762x39_Mag_F";};
this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
this addItemToVest "CUP_HandGrenade_M67";
this addHeadgear "H_ShemagOpen_tan";

comment "Add weapons";
this addWeapon "arifle_AKM_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

