this forceAddUniform "CUP_O_TKI_Khet_Partug_07";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_O_TK_Vest_1";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_545x39_AK_M";};
this addBackpack "CUP_B_RPGPack_Khaki";
this addItemToBackpack "CUP_PG7V_M";

comment "Add weapons";
this addWeapon "CUP_arifle_AKS74U";
this addWeapon "CUP_launch_RPG7V";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

