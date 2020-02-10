this call compile preprocessFileLineNumbers "loadouts\blufor\BASE.sqf";

for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_Stanag_Tracer_Red";};
this addItemToVest "SmokeShell";

this addWeapon "CUP_arifle_M16A2";
this addPrimaryWeaponItem "cup_acc_flashlight";

this addBackpack "usm_pack_m5_medic";
for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};