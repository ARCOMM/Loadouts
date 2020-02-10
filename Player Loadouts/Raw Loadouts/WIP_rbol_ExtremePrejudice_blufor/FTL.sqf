
comment "Add weapons";
this addWeapon "CUP_arifle_HK416_CQB_M203_Black";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_15_Black";
this addPrimaryWeaponItem "CUP_muzzle_mfsup_Flashhider_556x45_Black";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_PMAG_QP";
this addPrimaryWeaponItem "CUP_1Rnd_HE_M203";
this addWeapon "CUP_hgun_Mk23";
this addHandgunItem "CUP_12Rnd_45ACP_mk23";

comment "Add containers";
this forceAddUniform "CUP_U_CRYE_BLK_Roll";
this addVest "SP_Modular1_Black";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_IR_Strobe_Item";
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 2 do {this addItemToUniform "Chemlight_blue";};
for "_i" from 1 to 3 do {this addItemToUniform "CUP_12Rnd_45ACP_mk23";};
this addItemToVest "Chemlight_blue";
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_PMAG_QP";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_40mm_Flare_ir";};
this addHeadgear "CUP_H_OpsCore_Black";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "arcore_nightvision_Gen8";

comment "Set identity";
[this,"USP_PATCH_USA_JSOC_DEVGRU_SILVER_BLK"] call BIS_fnc_setUnitInsignia;
