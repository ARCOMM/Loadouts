
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
this addWeapon "CUP_lmg_M249_E2";
this addPrimaryWeaponItem "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
this addWeapon "CUP_hgun_MP7";
this addHandgunItem "CUP_20Rnd_46x30_MP7";

comment "Add containers";
this forceAddUniform "CUP_U_CRYE_BLK_Full";
this addVest "CUP_V_B_JPC_Black_Light";
this addBackpack "CFP_Kitbag_Olive";

comment "Add items to containers";
this addItemToUniform "ACE_Flashlight_XL50";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToVest "ACE_CableTie";};
this addItemToVest "HandGrenade";
for "_i" from 1 to 4 do {this addItemToVest "CUP_20Rnd_46x30_MP7";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_20Rnd_46x30_MP7";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};
this addHeadgear "CUP_H_OpsCore_Black";
this addGoggles "CUP_G_ESS_BLK_Scarf_Face_Blk";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "arcore_nightvision_Gen8";