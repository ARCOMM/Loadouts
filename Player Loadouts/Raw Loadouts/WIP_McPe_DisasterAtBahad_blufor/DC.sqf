comment "Add weapons";
this addWeapon "hlc_rifle_m4m203";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addPrimaryWeaponItem "1Rnd_HE_Grenade_shell";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CUP_U_B_USArmy_TwoKnee";
this addVest "CUP_V_B_IOTV_SL";
this addBackpack "CUP_B_AssaultPack_ACU";

comment "Add binoculars";
this addWeapon "Binocular";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "Chemlight_red";
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 7 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_1Rnd_HEDP_M203";};
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_1Rnd_Smoke_M203";};
this addHeadgear "CUP_H_USArmy_HelmetMICH_earpro";
this addGoggles "CUP_TK_NeckScarf";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";