
comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam_vest";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
this addVest "CUP_V_B_RRV_DA2";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_EMAG_Tan";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 6 do {this addItemToVest "CUP_1Rnd_HE_M203";};
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellGreen";
this addItemToVest "CUP_HandGrenade_M67";
this addBackpack "CUP_B_AssaultPack_Coyote";
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_30Rnd_556x45_EMAG_Tan";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_1Rnd_HE_M203";};
this addItemToBackpack "SmokeShellRed";
this addItemToBackpack "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_HandGrenade_M67";};
this addHeadgear "H_HelmetSpecB_sand";
this addGoggles "G_Combat";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_BUIS_desert_GL";
this addWeapon "CUP_hgun_M9";
this addWeapon "Laserdesignator";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
