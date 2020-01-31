
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
this addWeapon "hlc_rifle_hk53RAS";
this addPrimaryWeaponItem "hlc_30rnd_556x45_b_HK33";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CFP_75th_CRYE_V3_Full";
this addVest "MNP_Vest_DS_2";
this addBackpack "B_AssaultPack_rgr";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
this addItemToUniform "hlc_30rnd_556x45_b_HK33";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 8 do {this addItemToVest "hlc_30rnd_556x45_b_HK33";};
this addHeadgear "SP_CVCHelmet_Tan";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";