comment "Add weapons";
this addWeapon "hlc_lmg_M249E2";
this addPrimaryWeaponItem "hlc_200rnd_556x45_M_SAW";

comment "Add containers";
this forceAddUniform "CUP_U_B_USArmy_TwoKnee";
this addVest "CUP_V_B_IOTV_saw";
this addBackpack "CUP_B_AssaultPack_ACU";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "Chemlight_red";
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
this addItemToVest "hlc_200rnd_556x45_T_SAW";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_200rnd_556x45_T_SAW";};
this addHeadgear "CUP_H_USArmy_HelmetMICH_earpro_ess";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";