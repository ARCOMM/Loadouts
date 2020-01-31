comment "Add containers";
this forceAddUniform "U_BG_Guerilla3_1";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACRE_PRC152";
this addVest "V_I_G_resistanceLeader_F";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_545x39_AK_M";};
this addBackpack "CUP_B_AlicePack_Bedroll";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_1Rnd_HE_GP25_M";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_HandGrenade_RGO";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShell";};
this addHeadgear "CUP_H_RUS_6B27_olive";
this addGoggles "G_Aviator";

comment "Add weapons";
this addWeapon "CUP_arifle_AK74_GL";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
