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
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToUniform "OPTRE_36Rnd_95x40_Mag";};
this addVest "OPTRE_UNSC_M52D_Armor_Marksman";
for "_i" from 1 to 6 do {this addItemToVest "OPTRE_36Rnd_95x40_Mag";};
for "_i" from 1 to 3 do {this addItemToVest "OPTRE_8Rnd_127x40_Mag";};
for "_i" from 1 to 2 do {this addItemToVest "OPTRE_M9_Frag";};
for "_i" from 1 to 2 do {this addItemToVest "OPTRE_M2_Smoke";};
this addBackpack "OPTRE_ILCS_Rucksack_Black";
for "_i" from 1 to 6 do {this addItemToBackpack "OPTRE_36Rnd_95x40_Mag";};
this addHeadgear "OPTRE_UNSC_CH252D_Helmet";

comment "Add weapons";
this addWeapon "OPTRE_BR55HB";
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
