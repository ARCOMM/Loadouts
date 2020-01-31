comment "Exported from Arsenal by ToastSmack";

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
this forceAddUniform "OPTRE_UNSC_ODST_Uniform";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 3 do {this addItemToUniform "OPTRE_8Rnd_127x40_Mag";};
this addVest "OPTRE_UNSC_M52D_Armor_Rifleman";
for "_i" from 1 to 2 do {this addItemToVest "OPTRE_M9_Frag";};
this addItemToVest "OPTRE_M2_Smoke";
this addItemToVest "OPTRE_M2_Smoke_Green";
this addItemToVest "OPTRE_200Rnd_95x40_Box";
this addBackpack "OPTRE_ILCS_Rucksack_Heavy_M73";
for "_i" from 1 to 3 do {this addItemToBackpack "OPTRE_200Rnd_95x40_Box";};
this addHeadgear "OPTRE_UNSC_CH252D_Helmet";

comment "Add weapons";
this addWeapon "OPTRE_M73";
this addPrimaryWeaponItem "OPTRE_M393_EOTECH";
this addPrimaryWeaponItem "bipod_01_F_blk";
this addWeapon "OPTRE_M6G";
this addHandgunItem "OPTRE_M6G_Flashlight";
this addHandgunItem "OPTRE_M6G_Scope";
this addWeapon "OPTRE_Binoculars";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "OPTRE_NVG";
