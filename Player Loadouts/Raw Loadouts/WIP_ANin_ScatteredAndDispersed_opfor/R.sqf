
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
this addWeapon "hlc_rifle_ak12";
this addPrimaryWeaponItem "CUP_acc_Flashlight_wdl";
this addPrimaryWeaponItem "optic_Aco_smg";
this addPrimaryWeaponItem "hlc_30Rnd_545x39_B_AK";
this addWeapon "hgun_Rook40_F";
this addHandgunItem "16Rnd_9x21_Mag";

comment "Add containers";
this forceAddUniform "CUP_U_O_RUS_EMR_1_VDV";
this addVest "CUP_V_RUS_6B45_3";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_HandFlare_Red";};
for "_i" from 1 to 9 do {this addItemToVest "hlc_30Rnd_545x39_B_AK";};
for "_i" from 1 to 3 do {this addItemToVest "16Rnd_9x21_Mag";};
this addHeadgear "CUP_H_RUS_6B47_SF";
this addGoggles "IS_Balaclava";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";