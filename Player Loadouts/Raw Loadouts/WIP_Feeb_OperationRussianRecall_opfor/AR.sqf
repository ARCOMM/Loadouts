comment "Add containers";
this forceAddUniform "CUP_U_O_RUS_Flora_1";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
this addVest "CUP_V_RUS_6B3_1";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addItemToVest "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
this addBackpack "usm_pack_alice";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";};
this addHeadgear "CUP_H_RUS_6B27";

comment "Add weapons";
this addWeapon "CUP_lmg_PKM";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_11";
this setSpeaker "ace_novoice";
