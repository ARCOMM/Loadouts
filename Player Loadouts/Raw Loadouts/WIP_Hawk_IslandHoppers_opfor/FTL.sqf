this forceAddUniform "U_O_T_Soldier_F";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";

this addVest "V_HarnessOGL_ghex_F";
for "_i" from 1 to 7 do {this addItemToVest "30Rnd_580x42_Mag_F";};
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_580x42_Mag_Tracer_F";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};

this addBackpack "B_FieldPack_ghex_F";
for "_i" from 1 to 5 do {this addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 5 do {this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_SmokeGreen_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_HE_Grenade_shell";};

this addHeadgear "H_HelmetO_ghex_F";

this addWeapon "arifle_CTAR_GL_blk_F";
this addPrimaryWeaponItem "acc_flashlight";
for "_i" from 1 to 3 do {this addItemToUniform "16RND_9x21_Mag";};
this addWeapon "hgun_Rook40_F";

this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
