
comment "Add containers";
this forceAddUniform "U_C_Poloshirt_redwhite";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_12Rnd_9x18_PMM_M";};
this addVest "V_BandollierB_blk";
this addBackpack "B_Messenger_Olive_F";
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
this addItemToBackpack "ACE_salineIV_250";
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_12Rnd_9x18_PMM_M";};
this addHeadgear "H_Bandanna_surfer";
this addGoggles "G_Aviator";

comment "Add weapons";
this addWeapon "CUP_hgun_PMM";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
[this,"usm_AsianHead_A3_03","cup_d_male02_cz"] call BIS_fnc_setIdentity;
