
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
this addWeapon "CUP_arifle_M16A4_Base";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_15_Flashlight_Black_L";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CUP_U_B_BDUv2_roll_gloves_desert";
this addVest "CUP_V_B_Eagle_SPC_Corpsman";
this addBackpack "B_Kitbag_cbr";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
this addItemToUniform "CUP_15Rnd_9x19_M9";
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 9 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
this addHeadgear "CUP_H_RACS_Helmet_DES";
this addGoggles "CUP_G_ESS_RGR_Dark";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "arcore_nightvision_Gen8";