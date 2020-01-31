#include "BASE.sqf"

this addVest "CUP_V_PMC_CIRAS_Winter_TL";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_762x39_AK47_M";};
this addWeapon "CUP_arifle_AK104";
this addPrimaryWeaponItem "cup_optic_ekp_8_02";

for "_i" from 1 to 2 do {this addItemToVest "16Rnd_9x21_Mag";};
this addWeapon "hgun_Rook40_F";

this addWeapon "Binocular";
this addItemToUniform "ACE_MapTools";
this linkItem "ItemGPS";
