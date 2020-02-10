
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
this addWeapon "hlc_rifle_Colt727_GL";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CUP_U_B_BDUv2_roll_gloves_desert";
this addVest "CUP_V_B_Eagle_SPC_Corpsman";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "Laserdesignator";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 6 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 3 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 6 do {this addItemToVest "CUP_1Rnd_HE_M203";};
this addHeadgear "usm_helmet_cvc";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "arcore_nightvision_Gen8";