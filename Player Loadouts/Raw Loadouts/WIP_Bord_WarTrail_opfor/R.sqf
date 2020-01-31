this forceAddUniform "CUP_U_O_RUS_VSR93_worn_MSV";
this addVest "CUP_V_RUS_6B3_1";
this removeItems "ACE_morphine";
this removeItems "ACE_fieldDressing";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";

for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 10 do {this addItemToVest "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M";};
this addHeadgear "CUP_H_RUS_6B27";
this addWeapon "CUP_arifle_AK74M";
this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this addGoggles "CUP_RUS_Balaclava_grn";