
comment "Add containers";
this forceAddUniform "CUP_U_C_Worker_02";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_12Rnd_9x18_PMM_M";};
this addVest "V_BandollierB_blk";
this addBackpack "B_Messenger_IDAP_F";
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_12Rnd_9x18_PMM_M";};
this addGoggles "CUP_RUS_Balaclava_blk";

comment "Add weapons";
this addWeapon "CUP_hgun_PMM";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
[this,"usm_AsianHead_A3_03","cup_d_male02_cz"] call BIS_fnc_setIdentity;
