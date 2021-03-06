
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
this addWeapon "CUP_srifle_M14";
this addPrimaryWeaponItem "20Rnd_762x51_Mag";
this addWeapon "CUP_launch_M72A6";
this addWeapon "CUP_hgun_Colt1911";
this addHandgunItem "CUP_7Rnd_45ACP_1911";

comment "Add containers";
this forceAddUniform "MNP_CombatUniform_OD_Rg";
this addVest "CFP_Alice_Vest";
this addBackpack "CUP_B_AlicePack_OD";

comment "Add items to containers";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_7Rnd_45ACP_1911";};
for "_i" from 1 to 2 do {this addItemToUniform "HandGrenade";};
for "_i" from 1 to 4 do {this addItemToUniform "SmokeShell";};
this addItemToVest "ACE_EntrenchingTool";
for "_i" from 1 to 3 do {this addItemToVest "20Rnd_762x51_Mag";};
for "_i" from 1 to 9 do {this addItemToBackpack "20Rnd_762x51_Mag";};
this addHeadgear "CUP_H_USArmy_Helmet_M1_plain_Olive";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";