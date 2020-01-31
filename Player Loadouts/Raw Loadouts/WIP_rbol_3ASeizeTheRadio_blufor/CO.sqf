
comment "Add containers";
this forceAddUniform "CUP_I_B_PMC_Unit_2";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_10Rnd_9x19_Compact";};
this addVest "SP_OpforRig1_Black";
for "_i" from 1 to 2 do {this addItemToVest "CUP_30Rnd_762x39_AK47_M";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_10Rnd_9x19_Compact";};
this addHeadgear "SP_BaseballCap_Green";

comment "Add weapons";
this addWeapon "CUP_arifle_AK47_Early";
this addWeapon "CUP_hgun_Compact";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
[this,"usm_AsianHead_A3_03","cup_d_male02_cz"] call BIS_fnc_setIdentity;

