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
this forceAddUniform "U_I_C_Soldier_Para_4_F";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_Flashlight_KSF1";
this addVest "V_TacChestrig_grn_F";
for "_i" from 1 to 5 do {this addItemToVest "ACE_Chemlight_HiRed";};
for "_i" from 1 to 2 do {this addItemToVest "rhs_mag_an_m8hc";};
for "_i" from 1 to 8 do {this addItemToVest "rhs_30Rnd_762x39mm";};
this addBackpack "B_AssaultPack_rgr";
this addItemToBackpack "ACE_DefusalKit";
this addItemToBackpack "ACE_M26_Clacker";
this addItemToBackpack "ACE_Clacker";
this addItemToBackpack "SatchelCharge_Remote_Mag";
this addItemToBackpack "rhs_mag_m67";
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_HandFlare_Red";};
this addHeadgear "H_Booniehat_oli";

comment "Add weapons";
this addWeapon "rhs_weap_akm";
this addPrimaryWeaponItem "rhs_acc_2dpZenit";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
