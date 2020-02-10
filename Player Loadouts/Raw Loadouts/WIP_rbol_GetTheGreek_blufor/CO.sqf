
comment "Add containers";
this forceAddUniform "usm_bdu_d";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 6 do {this addItemToVest "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR";};
this addBackpack "CUP_B_AssaultPack_Coyote";
this addItemToBackpack "ACE_CableTie";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_HandGrenade_M67";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR";};
this addHeadgear "usm_helmet_pasgt_g_d";

comment "Add weapons";
this addWeapon "CUP_arifle_Mk17_CQC_EGLM";
this addPrimaryWeaponItem "optic_ACO_grn";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

comment "Set identity";
[this,"USP_PATCH_USA_ARMY_SF_AIR_OCP"] call BIS_fnc_setUnitInsignia;