
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
this addWeapon "CUP_lmg_m249_para_gl";
this addPrimaryWeaponItem "CUP_60Rnd_556x45_SureFire";
this addWeapon "CUP_hgun_MP7";
this addHandgunItem "CUP_20Rnd_46x30_MP7";

comment "Add containers";
this forceAddUniform "CUP_U_CRYE_BLK_Full";
this addVest "CUP_V_B_JPC_Black_Light";
this addBackpack "CFP_Kitbag_Olive";

comment "Add binoculars";
this addWeapon "Binocular";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToVest "ACE_DefusalKit";
this addItemToVest "ACE_wirecutter";
for "_i" from 1 to 5 do {this addItemToVest "ACE_CableTie";};
this addItemToVest "ACE_bodyBag";
this addItemToVest "HandGrenade";
for "_i" from 1 to 5 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_20Rnd_46x30_MP7";};
this addItemToVest "ACE_40mm_Flare_red";
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_20Rnd_46x30_MP7";};
this addItemToBackpack "ACE_40mm_Flare_green";
for "_i" from 1 to 11 do {this addItemToBackpack "CUP_60Rnd_556x45_SureFire";};
this addHeadgear "CUP_H_OpsCore_Black";
this addGoggles "CUP_G_ESS_BLK_Scarf_Face_Blk";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemGPS";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "arcore_nightvision_Gen8";