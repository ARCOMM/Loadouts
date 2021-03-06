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
this addItemToUniform "ACRE_PRC148";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 2 do {this addItemToUniform "OPTRE_32Rnd_762x51_Mag";};
this addItemToUniform "OPTRE_8Rnd_127x40_Mag";
this addVest "OPTRE_UNSC_M52D_Armor_Rifleman";
for "_i" from 1 to 2 do {this addItemToVest "OPTRE_32Rnd_762x51_Mag";};
for "_i" from 1 to 3 do {this addItemToVest "OPTRE_60Rnd_762x51_Mag_Tracer";};
for "_i" from 1 to 2 do {this addItemToVest "OPTRE_8Rnd_127x40_Mag";};
for "_i" from 1 to 2 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
this addBackpack "OPTRE_ILCS_Rucksack_Black_Lead";
for "_i" from 1 to 2 do {this addItemToBackpack "OPTRE_ELB47_Strobe";};
for "_i" from 1 to 2 do {this addItemToBackpack "OPTRE_M2_Smoke_Green";};
for "_i" from 1 to 2 do {this addItemToBackpack "OPTRE_M2_Smoke_Purple";};
for "_i" from 1 to 2 do {this addItemToBackpack "OPTRE_M2_Smoke_Red";};
for "_i" from 1 to 2 do {this addItemToBackpack "OPTRE_M2_Smoke";};
for "_i" from 1 to 2 do {this addItemToBackpack "OPTRE_M8_Flare";};
for "_i" from 1 to 2 do {this addItemToBackpack "OPTRE_M8_Flare_Green";};
for "_i" from 1 to 2 do {this addItemToBackpack "C7_Remote_Mag";};
for "_i" from 1 to 8 do {this addItemToBackpack "OPTRE_32Rnd_762x51_Mag";};
for "_i" from 1 to 4 do {this addItemToBackpack "1Rnd_HE_Grenade_shell";};
this addHeadgear "OPTRE_UNSC_CH252D_Helmet";

comment "Add weapons";
this addWeapon "OPTRE_MA5CGL";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_Aco";
this addWeapon "OPTRE_M6G";
this addHandgunItem "OPTRE_M6G_Flashlight";
this addHandgunItem "OPTRE_M6G_Scope";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "OPTRE_NVG";

