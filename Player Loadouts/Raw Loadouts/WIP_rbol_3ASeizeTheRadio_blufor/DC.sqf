
comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add containers";
this forceAddUniform "CUP_U_C_Rocker_01";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "CUP_10x_303_M";
this addVest "V_BandollierB_blk";
for "_i" from 1 to 3 do {this addItemToVest "CUP_10x_303_M";};
this addHeadgear "H_Bandanna_gry";
this addGoggles "G_Bandanna_blk";

comment "Add weapons";
this addWeapon "CUP_srifle_LeeEnfield";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
[this,"usm_AsianHead_A3_03","cup_d_male02_cz"] call BIS_fnc_setIdentity;
