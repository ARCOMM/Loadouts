this call compile preprocessFileLineNumbers "loadouts\blufor\BASE.sqf";
for "_i" from 1 to 4 do {this addItem "CUP_30Rnd_545x39_AK_M";};
for "_i" from 1 to 2 do {this addItem "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M";};
this addBackpack "CUP_B_AlicePack_OD";
for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_personalAidKit";};
this addWeapon "CUP_arifle_AK74_Early";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
