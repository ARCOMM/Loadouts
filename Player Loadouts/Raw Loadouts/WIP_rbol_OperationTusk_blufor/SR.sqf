
comment "Add weapons";
this addWeapon "hlc_rifle_bcmjack";
this addPrimaryWeaponItem "CUP_muzzle_snds_G36_desert";
this addPrimaryWeaponItem "CUP_optic_Eotech553_Coyote";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "hlc_pistol_P226R_357Combat";
this addHandgunItem "CUP_muzzle_snds_M9";
this addHandgunItem "HLC_optic_VTAC";
this addHandgunItem "hlc_12Rnd_357SIG_B_P226";

comment "Add containers";
this forceAddUniform "CUP_U_CRYEG3_V1";
this addVest "CUP_V_B_BAF_DDPM_Osprey_Mk3_Rifleman";
this addBackpack "CUP_B_AssaultPack_Coyote";

comment "Add items to containers";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_CableTie";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToVest "SmokeShell";
this addItemToVest "ACE_M84";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShellYellow";
for "_i" from 1 to 3 do {this addItemToVest "hlc_12Rnd_357SIG_B_P226";};
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 1 do {this addItemToBackpack "CUP_HandGrenade_M67";};
for "_i" from 1 to 1 do {this addItemToBackpack "SmokeShellYellow";};
for "_i" from 1 to 1 do {this addItemToBackpack "ACE_M84";};
for "_i" from 1 to 1 do {this addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_12Rnd_357SIG_B_P226";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_30Rnd_556x45_Stanag";};
this addItemToBackpack "DemoCharge_Remote_Mag";
this addHeadgear "CFP_OpsC_Uncov_Goggles";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
