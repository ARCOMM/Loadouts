comment "Exported from Arsenal by Kingsley";

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
this forceAddUniform "U_I_C_Soldier_Bandit_1_F";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_Flashlight_KSF1";
this addVest "V_Chestrig_rgr";
for "_i" from 1 to 5 do {this addItemToVest "ACE_Chemlight_HiRed";};
for "_i" from 1 to 5 do {this addItemToVest "ACE_HandFlare_Red";};
for "_i" from 1 to 2 do {this addItemToVest "rhs_mag_an_m8hc";};
for "_i" from 1 to 7 do {this addItemToVest "rhs_mag_30Rnd_556x45_M855_Stanag";};
this addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
this addHeadgear "H_HeadBandage_clean_F";

comment "Add weapons";
this addWeapon "rhs_weap_m4a1_carryhandle";
this addPrimaryWeaponItem "rhsusf_acc_M952V";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
