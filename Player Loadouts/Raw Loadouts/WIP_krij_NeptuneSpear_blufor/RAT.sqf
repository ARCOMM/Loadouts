this forceAddUniform "MNP_CombatUniform_DS_B";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_IR_Strobe_Item";
for "_i" from 1 to 2 do {this addItemToUniform "B_IR_Grenade";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "MNP_Vest_DS_1";
for "_i" from 1 to 9 do {this addItemToVest "hlc_30rnd_556x45_S";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 3 do {this addItemToVest "11Rnd_45ACP_Mag";};
this addHeadgear "H_HelmetB_light_desert";
this addGoggles "CUP_PMC_Facewrap_Tan";

comment "Add weapons";
this addWeapon "hlc_rifle_416D10_st6";
this addPrimaryWeaponItem "hlc_muzzle_556NATO_M42000";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_15";
this addPrimaryWeaponItem "CUP_optic_HoloBlack";
this addWeapon "CUP_launch_M136";
this addWeapon "hgun_Pistol_heavy_01_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "CUP_NVG_GPNVG_black";

