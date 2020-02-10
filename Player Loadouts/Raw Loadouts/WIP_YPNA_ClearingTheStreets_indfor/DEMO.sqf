_id = selectRandom [0, 1, 2];
_uniforms = ["CUP_I_B_PMC_Unit_7","CUP_I_B_PMC_Unit_14","CUP_I_B_PMC_Unit_12"];

comment "Add containers";
this forceAddUniform (_uniforms select _id);
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "MNP_Vest_NZ_1";
for "_i" from 1 to 3 do {this addItemToVest "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 8 do {this addItemToVest "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_RGD5";};
this addItemToVest "CUP_8Rnd_9x18_Makarov_M";
this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_PipeBomb_M";};
this addItemToBackpack "DemoCharge_Remote_Mag";
this addHeadgear "H_HelmetB_camo";

comment "Add weapons";
this addWeapon "CUP_arifle_AK74M";
this addWeapon "CUP_hgun_Makarov";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
