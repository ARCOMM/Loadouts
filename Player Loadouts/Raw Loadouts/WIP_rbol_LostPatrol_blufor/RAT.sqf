
comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam_vest";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addVest "CUP_V_B_RRV_DA2";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_EMAG_Tan";};
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addBackpack "CUP_B_AssaultPack_Coyote";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_30Rnd_556x45_EMAG_Tan";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_HandGrenade_M67";};
this addItemToBackpack "ACE_PreloadedMissileDummy_M72A6_CUP";
this addItemToBackpack "SmokeShellGreen";
this addItemToBackpack "SmokeShellRed";
this addHeadgear "H_HelmetSpecB_sand";
this addGoggles "G_Combat";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A3_desert";
this addWeapon "CUP_launch_M72A6_Special";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
