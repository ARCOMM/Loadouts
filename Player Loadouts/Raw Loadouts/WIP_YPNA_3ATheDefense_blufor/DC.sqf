this forceAddUniform "MNP_CombatUniform_CZ_A";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "16Rnd_9x21_Mag";

this addVest "MNP_Vest_CZ_1";
for "_i" from 1 to 3 do {this addItemToVest "CUP_20Rnd_762x51_CZ805B";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B";};
for "_i" from 1 to 3 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 3 do {this addItemToVest "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 3 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};

this addHeadgear "MNP_Boonie_CZ";

comment "Add weapons";
this addWeapon "CUP_arifle_CZ805_B_GL";
this addPrimaryWeaponItem "CUP_optic_ZDDot";
this addWeapon "CUP_hgun_Duty";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
