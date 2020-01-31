
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
this addWeapon "hlc_lmg_M249E1";
this addPrimaryWeaponItem "hlc_200rnd_556x45_M_SAW";
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
this addItemToVest "hlc_200rnd_556x45_M_SAW";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_200rnd_556x45_M_SAW";};
this addHeadgear "CUP_H_RACS_Helmet_DES";
this addGoggles "CUP_G_ESS_RGR_Dark";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "arcore_nightvision_Gen8";