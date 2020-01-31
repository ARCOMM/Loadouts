
comment "Add weapons";
this addWeapon "hlc_m249_pip3";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "hlc_200rnd_556x45_M_SAW";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "U_O_R_Gorka_01_black_F";
this addVest "V_TacVestIR_blk";
this addBackpack "B_AssaultPack_blk";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_epinephrine";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_personalAidKit";
for "_i" from 1 to 3 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToVest "200Rnd_556x45_Box_Red_F";};
for "_i" from 1 to 3 do {this addItemToBackpack "200Rnd_556x45_Box_Red_F";};
this addHeadgear "CUP_H_PMC_Cap_Back_Grey";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

