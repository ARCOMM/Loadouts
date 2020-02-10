this call compile preprocessFileLineNumbers "loadouts\opfor\BASE.sqf";

this addHeadgear "CUP_H_TK_Beret";
this addGoggles "G_Aviator";

for "_i" from 1 to 9 do {this addItemToVest "CUP_20Rnd_762x51_FNFAL_M";};
this addWeapon "CUP_arifle_FNFAL";

for "_i" from 1 to 2 do {this addItemToVest "CUP_6Rnd_45ACP_M";};
this addWeapon "CUP_hgun_TaurusTracker455";

this addWeapon "Binocular";
this addItem "ACE_MapTools";
