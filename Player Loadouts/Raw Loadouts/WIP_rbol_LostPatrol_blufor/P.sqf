
comment "Add containers";
this forceAddUniform "U_B_HeliPilotCoveralls";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
this addVest "CUP_V_B_RRV_DA2";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_EMAG_Tan";};
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_30Rnd_556x45_EMAG_Tan";};
this addBackpack "B_LegStrapBag_coyote_F";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_30Rnd_556x45_EMAG_Tan";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_HandGrenade_M67";};
this addItemToBackpack "SmokeShellRed";
this addItemToBackpack "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_15Rnd_9x19_M9";};
this addHeadgear "H_PilotHelmetHeli_O";
this addGoggles "G_Aviator";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_desert_carryhandle";
this addWeapon "CUP_hgun_M9";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
