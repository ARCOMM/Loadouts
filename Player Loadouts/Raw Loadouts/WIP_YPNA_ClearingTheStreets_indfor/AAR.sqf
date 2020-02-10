_id = selectRandom [0, 1];
_uniforms = ["CUP_I_B_PMC_Unit_19","CUP_I_B_PMC_Unit_14"];

comment "Add containers";
this forceAddUniform (_uniforms select _id);
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "MNP_Vest_NZ_1";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addItemToVest "CUP_HandGrenade_RGD5";
this addItemToVest "SmokeShellRed";
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M";};
for "_i" from 1 to 2 do {this addItemToVest "hlc_30Rnd_545x39_t_ak";};
this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 6 do {this addItemToBackpack "hlc_75Rnd_762x39_m_rpk";};
this addHeadgear "H_HelmetB_camo";

comment "Add weapons";
this addWeapon "CUP_arifle_AK74M";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";