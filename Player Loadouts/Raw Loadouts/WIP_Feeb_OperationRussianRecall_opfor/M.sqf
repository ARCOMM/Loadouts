comment "Add containers";
this forceAddUniform "CUP_U_O_RUS_Flora_1";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
this addVest "CUP_V_RUS_6B3_1";
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_545x39_AK_M";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addBackpack "usm_pack_alice";
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
this addHeadgear "CUP_H_RUS_6B27";

comment "Add weapons";
this addWeapon "CUP_arifle_AK74M";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_11";
this setSpeaker "ace_novoice";
