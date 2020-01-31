
comment "Add weapons";
this addWeapon "CUP_lmg_m249_pip1";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "CUP_200Rnd_TE4_White_Tracer_556x45_M249";

comment "Add containers";
this forceAddUniform "Flora1";
this addVest "CUP_V_CZ_NPP2006_nk_vz95";
this addBackpack "AOR1_Assault_Pack";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_epinephrine";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_200Rnd_TE4_White_Tracer_556x45_M249";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addHeadgear "H_HelmetB_snakeskin";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

