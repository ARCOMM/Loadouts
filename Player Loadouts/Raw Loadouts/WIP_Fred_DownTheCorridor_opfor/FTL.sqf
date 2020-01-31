this call compile preprocessFileLineNumbers "loadouts\opfor\BASE.sqf";

for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M";};
this addItemToVest "SmokeShell";

this addBackpack "CUP_B_Kombat_Radio_Olive";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_IlumFlareWhite_GP25_M";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_1Rnd_HE_GP25_M";};

this addWeapon selectRandom ["CUP_arifle_AK47_GL_Early", "CUP_arifle_AKM_GL_Early"];
this addPrimaryWeaponItem "cup_acc_flashlight";
