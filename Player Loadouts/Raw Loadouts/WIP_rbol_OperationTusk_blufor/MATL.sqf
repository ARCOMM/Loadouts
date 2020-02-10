
comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_BUIS_desert_GL";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";
this addPrimaryWeaponItem "CUP_1Rnd_HE_M203";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CFP_RAID_DBDU_1";
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
this addBackpack "CUP_B_USPack_Coyote";

comment "Add binoculars";
this addWeapon "Rangefinder";

comment "Add items to containers";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_CableTie";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
this addItemToVest "SmokeShell";
this addItemToVest "ACE_M84";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShellYellow";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 6 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {this addItemToBackpack "MRAWS_HEAT55_F";};
this addHeadgear "usm_helmet_pasgt_g_d_m";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
