this call compile preprocessFileLineNumbers "loadouts\blufor\BASE.sqf";

this addVest "usm_vest_pasgt_lbe_rmp_m";

this addBackpack "usm_pack_st138_prc77";

for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
this addItemToVest "SmokeShell";

this addWeapon "CUP_arifle_M16A2";
this addPrimaryWeaponItem "cup_acc_flashlight";

this addWeapon "CUP_hgun_M9";