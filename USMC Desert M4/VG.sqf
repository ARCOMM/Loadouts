comment "Exported from Arsenal by Matuzalem";

this forceAddUniform "CUP_U_B_USMC_FROG4_DMARPAT";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_MapTools";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
this addVest "CUP_V_B_MTV";
for "_i" from 1 to 9 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addHeadgear "CUP_H_USMC_Crew_Helmet";

this addWeapon "hlc_rifle_M4";
this addPrimaryWeaponItem "CUP_optic_CompM4";
this addWeapon "Binocular";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
