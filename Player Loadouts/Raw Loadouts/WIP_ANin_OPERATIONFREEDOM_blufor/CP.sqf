
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
this forceAddUniform "U_B_HeliPilotCoveralls";
this addBackpack "B_AssaultPack_sgg";

comment "Add items to containers";
this addItemToUniform "ACE_fieldDressing";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_Flashlight_XL50";
for "_i" from 1 to 3 do {this addItemToUniform "hlc_30Rnd_9x19_B_MP5";};
this addItemToBackpack "ToolKit";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_30Rnd_9x19_B_MP5";};
this addHeadgear "CFP_SOARCREW_BLUE";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "arcore_nightvision_Gen8";