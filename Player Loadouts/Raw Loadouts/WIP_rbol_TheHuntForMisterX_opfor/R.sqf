
comment "Add weapons";
this addWeapon "hlc_rifle_416D10_geissele";
this addPrimaryWeaponItem "optic_ACO_grn_smg";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "CUP_hgun_Glock17_blk";
this addHandgunItem "CUP_muzzle_snds_M9";
this addHandgunItem "optic_MRD";
this addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
this forceAddUniform "CUP_U_O_CHDKZ_Lopotev";
this addVest "SP_Tactical1_Black";
this addBackpack "B_AssaultPack_eaf_F";

comment "Add binoculars";
this addWeapon "ACE_Yardage450";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_epinephrine";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_personalAidKit";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_17Rnd_9x19_glock17";};
for "_i" from 1 to 2 do {this addItemToUniform "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_17Rnd_9x19_glock17";};
this addItemToVest "SmokeShellPurple";
this addItemToVest "HandGrenade";
for "_i" from 1 to 4 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_17Rnd_9x19_glock17";};
this addItemToBackpack "SmokeShellPurple";
for "_i" from 1 to 5 do {this addItemToBackpack "hlc_30rnd_556x45_EPR";};
this addHeadgear "CUP_H_PMC_Cap_Back_Grey";
this addGoggles "CFP_Oakleys_Drk";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
