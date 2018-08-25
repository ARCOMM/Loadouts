comment "Exported from Arsenal by Matuzalem";

this forceAddUniform "CUP_U_B_USMC_FROG4_DMARPAT";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_MapTools";
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_M67";};
this addVest "CUP_V_B_MTV_TL";
for "_i" from 1 to 10 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 7 do {this addItemToVest "CUP_1Rnd_Smoke_M203";};
this addBackpack "CUP_B_AssaultPack_Coyote";
for "_i" from 1 to 10 do {this addItemToBackpack "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 10 do {this addItemToBackpack "CUP_1Rnd_HEDP_M203";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_1Rnd_SmokeRed_M203";};
for "_i" from 1 to 6 do {this addItemToBackpack "SmokeShellGreen";};
for "_i" from 1 to 5 do {this addItemToBackpack "SmokeShellPurple";};
this addHeadgear "CUP_H_USMC_MICH2000_DES";

this addWeapon "hlc_rifle_m4m203";
this addPrimaryWeaponItem "CUP_optic_CompM4";
this addWeapon "Binocular";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
