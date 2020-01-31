
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
this addWeapon "hlc_rifle_416D165_gl";
this addPrimaryWeaponItem "CUP_acc_Flashlight";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CFP_75th_CRYE_V3_Full";
this addVest "MNP_Vest_DS_2";
this addBackpack "B_Kitbag_rgr";

comment "Add binoculars";
this addWeapon "Binocular";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_Flashlight_XL50";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 9 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addItemToVest "1Rnd_HE_Grenade_shell";
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_40mm_Flare_white";};
for "_i" from 1 to 20 do {this addItemToBackpack "CUP_1Rnd_StarFlare_White_M203";};
for "_i" from 1 to 10 do {this addItemToBackpack "CUP_FlareRed_M203";};
for "_i" from 1 to 9 do {this addItemToBackpack "CUP_1Rnd_HEDP_M203";};
this addHeadgear "CFP_OpsC_Med";
this addGoggles "G_Aviator";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemGPS";
this linkItem "arcore_nightvision_Gen8";