
comment "Add weapons";
this addWeapon "CUP_arifle_G36K_RIS";
this addPrimaryWeaponItem "optic_ACO_grn_smg";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_G36";
this addWeapon "CUP_hgun_Glock17_blk";
this addHandgunItem "CUP_muzzle_snds_M9";
this addHandgunItem "optic_MRD";
this addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
this forceAddUniform "CUP_U_I_GUE_Anorak_03";
this addVest "SP_Tactical1_Black";
this addBackpack "B_AssaultPack_eaf_F";

comment "Add binoculars";
this addWeapon "ACE_Yardage450";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_epinephrine";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_personalAidKit";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_17Rnd_9x19_glock17";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_556x45_G36";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_17Rnd_9x19_glock17";};
this addItemToVest "SmokeShellPurple";
this addItemToVest "HandGrenade";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_17Rnd_9x19_glock17";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_30Rnd_556x45_G36";};
this addItemToBackpack "SmokeShellPurple";
this addHeadgear "H_Hat_brown";
this addGoggles "CFP_Oakleys_Drk";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
