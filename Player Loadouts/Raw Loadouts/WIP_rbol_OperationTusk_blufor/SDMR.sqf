
comment "Add weapons";
this addWeapon "CUP_arifle_FNFAL_railed_desert";
this addPrimaryWeaponItem "hlc_muzzle_300blk_KAC";
this addPrimaryWeaponItem "CUP_optic_HensoldtZO_low_RDS_desert";
this addPrimaryWeaponItem "CUP_20Rnd_762x51_FNFAL_M";
this addWeapon "hlc_pistol_P226R_357Combat";
this addHandgunItem "CUP_muzzle_snds_M9";
this addHandgunItem "HLC_optic_VTAC";
this addHandgunItem "hlc_12Rnd_357SIG_B_P226";

comment "Add containers";
this forceAddUniform "CUP_U_CRYEG3_V1";
this addVest "CUP_V_B_BAF_DDPM_Osprey_Mk3_Rifleman";
this addBackpack "CUP_B_AssaultPack_Coyote";

comment "Add binoculars";
this addWeapon "Rangefinder";

comment "Add items to containers";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_CableTie";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "CUP_20Rnd_762x51_FNFAL_M";
for "_i" from 1 to 2 do {this addItemToVest "hlc_12Rnd_357SIG_B_P226";};
this addItemToVest "SmokeShell";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShellYellow";
this addItemToVest "ACE_M84";
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {this addItemToVest "hlc_20Rnd_762x51_barrier_fal";};
for "_i" from 1 to 4 do {this addItemToBackpack "hlc_20Rnd_762x51_barrier_fal";};
this addItemToBackpack "ACE_M84";
this addItemToBackpack "SmokeShell";
this addItemToBackpack "CUP_HandGrenade_M67";
this addItemToBackpack "SmokeShellYellow";
this addHeadgear "CFP_OpsC_Uncov_Goggles";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
