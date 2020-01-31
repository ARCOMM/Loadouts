
comment "Add weapons";
this addWeapon "CUP_arifle_Mk20_black";
this addPrimaryWeaponItem "CUP_muzzle_mfsup_Flashhider_762x51_Black";
this addPrimaryWeaponItem "CUP_optic_CompM2_low";
this addPrimaryWeaponItem "CUP_20Rnd_762x51_B_SCAR_bkl";
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
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_762x51_1_B_SCAR";};
this addHeadgear "CUP_H_OpsCore_Black";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "arcore_nightvision_Gen8";

