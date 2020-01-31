
comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam_vest";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_EarPlugs";
this addVest "CUP_V_B_RRV_DA2";
this addItemToVest "hlc_100Rnd_762x51_M_M60E4";
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addBackpack "B_Kitbag_mcamo";
this addItemToBackpack "SmokeShellGreen";
this addItemToBackpack "SmokeShellRed";
for "_i" from 1 to 3 do {this addItemToBackpack "hlc_100Rnd_762x51_B_M60E4";};
this addHeadgear "H_HelmetSpecB_sand";
this addGoggles "G_Combat";

comment "Add weapons";
this addWeapon "CUP_lmg_Mk48_des";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

