
comment "Add containers";
this forceAddUniform "CUP_U_C_Villager_04";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_8Rnd_9x18_Makarov_M";};
this addVest "V_BandollierB_blk";
this addItemToVest "CUP_8Rnd_9x18_Makarov_M";
this addBackpack "B_Messenger_Black_F";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_8Rnd_9x18_Makarov_M";};
this addHeadgear "H_Bandanna_cbr";
this addGoggles "G_Bandanna_khk";

comment "Add weapons";
this addWeapon "CUP_hgun_Makarov";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
[this,"usm_AsianHead_A3_03","cup_d_male02_cz"] call BIS_fnc_setIdentity;
