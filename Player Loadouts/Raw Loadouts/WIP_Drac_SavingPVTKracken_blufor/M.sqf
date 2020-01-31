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
this addItemToUniform "ACE_IR_Strobe_Item";
this addItemToUniform "ACE_bodyBag";
this addItemToUniform "ACE_Flashlight_XL50";
this addVest "V_PlateCarrier_Kerry";
for "_i" from 1 to 2 do {this addItemToVest "9Rnd_45ACP_Mag";};
for "_i" from 1 to 8 do {this addItemToVest "hlc_30rnd_556x45_MDim";};
this addBackpack "B_Carryall_oli";
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_bodyBag";};
for "_i" from 1 to 8 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 40 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 2 do {this addItemToBackpack "HandGrenade";};
for "_i" from 1 to 4 do {this addItemToBackpack "SmokeShell";};
this addHeadgear "H_HelmetB_light";
this addGoggles "G_Balaclava_TI_G_blk_F";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_camo";
this addPrimaryWeaponItem "CUP_muzzle_snds_M16_camo";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_2_camo";
this addPrimaryWeaponItem "optic_Holosight";
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

