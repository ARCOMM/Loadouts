this AddUniform "CUP_U_B_US_BDU_winter_WoodlandBottom";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_PASGT_winter";
this addItemToVest "CUP_HandGrenade_RGD5";
this addItemToVest "SmokeShell";
for "_i" from 1 to 6 do {this addItemToVest "hlc_30Rnd_545x39_B_AK";};
this addBackpack "CUP_B_AlicePack_OD";
for "_i" from 1 to 4 do {this addItemToBackpack "hlc_VOG25_AK";};
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_GRD_White";};
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_GRD_Red";};
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_GRD_green";};
this addHeadgear "CUP_H_US_H_PASGT_winter";

comment "Add weapons";
this addWeapon "hlc_rifle_aks74_GL";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

