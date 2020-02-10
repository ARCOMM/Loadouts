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
for "_i" from 1 to 9 do {this addItemToVest "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {this addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};
for "_i" from 1 to 2 do {this addItemToVest "rhs_mag_an_m8hc";};
for "_i" from 1 to 4 do {this addItemToVest "rhs_mag_m67";};
this addBackpack "rhsusf_assault_eagleaiii_ocp";
for "_i" from 1 to 5 do {this addItemToBackpack "UGL_FlareGreen_F";};
for "_i" from 1 to 5 do {this addItemToBackpack "UGL_FlareRed_F";};
for "_i" from 1 to 10 do {this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 10 do {this addItemToBackpack "1Rnd_SmokeGreen_Grenade_shell";};
for "_i" from 1 to 5 do {this addItemToBackpack "1Rnd_SmokePurple_Grenade_shell";};
this addItemToBackpack "rhs_mag_m18_purple";
this addHeadgear "rhsusf_ach_helmet_headset_ess_ocp";

comment "Add weapons";
this addWeapon "rhs_weap_hk416d145_m320";
this addPrimaryWeaponItem "rhsusf_acc_M952V";
this addPrimaryWeaponItem "rhsusf_acc_eotech_xps3";
this addWeapon "rhsusf_weap_m9";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
