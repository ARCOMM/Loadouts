this call compile preprocessFileLineNumbers "loadouts\opfor\BASE.sqf";
for "_i" from 1 to 4 do {this addItem "CUP_30Rnd_762x39_AK47_bakelite_M";};
for "_i" from 1 to 2 do {this addItem "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M";};
this addWeapon selectRandom ["CUP_arifle_AK47_Early", "CUP_arifle_AKM_Early", "CUP_arifle_AKMS_Early", "CUP_arifle_AKS"];
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
