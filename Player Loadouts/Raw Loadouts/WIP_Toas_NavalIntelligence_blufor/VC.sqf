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
this forceAddUniform "OPTRE_MJOLNIR_Undersuit";
for "_i" from 1 to 20 do {this addItemToUniform "OPTRE_Biofoam";};
this addItemToUniform "ACRE_PRC343";
this addItemToUniform "ACRE_PRC152";
for "_i" from 1 to 4 do {this addItemToUniform "OPTRE_M9_Frag";};
for "_i" from 1 to 7 do {this addItemToUniform "OPTRE_60Rnd_762x51_Mag_Tracer";};
this addItemToUniform "OPTRE_12Rnd_127x40_Mag";
this addVest "OPTRE_MJOLNIR_MkVBArmor";
this addItemToVest "ACRE_PRC152_ID_1";
this addItemToVest "ACRE_PRC343_ID_1";
for "_i" from 1 to 7 do {this addItemToVest "3Rnd_HE_Grenade_shell";};
for "_i" from 1 to 3 do {this addItemToVest "3Rnd_UGL_FlareWhite_F";};
for "_i" from 1 to 4 do {this addItemToVest "OPTRE_60Rnd_762x51_Mag_Tracer";};
for "_i" from 1 to 2 do {this addItemToVest "OPTRE_12Rnd_127x40_Mag";};
this addBackpack "OPTRE_ANPRC_521_Green";
this addItemToBackpack "ACRE_PRC117F";
this addHeadgear "OPTRE_MJOLNIR_EVAHelmet_Emily";

comment "Add weapons";
this addWeapon "OPTRE_MA5BGL";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_ACO_grn";
this addWeapon "OPTRE_M6C";
this addHandgunItem "OPTRE_M6C_compensator";
this addHandgunItem "OPTRE_M6C_Laser";
this addHandgunItem "OPTRE_M6C_Scope";
this addWeapon "OPTRE_Binoculars";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";
