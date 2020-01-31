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
for "_i" from 1 to 2 do {this addItemToUniform "OPTRE_Biofoam";};
this addItemToUniform "ACRE_PRC343";
this addItemToUniform "ACRE_PRC148";
this addItemToUniform "ACRE_PRC152";
for "_i" from 1 to 2 do {this addItemToUniform "OPTRE_60Rnd_5x23mm_Mag";};
this addVest "OPTRE_UNSC_M52D_Armor_Sniper";
for "_i" from 1 to 2 do {this addItemToVest "OPTRE_8Rnd_127x40_Mag";};
for "_i" from 1 to 8 do {this addItemToVest "OPTRE_60Rnd_5x23mm_Mag";};
for "_i" from 1 to 2 do {this addItemToVest "OPTRE_M9_Frag";};
this addItemToVest "OPTRE_M2_Smoke";
this addBackpack "OPTRE_ILCS_Rucksack_Medical_Filled";
for "_i" from 1 to 12 do {this addItemToBackpack "OPTRE_Biofoam";};
for "_i" from 1 to 5 do {this addItemToBackpack "OPTRE_MedKit";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
this addHeadgear "OPTRE_UNSC_Recon_Helmet";

comment "Add weapons";
this addWeapon "OPTRE_M7";
this addPrimaryWeaponItem "OPTRE_M7_silencer";
this addPrimaryWeaponItem "OPTRE_M7_Laser";
this addPrimaryWeaponItem "OPTRE_M7_Sight";
this addWeapon "OPTRE_M6G";
this addHandgunItem "OPTRE_M6G_Flashlight";
this addHandgunItem "OPTRE_M6G_Scope";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "OPTRE_NVG";

