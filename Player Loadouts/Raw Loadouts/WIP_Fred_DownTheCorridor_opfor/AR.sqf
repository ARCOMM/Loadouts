this call compile preprocessFileLineNumbers "loadouts\opfor\BASE.sqf";

for "_i" from 1 to 4 do {this addItemToVest "CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M";};
this addItemToVest "SmokeShell";

this addWeapon selectRandom ["CUP_arifle_AKM_Early", "CUP_arifle_AKS", "CUP_arifle_AK47_Early"];
this addPrimaryWeaponItem "cup_acc_flashlight";