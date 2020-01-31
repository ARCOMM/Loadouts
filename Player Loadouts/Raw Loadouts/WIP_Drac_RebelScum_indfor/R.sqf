comment "Add containers";
this forceAddUniform "CUP_U_C_Woodlander_03";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_Banana";
this addVest "V_HarnessO_ghex_F";
this addItemToVest "CUP_HandGrenade_RGO";
this addItemToVest "SmokeShell";
this addBackpack "CUP_B_AlicePack_Bedroll";
for "_i" from 1 to 5 do {this addItemToBackpack "hlc_30Rnd_762x39_b_ak";};
this addHeadgear "H_ShemagOpen_tan";
this addGoggles "G_Aviator";

comment "Add weapons";
this addWeapon "CUP_arifle_AK47";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
