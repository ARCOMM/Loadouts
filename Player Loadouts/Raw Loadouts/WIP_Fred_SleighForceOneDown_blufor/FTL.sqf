#include "BASE.sqf";

for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_XM8";};
for "_i" from 1 to 2 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_40mm_Flare_white";};
this addWeapon "CUP_arifle_XM8_Carbine_GL";

this addWeapon "Binocular";
this addItemToUniform "ACE_MapTools";
this linkItem "ItemGPS";
