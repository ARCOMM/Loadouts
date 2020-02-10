
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
this addWeapon "hlc_rifle_416D165";
this addPrimaryWeaponItem "CUP_acc_Flashlight";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CFP_75th_CRYE_V3_Full";
this addVest "MNP_Vest_DS_2";
this addBackpack "B_Kitbag_rgr";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 9 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 3 do {this addItemToBackpack "hlc_200rnd_556x45_M_SAW";};
this addHeadgear "CFP_OpsC_Med";
this addGoggles "CFP_Oakley_Goggles_DTan";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "arcore_nightvision_Gen8";