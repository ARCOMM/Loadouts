
comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam_vest";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_30Rnd_556x45_EMAG_Tan";};
this addVest "CUP_V_B_RRV_DA2";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_EMAG_Tan";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellGreen";
this addBackpack "CUP_B_GER_Medic_Desert";
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_30Rnd_556x45_EMAG_Tan";};
this addItemToBackpack "SmokeShellGreen";
this addItemToBackpack "SmokeShellRed";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_HandGrenade_M67";};
this addHeadgear "H_HelmetSpecB_sand";
this addGoggles "G_Combat";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_desert_carryhandle";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
