this forceAddUniform "CUP_U_B_US_BDU_winter_WoodlandBottom";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_PASGT_winter";
this addItemToVest "CUP_HandGrenade_RGD5";
this addItemToVest "SmokeShell";
for "_i" from 1 to 2 do {this addItemToVest "hlc_75Rnd_762x39_m_rpk";};
this addBackpack "CUP_B_AlicePack_OD";
for "_i" from 1 to 5 do {this addItemToBackpack "hlc_75Rnd_762x39_m_rpk";};
this addHeadgear "CUP_H_US_H_PASGT_winter";

comment "Add weapons";
this addWeapon "hlc_rifle_rpk";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
