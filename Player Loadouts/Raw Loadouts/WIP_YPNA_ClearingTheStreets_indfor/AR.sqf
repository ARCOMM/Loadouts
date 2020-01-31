_id = selectRandom [0, 1];
_uniforms = ["CUP_I_B_PMC_Unit_2","CUP_I_B_PMC_Unit_13"];

comment "Add containers";
this forceAddUniform (_uniforms select _id);
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "MNP_Vest_NZ_1";
for "_i" from 1 to 3 do {this addItemToVest "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 3 do {this addItemToVest "hlc_75Rnd_762x39_m_rpk";};
this addHeadgear "H_HelmetB_camo";

comment "Add weapons";
this addWeapon "hlc_rifle_rpk";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
