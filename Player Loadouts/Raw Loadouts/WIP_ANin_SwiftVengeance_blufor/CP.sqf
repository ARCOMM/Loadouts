
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
this addWeapon "hlc_smg_mp5k";
this addHandgunItem "hlc_30Rnd_9x19_B_MP5";

comment "Add containers";
this forceAddUniform "U_B_PilotCoveralls";
this addBackpack "B_AssaultPack_blk";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_HandFlare_Green";
for "_i" from 1 to 4 do {this addItemToUniform "hlc_30Rnd_9x19_B_MP5";};
this addItemToUniform "ACE_HandFlare_Red";
this addItemToUniform "ACE_HandFlare_White";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_Chemlight_HiBlue";};
this addItemToBackpack "ToolKit";
this addHeadgear "H_PilotHelmetFighter_B";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

comment "Set identity";
[this,"PersianHead_A3_03","male03per"] call BIS_fnc_setIdentity;
