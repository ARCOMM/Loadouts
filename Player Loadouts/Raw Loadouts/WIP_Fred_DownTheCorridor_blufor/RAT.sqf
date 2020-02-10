this call compile preprocessFileLineNumbers "loadouts\blufor\BASE.sqf";

for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_Stanag_Tracer_Red";};
this addItemToVest "SmokeShell";

this addWeapon "CUP_arifle_M16A2";
this addPrimaryWeaponItem "cup_acc_flashlight";

this addWeapon selectRandom ["CUP_launch_M72A6", "CUP_launch_M72A6_Special"];