comment "Add containers";
this forceAddUniform "CUP_U_O_RUS_Flora_1";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
this addVest "CUP_V_CDF_6B3_1_Green";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_30Rnd_545x39_AK_M";};
this addHeadgear "CUP_H_TK_TankerHelmet";

comment "Add weapons";
this addWeapon "CUP_arifle_AKS74U";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_11";
this setSpeaker "ace_novoice";
