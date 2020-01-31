this call compile preprocessFileLineNumbers "loadouts\blufor\BASE.sqf";

this addVest "usm_vest_pasgt_lbe_gr_m";

this addBackpack "usm_pack_st138_prc77";

for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {this addItemToVest "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_40mm_Flare_white";};
this addItemToVest "SmokeShell";

this addWeapon "CUP_arifle_M16A2_GL";
