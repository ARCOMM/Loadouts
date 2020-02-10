this forceAddUniform "CUP_U_B_USArmy_Base";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "SmokeShell";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_M67";};
this addItemToUniform "CUP_15Rnd_9x19_M9";
this addVest "CUP_V_B_IOTV_Medic";
for "_i" from 1 to 9 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addBackpack "CUP_B_AssaultPack_ACU";
for "_i" from 1 to 25 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 8 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
this addHeadgear "CUP_H_USArmy_HelmetMICH_headset_ess";

this addWeapon "hlc_rifle_Colt727";
this addPrimaryWeaponItem "CUP_optic_CompM4";
this addWeapon "CUP_hgun_M9";
this addWeapon "Binocular";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";