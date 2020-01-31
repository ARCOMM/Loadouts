this forceAddUniform "U_C_Poor_1";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "30Rnd_762x39_Mag_F";
this addVest "CUP_V_O_TK_Vest_1";
for "_i" from 1 to 8 do {this addItemToVest "30Rnd_762x39_Mag_F";};
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";

comment "Add weapons";
this addWeapon "arifle_AKM_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

