this forceAddUniform "CUP_U_B_US_BDU_winter_WoodlandBottom";
for "_i" from 1 to 2 do {this addItemToUniform "hlc_30Rnd_545x39_B_AK";};
this addVest "CUP_V_B_PASGT_winter";
for "_i" from 1 to 6 do {this addItemToVest "hlc_30Rnd_545x39_B_AK";};
this addItemToVest "CUP_HandGrenade_RGD5";
this addItemToVest "SmokeShell";
this addBackpack "CUP_B_AlicePack_OD";
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_fieldDressing";};
this addHeadgear "CUP_H_US_H_PASGT_winter";

comment "Add weapons";
this addWeapon "hlc_rifle_aks74";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

