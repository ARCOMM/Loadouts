
comment "Add weapons";
this addWeapon "CUP_arifle_M4A3_desert";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";

comment "Add containers";
this forceAddUniform "Flora1";
this addVest "CUP_V_CZ_NPP2006_nk_vz95";
this addBackpack "CFP_AssaultPack_M81";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_epinephrine";
this addItemToUniform "ACE_morphine";
this addItemToVest "ACE_Fortify";
this addItemToVest "ACE_EntrenchingTool";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};

this addItemToBackpack "ACE_Flashlight_XL50";
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_salineIV_250";};
this addHeadgear "H_HelmetB_snakeskin";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";



