
comment "Add containers";
this forceAddUniform "usm_bdu_d";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
this addItemToVest "ACE_EarPlugs";
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellGreen";
this addItemToVest "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
this addBackpack "CUP_B_AssaultPack_Coyote";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};
this addHeadgear "usm_helmet_pasgt_g_d";

comment "Add weapons";
this addWeapon "CUP_lmg_m249_pip1";
this addPrimaryWeaponItem "optic_ACO_grn";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

comment "Set identity";
[this,"USP_PATCH_USA_ARMY_SF_AIR_OCP"] call BIS_fnc_setUnitInsignia;