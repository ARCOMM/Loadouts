this call compile preprocessFileLineNumbers "loadouts\blufor\BASE.sqf";

for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_Stanag_Tracer_Red";};
this addItemToVest "SmokeShell";

this addBackpack "usm_pack_200rnd_556_bandoliers";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};

this addWeapon "CUP_arifle_M16A2";
this addPrimaryWeaponItem "cup_acc_flashlight";