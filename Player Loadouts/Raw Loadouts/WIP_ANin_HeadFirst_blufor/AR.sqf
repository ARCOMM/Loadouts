
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
this addWeapon "hlc_lmg_m60";
this addPrimaryWeaponItem "hlc_100Rnd_762x51_M_M60E4";
this addWeapon "CUP_hgun_Colt1911";
this addHandgunItem "CUP_7Rnd_45ACP_1911";

comment "Add containers";
this forceAddUniform "MNP_CombatUniform_OD_Rg";
this addVest "CFP_Alice_Vest";
this addBackpack "CUP_B_AlicePack_OD";

comment "Add binoculars";
this addWeapon "Binocular";

comment "Add items to containers";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_7Rnd_45ACP_1911";};
for "_i" from 1 to 2 do {this addItemToUniform "HandGrenade";};
for "_i" from 1 to 4 do {this addItemToUniform "SmokeShell";};
this addItemToVest "ACE_EntrenchingTool";
for "_i" from 1 to 2 do {this addItemToVest "hlc_100Rnd_762x51_T_M60E4";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_CableTie";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_HandFlare_Red";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_HandFlare_White";};
this addItemToBackpack "hlc_100Rnd_762x51_T_M60E4";
this addHeadgear "CUP_H_USArmy_Helmet_M1_plain_Olive";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";