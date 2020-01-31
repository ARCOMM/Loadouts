
comment "Exported from Arsenal by A Ninja";

comment "[!] UNIT MUST BE LOCAL [!]";
if (!local this) exitWith {};

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add weapons";
this addWeapon "CUP_srifle_M110_black";
this addPrimaryWeaponItem "CUP_muzzle_snds_M110_black";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_15_Black";
this addPrimaryWeaponItem "CUP_optic_CompM4";
this addPrimaryWeaponItem "CUP_20Rnd_762x51_B_M110";
this addPrimaryWeaponItem "CUP_bipod_VLTOR_Modpod_black";
this addWeapon "CUP_hgun_MP7";
this addHandgunItem "CUP_20Rnd_46x30_MP7";

comment "Add containers";
this forceAddUniform "CUP_U_CRYE_BLK_Full";
this addVest "CUP_V_B_JPC_Black_Light";
this addBackpack "CFP_Kitbag_Olive";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToVest "HandGrenade";
this addItemToUniform "ACE_Flashlight_XL50";
for "_i" from 1 to 6 do {this addItemToVest "CUP_20Rnd_762x51_B_M110";};
this addItemToVest "CUP_20Rnd_46x30_MP7";
this addItemToBackpack "ACE_bodyBag";
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_CableTie";};
this addItemToBackpack "ACE_wirecutter";
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_20Rnd_762x51_B_M110";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_20Rnd_46x30_MP7";};
this addHeadgear "CUP_H_OpsCore_Black";
this addGoggles "CUP_G_ESS_BLK_Scarf_Face_Blk";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "arcore_nightvision_Gen8";