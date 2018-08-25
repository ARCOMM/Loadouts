comment "Exported from Arsenal by Matuzalem";

this forceAddUniform "CUP_U_B_USMC_FROG4_DMARPAT";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_MapTools";
this addVest "CUP_V_B_MTV_Patrol";
for "_i" from 1 to 8 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addBackpack "CUP_B_AssaultPack_Coyote";
for "_i" from 1 to 10 do {this addItemToBackpack "hlc_5rnd_300WM_T_AWM";};
this addHeadgear "CUP_H_USMC_MICH2000_DES";

this addWeapon "hlc_rifle_M4";
this addPrimaryWeaponItem "CUP_optic_CompM4";
this addWeapon "Rangefinder";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
