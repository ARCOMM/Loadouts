
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
this addWeapon "hlc_rifle_416D10";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_15_Black";
this addPrimaryWeaponItem "CUP_optic_MicroT1";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "hgun_Rook40_F";
this addHandgunItem "16Rnd_9x21_Mag";

comment "Add containers";
this forceAddUniform "CUP_I_B_PMC_Unit_24";
this addVest "V_PlateCarrier2_blk";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_M84";};
for "_i" from 1 to 8 do {this addItemToVest "hlc_30rnd_556x45_SPR";};
this addItemToVest "16Rnd_9x21_Mag";
this addHeadgear "CUP_H_Ger_M92_Black";
this addGoggles "G_Balaclava_TI_G_blk_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";