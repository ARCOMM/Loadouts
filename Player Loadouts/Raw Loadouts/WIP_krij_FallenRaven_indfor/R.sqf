this addWeapon "CFP_Tavor_Black_Long";
this addPrimaryWeaponItem "CUP_optic_MicroT1";
this addPrimaryWeaponItem "30Rnd_556x45_Stanag";
this forceAddUniform "CFP_U_FieldUniform_idf";
this addVest "CFP_PlateCarrier1_IDF";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "30Rnd_556x45_Stanag";};
for "_i" from 1 to 6 do {this addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addItemToVest "SmokeShell";
this addHeadgear "CFP_MitzHelm1_Des2";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

