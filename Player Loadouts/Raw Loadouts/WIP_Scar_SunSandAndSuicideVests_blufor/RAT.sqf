

comment "Add containers";
this forceAddUniform "CUP_U_B_USArmy_TwoKnee";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_MTV_Patrol";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
for "_i" from 1 to 6 do {this addItemToVest "CUP_20Rnd_762x51_B_SCAR";};
this addBackpack "CUP_B_USPack_Coyote";
this addItemToBackpack "CUP_M136_M";
this addHeadgear "CUP_H_USArmy_Helmet_ECH1_Sand";
this addGoggles "G_Bandanna_tan";

comment "Add weapons";
this addWeapon "CUP_arifle_Mk17_CQC";
this addPrimaryWeaponItem "optic_Aco";
this addWeapon "CUP_launch_M136";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "CUP_NVG_PVS7";

