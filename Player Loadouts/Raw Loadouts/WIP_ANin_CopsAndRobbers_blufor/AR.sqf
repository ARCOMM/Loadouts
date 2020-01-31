
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
this addWeapon "hlc_rifle_G36C";
this addPrimaryWeaponItem "CUP_optic_MicroT1";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR_G36";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CUP_I_B_PMC_Unit_24";
this addVest "V_PlateCarrier2_blk";
this addBackpack "B_AssaultPack_blk";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_M84";};
for "_i" from 1 to 5 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 7 do {this addItemToVest "hlc_30rnd_556x45_EPR_G36";};
for "_i" from 1 to 5 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_15Rnd_9x19_M9";};
this addHeadgear "CUP_H_Ger_M92_Black";
this addGoggles "G_Balaclava_TI_blk_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";
