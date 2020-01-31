
comment "Add containers";
this forceAddUniform "U_B_PilotCoveralls";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_30Rnd_9x19_MP5";};
for "_i" from 1 to 3 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
this addVest "CUP_V_B_BAF_DDPM_Osprey_Mk3_Pilot";
this addItemToVest "SmokeShellRed";
this addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_9x19_MP5";};
this addBackpack "B_LegStrapBag_black_F";
this addItemToBackpack "ACE_personalAidKit";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_30Rnd_9x19_MP5";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_15Rnd_9x19_M9";};
this addHeadgear "H_PilotHelmetHeli_B";

comment "Add weapons";
this addWeapon "CUP_smg_MP5A5";
this addPrimaryWeaponItem "CUP_optic_MicroT1_low";
this addWeapon "CUP_hgun_M9";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
