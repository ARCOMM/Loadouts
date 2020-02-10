
comment "Add weapons";
this addWeapon "CUP_arifle_mk18_black";
this addPrimaryWeaponItem "CUP_optic_Elcan";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";
this addWeapon "hlc_smg_mp5k";
this addHandgunItem "hlc_30Rnd_9x19_B_MP5";

comment "Add containers";
this forceAddUniform "CUP_U_C_Rocker_02";
this addVest "V_TacVest_blk";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_epinephrine";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_personalAidKit";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {this addItemToVest "hlc_30Rnd_9x19_B_MP5";};
this addHeadgear "H_Hat_brown";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
