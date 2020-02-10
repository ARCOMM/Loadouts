this forceAddUniform "CUP_U_B_CZ_DST_Kneepads_Sleeve";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_CZ_vest16";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_G36";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_30Rnd_TE1_Red_Tracer_556x45_G36";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addHeadgear "CUP_H_CZ_Helmet10";

comment "Add weapons";
this addWeapon "CUP_arifle_CZ805_A1";
this addPrimaryWeaponItem "CUP_optic_CompM2_Black";
this addWeapon "CUP_launch_M136";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this setFace "WhiteHead_20";
this setSpeaker "ace_novoice";
