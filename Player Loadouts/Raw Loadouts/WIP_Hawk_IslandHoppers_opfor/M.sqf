this forceAddUniform "U_O_T_Soldier_F";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";

this addVest "V_HarnessO_ghex_F";
for "_i" from 1 to 7 do {this addItemToVest "30Rnd_580x42_Mag_F";};
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_580x42_Mag_Tracer_F";};
for "_i" from 1 to 6 do {this addItemToVest "SmokeShell";};

this addBackpack "B_FieldPack_ghex_F";
for "_i" from 1 to 50 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};

this addItemToBackpack "rhs_mag_m18_green";
this addItemToBackpack "rhs_mag_m18_purple";
this addItemToBackpack "rhs_mag_m18_red";

this addHeadgear "H_HelmetO_ghex_F";

this addWeapon "arifle_CTAR_blk_F";
this addPrimaryWeaponItem "acc_flashlight";
for "_i" from 1 to 3 do {this addItemToUniform "16RND_9x21_Mag";};
this addWeapon "hgun_Rook40_F";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";