comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
this addVest "V_PlateCarrierGL_mtp";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 5 do {this addItemToVest "30Rnd_65x39_caseless_mag";};
for "_i" from 1 to 5 do {this addItemToVest "30Rnd_65x39_caseless_mag_Tracer";};
this addBackpack "B_AssaultPack_mcamo";
for "_i" from 1 to 6 do {this addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 4 do {this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShellRed";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShellGreen";};
this addHeadgear "H_HelmetSpecB_paint2";

comment "Add weapons";
this addWeapon "arifle_MX_GL_F";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

