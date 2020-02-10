comment "Add containers";
this forceAddUniform "CUP_U_C_Worker_03";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_10Rnd_B_765x17_Ball_M";};
this addVest "V_BandollierB_blk";
this addBackpack "B_Messenger_IDAP_F";
this addHeadgear "H_Bandanna_surfer_blk";
this addGoggles "CFP_Neck_Plain_Atacs2";

comment "Add weapons";
this addWeapon "CUP_hgun_SA61";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
[this,"usm_AsianHead_A3_03","cup_d_male02_cz"] call BIS_fnc_setIdentity;
