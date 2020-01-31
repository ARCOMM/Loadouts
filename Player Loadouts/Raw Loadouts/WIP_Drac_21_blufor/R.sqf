comment "Exported from Arsenal by Draco194";

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add containers";
this forceAddUniform "U_B_CTRG_Soldier_F";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addVest "V_PlateCarrier_Kerry";
for "_i" from 1 to 8 do {this addItemToVest "ACE_20Rnd_762x51_Mag_Tracer_Dim";};
for "_i" from 1 to 2 do {this addItemToVest "9Rnd_45ACP_Mag";};
this addBackpack "B_AssaultPack_rgr";
this addItemToBackpack "ACE_IR_Strobe_Item";
this addItemToBackpack "ACE_Flashlight_XL50";
this addItemToBackpack "ACE_bodyBag";
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_20Rnd_762x51_Mag_Tracer_Dim";};
for "_i" from 1 to 2 do {this addItemToBackpack "HandGrenade";};
for "_i" from 1 to 4 do {this addItemToBackpack "SmokeShell";};
this addHeadgear "H_HelmetB_TI_tna_F";
this addGoggles "G_Combat_Goggles_tna_F";

comment "Add weapons";
this addWeapon "CUP_srifle_L129A1_HG";
this addPrimaryWeaponItem "muzzle_snds_B_snd_F";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_2_camo";
this addPrimaryWeaponItem "optic_Holosight";
this addPrimaryWeaponItem "CUP_bipod_Harris_1A2_L";
this addWeapon "hgun_ACPC2_F";
this addHandgunItem "muzzle_snds_acp";
this addHandgunItem "acc_flashlight_pistol";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";
this linkItem "arcore_nightvision_Gen8";

comment "Set identity";
this setFace "GreekHead_A3_07";
this setSpeaker "male09eng";
