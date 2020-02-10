this call compile preprocessFileLineNumbers "loadouts\opfor\BASE.sqf";

this addVest "CUP_V_O_TK_Vest_2";
this addBackpack "CUP_B_RPGPack_Khaki";

for "_i" from 1 to 9 do {this addItemToVest "CUP_20Rnd_762x51_FNFAL_M";};
this addWeapon "CUP_arifle_FNFAL";

this addWeapon "CUP_launch_RPG7V";
this addSecondaryWeaponItem "cup_optic_pgo7v";
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_PG7VM_M";};
