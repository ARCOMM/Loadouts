comment "Exported from Arsenal by Matuzalem";
comment "The forbidden scoped marksman loadout";

this forceAddUniform "CUP_U_O_RUS_Gorka_Partizan";
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_10Rnd_762x54_SVD_M";};
this addVest "CUP_V_CDF_6B3_1_Green";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_RGO";};
for "_i" from 1 to 18 do {this addItemToVest "CUP_10Rnd_762x54_SVD_M";};
this addHeadgear "CUP_H_RUS_ZSH_1";
this addGoggles "G_Bandanna_oli";

this addWeapon "CUP_srifle_SVD";
this addPrimaryWeaponItem "CUP_optic_PSO_1";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
