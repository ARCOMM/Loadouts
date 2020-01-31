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
this forceAddUniform "OPTRE_UNSC_Airforce_Uniform";
this addItemToUniform "OPTRE_Biofoam";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACRE_PRC343";
this addItemToUniform "ACRE_PRC152";
for "_i" from 1 to 3 do {this addItemToUniform "OPTRE_60Rnd_5x23mm_Mag";};
this addVest "OPTRE_UNSC_M52A_Armor_Pilot_AF";
for "_i" from 1 to 4 do {this addItemToVest "OPTRE_60Rnd_5x23mm_Mag";};
this addBackpack "OPTRE_ANPRC_515";
this addItemToBackpack "ACRE_PRC117F";
this addHeadgear "OPTRE_UNSC_CH252_Helmet2_Vacuum_MAR";

comment "Add weapons";
this addWeapon "OPTRE_M7";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "OPTRE_NVG";
