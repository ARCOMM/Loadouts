comment "Exported from Arsenal by Matuzalem";

this forceAddUniform "CUP_U_B_USMC_FROG4_DMARPAT";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_7Rnd_45ACP_1911";};
this addVest "CUP_V_B_MTV_Marksman";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 6 do {this addItemToVest "hlc_5rnd_300WM_T_AWM";};
this addBackpack "CUP_B_AssaultPack_Coyote";
for "_i" from 1 to 10 do {this addItemToBackpack "hlc_5rnd_300WM_T_AWM";};
this addHeadgear "CUP_H_USMC_MICH2000_DES";

this addWeapon "hlc_rifle_awMagnum_FDE_ghillie";
this addPrimaryWeaponItem "CUP_optic_Leupold_VX3";
this addWeapon "CUP_hgun_Colt1911";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
