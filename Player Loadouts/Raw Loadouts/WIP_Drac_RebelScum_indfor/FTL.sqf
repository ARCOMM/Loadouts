comment "Add containers";
this forceAddUniform "CUP_U_C_Villager_03";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addVest "V_LegStrapBag_coyote_F";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_545x39_AK_M";};
this addBackpack "CUP_B_AlicePack_Bedroll";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_VOG25_AK";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_1Rnd_HE_GP25_M";};
this addItemToBackpack "CUP_HandGrenade_RGO";
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShell";};
this addHeadgear "H_Cap_grn";
this addGoggles "G_Aviator";

comment "Add weapons";
this addWeapon "CUP_arifle_AK74_GL";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
