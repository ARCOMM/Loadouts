
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
this addWeapon "hlc_smg_MP5N";
this addPrimaryWeaponItem "hlc_30Rnd_9x19_B_MP5";
this addWeapon "CUP_hgun_Colt1911";
this addHandgunItem "CUP_7Rnd_45ACP_1911";

comment "Add containers";
this forceAddUniform "MNP_CombatUniform_OD_Rg";
this addVest "CFP_Alice_Vest";
this addBackpack "CUP_B_AlicePack_OD";

comment "Add items to containers";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "HandGrenade";};
for "_i" from 1 to 4 do {this addItemToUniform "SmokeShell";};
this addItemToVest "ACE_EntrenchingTool";
for "_i" from 1 to 3 do {this addItemToVest "hlc_30Rnd_9x19_B_MP5";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_7Rnd_45ACP_1911";};
this addHeadgear "SP_CVCHelmet_Green";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";