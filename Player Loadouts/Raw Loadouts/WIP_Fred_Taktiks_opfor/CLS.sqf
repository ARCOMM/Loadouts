this call compile preprocessFileLineNumbers "loadouts\opfor\BASE.sqf";

for "_i" from 1 to 9 do {this addItemToVest "CUP_20Rnd_762x51_FNFAL_M";};
this addWeapon "CUP_arifle_FNFAL";

this addBackpack "CUP_B_SLA_Medicbag";
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
