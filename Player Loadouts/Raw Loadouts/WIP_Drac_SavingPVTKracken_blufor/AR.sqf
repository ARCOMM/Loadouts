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
this forceAddUniform "U_B_CTRG_Soldier_3_F";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_IR_Strobe_Item";
this addItemToUniform "ACE_bodyBag";
this addItemToUniform "HandGrenade";
this addVest "V_PlateCarrier_Kerry";
for "_i" from 1 to 2 do {this addItemToVest "hlc_200rnd_556x45_Mdim_SAW";};
for "_i" from 1 to 2 do {this addItemToVest "9Rnd_45ACP_Mag";};
this addItemToVest "HandGrenade";
this addBackpack "B_AssaultPack_rgr";
this addItemToBackpack "ACE_Flashlight_XL50";
for "_i" from 1 to 4 do {this addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_200rnd_556x45_Mdim_SAW";};
this addHeadgear "CUP_H_USArmy_Helmet_Pro";
this addGoggles "G_Bandanna_beast";

comment "Add weapons";
this addWeapon "hlc_lmg_mk46mod1";
this addPrimaryWeaponItem "muzzle_snds_H_MG_blk_F";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_2_grey";
this addPrimaryWeaponItem "CUP_optic_CompM4";
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
