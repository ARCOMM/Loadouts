
comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam_vest";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_30Rnd_556x45_Stanag";};
this addVest "CUP_V_B_RRV_DA1";
this addItemToVest "CUP_30Rnd_556x45_Stanag";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_EMAG_Tan";};
this addItemToVest "SmokeShellGreen";
this addItemToVest "SmokeShellRed";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addBackpack "B_AssaultPack_cbr";
for "_i" from 1 to 3 do {this addItemToBackpack "hlc_100Rnd_762x51_B_M60E4";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_30Rnd_556x45_EMAG_Tan";};
this addHeadgear "H_HelmetSpecB_sand";
this addGoggles "G_Combat";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_desert_carryhandle";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
