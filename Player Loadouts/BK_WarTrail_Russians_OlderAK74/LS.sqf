this forceAddUniform "CUP_U_O_RUS_VSR93_worn_gloves_MSV";
this addVest "CUP_V_RUS_6B3_1";
this removeItems "ACE_morphine";
this removeItems "ACE_fieldDressing";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_EntrenchingTool";
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 10 do {this addItemToVest "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M";};
this addBackpack "CUP_B_RUS_Pack_Engineer";
clearAllItemsFromBackpack this;
this addItemToBackpack "Toolkit";
this addHeadgear "CUP_H_RUS_6B27";
this addWeapon "CUP_arifle_AKS74U";
this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";