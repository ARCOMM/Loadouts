#include "BASE.sqf"

this addVest "CUP_V_PMC_CIRAS_Winter_Grenadier";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_762x39_AK47_M";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_1Rnd_HE_GP25_M";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_IlumFlareWhite_GP25_M";};
this addWeapon "CUP_arifle_AK109_GL";
this addPrimaryWeaponItem "cup_optic_ekp_8_02";

this addWeapon "Binocular";
this addItemToUniform "ACE_MapTools";
this linkItem "ItemGPS";
