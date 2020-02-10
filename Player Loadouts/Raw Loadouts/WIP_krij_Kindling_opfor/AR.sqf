this forceAddUniform "CUP_U_O_TK_Green";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "16Rnd_9x21_Mag";};
this addVest "CUP_V_I_RACS_Carrier_Vest_wdl_3";
for "_i" from 1 to 2 do {this addItemToVest "16Rnd_9x21_Mag";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_RGD5";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 2 do {this addItemToVest "CUP_60Rnd_545x39_AK74M_M";};
this addBackpack "CUP_B_RUS_Backpack";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M";};
this addItemToBackpack "CUP_60Rnd_545x39_AK74M_M";
this addHeadgear "CUP_H_RUS_6B47_SF";

comment "Add weapons";
this addWeapon "CUP_arifle_RPK74M_railed";
this addPrimaryWeaponItem "CUP_muzzle_mfsup_Flashhider_545x39_Black";
this addPrimaryWeaponItem "CUP_acc_Flashlight";
this addWeapon "hgun_Rook40_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

