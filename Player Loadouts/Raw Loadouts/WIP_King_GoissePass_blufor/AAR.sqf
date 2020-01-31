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
this forceAddUniform "rhs_uniform_cu_ocp";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "rhsusf_iotv_ocp_Squadleader";
for "_i" from 1 to 2 do {this addItemToVest "rhs_mag_an_m8hc";};
for "_i" from 1 to 4 do {this addItemToVest "rhs_mag_m67";};
for "_i" from 1 to 6 do {this addItemToVest "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red";};
for "_i" from 1 to 4 do {this addItemToVest "rhs_mag_30Rnd_556x45_M855_Stanag";};
this addBackpack "rhsusf_assault_eagleaiii_ocp";
for "_i" from 1 to 6 do {this addItemToBackpack "rhs_200rnd_556x45_T_SAW";};
this addHeadgear "rhsusf_ach_helmet_camo_ocp";

comment "Add weapons";
this addWeapon "rhs_weap_hk416d10_LMT_d";
this addPrimaryWeaponItem "rhsusf_acc_M952V";
this addPrimaryWeaponItem "rhsusf_acc_T1_high";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
