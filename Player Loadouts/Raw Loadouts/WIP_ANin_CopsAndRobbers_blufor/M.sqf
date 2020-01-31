
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

comment "Add containers";
this forceAddUniform "CUP_I_B_PMC_Unit_24";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_M84";};
for "_i" from 1 to 3 do {this addItemToUniform "hlc_30Rnd_9x19_B_MP5";};
this addVest "V_PlateCarrier2_blk";
for "_i" from 1 to 2 do {this addItemToVest "16Rnd_9x21_Mag";};
for "_i" from 1 to 9 do {this addItemToVest "30Rnd_9x21_Mag";};
this addBackpack "B_ViperLightHarness_blk_F";
for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 8 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_bodyBag";};
this addHeadgear "usm_bdu_boonie_blk";
this addGoggles "G_WirelessEarpiece_F";

comment "Add weapons";
this addWeapon "hlc_smg_mp5sd5";
this addPrimaryWeaponItem "CUP_optic_MicroT1";
this addWeapon "hgun_Rook40_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";


