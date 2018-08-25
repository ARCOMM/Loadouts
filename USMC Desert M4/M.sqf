comment "Exported from Arsenal by Matuzalem";

this forceAddUniform "CUP_U_B_USMC_FROG4_DMARPAT";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
this addVest "CUP_V_B_MTV_LegPouch";
for "_i" from 1 to 10 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 5 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 4 do {this addItemToVest "SmokeShellGreen";};
for "_i" from 1 to 4 do {this addItemToVest "SmokeShellPurple";};
this addBackpack "CUP_B_GER_Medic_Desert";
for "_i" from 1 to 50 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 7 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 7 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 25 do {this addItemToBackpack "ACE_morphine";};
this addHeadgear "CUP_H_USMC_MICH2000_DES";

this addWeapon "hlc_rifle_M4";
this addPrimaryWeaponItem "CUP_optic_CompM4";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
