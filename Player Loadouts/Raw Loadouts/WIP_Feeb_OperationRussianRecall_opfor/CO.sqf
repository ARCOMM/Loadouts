comment "Add containers";
this forceAddUniform "CUP_U_O_RUS_Flora_1";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
this addVest "CUP_V_RUS_6B3_1";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_545x39_AK_M";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M";};
this addBackpack "usm_pack_alice";
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_1Rnd_HE_GP25_M";};
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_1Rnd_SMOKE_GP25_M";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_1Rnd_SmokeRed_GP25_M";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_1Rnd_SmokeGreen_GP25_M";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShellGreen";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShellRed";};
this addHeadgear "CUP_H_RUS_6B27";

comment "Add weapons";
this addWeapon "CUP_arifle_AK74M_GL";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_11";
this setSpeaker "ace_novoice";
