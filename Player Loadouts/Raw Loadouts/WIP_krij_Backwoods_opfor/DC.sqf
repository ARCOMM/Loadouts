this forceAddUniform "U_I_C_Soldier_Bandit_2_F";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "30Rnd_762x39_AK12_Mag_F";
this addVest "CUP_V_O_TK_Vest_1";
for "_i" from 1 to 2 do {this addItemToVest "CUP_1Rnd_HE_GP25_M";};
for "_i" from 1 to 6 do {this addItemToVest "30Rnd_762x39_AK12_Mag_F";};
for "_i" from 1 to 2 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";

comment "Add weapons";
this addWeapon "arifle_AK12_GL_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

