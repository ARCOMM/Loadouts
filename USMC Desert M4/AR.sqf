comment "Exported from Arsenal by Matuzalem";

this forceAddUniform "CUP_U_B_USMC_FROG4_DMARPAT";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_MTV_MG";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addItemToVest "CUP_HandGrenade_M67";
for "_i" from 1 to 2 do {this addItemToVest "hlc_200rnd_556x45_M_SAW";};
this addHeadgear "CUP_H_USMC_MICH2000_DES";

comment "Add weapons";
this addWeapon "hlc_m249_pip4";
this addPrimaryWeaponItem "CUP_optic_CompM4";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
