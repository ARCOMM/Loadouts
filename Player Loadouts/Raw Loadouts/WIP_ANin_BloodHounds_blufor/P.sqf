
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
this addBackpack "AORN_Assault_Pack";

comment "Add items to containers";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "SmokeShellOrange";
for "_i" from 1 to 5 do {this addItemToUniform "hlc_30Rnd_9x19_B_MP5";};
this addItemToBackpack "ToolKit";
this addItemToBackpack "ACE_Flashlight_XL50";
this addItemToBackpack "ACE_MapTools";
this addItemToBackpack "ACRE_PRC117F";
this addHeadgear "JS_JC_FA18_PilotHelmet";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "ItemRadioAcreFlagged";