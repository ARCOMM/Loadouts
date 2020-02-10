
this forceAddUniform "CUP_U_O_TK_Green";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "16Rnd_9x21_Mag";};
this addVest "CUP_V_I_RACS_Carrier_Vest_wdl_3";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_RGD5";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 3 do {this addItemToVest "CUP_30Rnd_762x39_AK103_bakelite_M";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M";};
this addBackpack "CUP_B_RUS_Backpack";
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_30Rnd_762x39_AK103_bakelite_M";};
this addHeadgear "CUP_H_RUS_6B47_SF";

comment "Add weapons";
this addWeapon "CUP_arifle_AK104_railed";
this addPrimaryWeaponItem "CUP_muzzle_mfsup_Flashhider_762x39_Black";
this addPrimaryWeaponItem "CUP_acc_Flashlight";
this addPrimaryWeaponItem "CUP_optic_MicroT1_low";
this addWeapon "hgun_Rook40_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

