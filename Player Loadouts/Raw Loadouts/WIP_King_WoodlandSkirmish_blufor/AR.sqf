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
for "_i" from 1 to 2 do {this addItemToVest "rhs_200rnd_556x45_T_SAW";};
this addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 3 do {this addItemToBackpack "rhs_200rnd_556x45_T_SAW";};
this addHeadgear "H_HeadBandage_bloody_F";

comment "Add weapons";
this addWeapon "rhs_weap_m249_pip_L";
this addPrimaryWeaponItem "rhsusf_acc_M952V";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
