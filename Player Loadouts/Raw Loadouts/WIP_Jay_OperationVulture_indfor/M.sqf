this call compile loadFile "loadouts\indfor\random.sqf";

for "_i" from 1 to 8 do { this addItemToVest "30Rnd_762x39_Mag_Green_F"; };
this addWeapon "hlc_rifle_akm";

this addBackpack "CUP_B_RUS_Backpack";
for "_i" from 1 to 50 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};
