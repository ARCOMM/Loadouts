
comment "Add containers";
this forceAddUniform "usm_bdu_d";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addItemToVest "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_camo";
this addBackpack "CUP_B_AssaultPack_Coyote";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_HandGrenade_M67";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_camo";};
this addHeadgear "usm_helmet_pasgt_g_d";

comment "Add weapons";
this addWeapon "CUP_arifle_MG36_camo";
this addPrimaryWeaponItem "optic_ACO_grn";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

comment "Set identity";
[this,"USP_PATCH_USA_ARMY_SF_AIR_OCP"] call BIS_fnc_setUnitInsignia;