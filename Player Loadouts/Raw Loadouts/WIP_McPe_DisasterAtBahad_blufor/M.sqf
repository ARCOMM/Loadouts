comment "Add weapons";
this addWeapon "hlc_rifle_M4a1carryhandle";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";

comment "Add containers";
this forceAddUniform "CUP_U_B_USArmy_TwoKnee";
this addVest "CUP_V_B_IOTV_Medic";
this addBackpack "CUP_B_MedicPack_ACU";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "Chemlight_red";
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 7 do {this addItemToVest "hlc_30rnd_556x45_M";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};
this addHeadgear "CUP_H_USArmy_HelmetMICH_earpro_ess";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";