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
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACRE_PRC343";
this addItemToUniform "OPTRE_32Rnd_762x51_Mag";
this addVest "OPTRE_UNSC_M52D_Armor_Demolitions";
for "_i" from 1 to 2 do {this addItemToVest "OPTRE_8Rnd_127x40_Mag";};
for "_i" from 1 to 6 do {this addItemToVest "OPTRE_32Rnd_762x51_Mag";};
this addBackpack "OPTRE_ILCS_Rucksack_Heavy_Demo";
this addItemToBackpack "ToolKit";
this addItemToBackpack "MineDetector";
this addItemToBackpack "ACE_Clacker";
for "_i" from 1 to 3 do {this addItemToBackpack "C12_Remote_Mag";};
this addHeadgear "OPTRE_UNSC_CH252D_Helmet";

comment "Add weapons";
this addWeapon "OPTRE_MA5C";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_ACO_grn";
this addWeapon "OPTRE_M6G";
this addHandgunItem "OPTRE_M6G_Flashlight";
this addHandgunItem "OPTRE_M6G_Scope";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "OPTRE_NVG";
