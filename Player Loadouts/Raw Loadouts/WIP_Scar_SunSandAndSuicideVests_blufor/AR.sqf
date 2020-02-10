

comment "Add containers";
this forceAddUniform "CUP_U_B_USArmy_TwoKnee";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_MTV_Patrol";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
this addItemToVest "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
this addBackpack "CUP_B_AssaultPack_Coyote";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";};
this addHeadgear "CUP_H_USArmy_Helmet_ECH1_Sand";
this addGoggles "G_Bandanna_tan";

comment "Add weapons";
this addWeapon "CUP_lmg_Mk48_des";
this addPrimaryWeaponItem "CUP_optic_CompM2_Desert";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "CUP_NVG_PVS7";


