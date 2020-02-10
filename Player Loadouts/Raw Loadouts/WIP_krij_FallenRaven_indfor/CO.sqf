
this addWeapon "CUP_arifle_M4A1_GL_carryhandle";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";
this addPrimaryWeaponItem "CUP_1Rnd_HE_M203";
this addWeapon "Binocular";

this forceAddUniform "CFP_U_FieldUniform_idf";
this addVest "CFP_PlateCarrier1_IDF";
this addBackpack "B_AssaultPack_blk";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {this addItemToUniform "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_Emag";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_1Rnd_Smoke_M203";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_1Rnd_SmokeRed_M203";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_1Rnd_SmokeGreen_M203";};
this addHeadgear "CFP_MitzHelm1_Des2";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

