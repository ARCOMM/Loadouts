comment "Add weapons";
this addWeapon "CUP_arifle_FNFAL_railed_desert";
this addPrimaryWeaponItem "CUP_muzzle_mfsup_Flashhider_762x51_Tan";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "CUP_20Rnd_762x51_FNFAL_M";
this addWeapon "hgun_Pistol_heavy_01_F";
this addHandgunItem "optic_MRD";
this addHandgunItem "11Rnd_45ACP_Mag";

comment "Add containers";
this forceAddUniform "CUP_I_B_PARA_Unit_6";
this addVest "CUP_V_CZ_NPP2006_nk_des";

comment "Add binoculars";
this addWeapon "CUP_Vector21Nite";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_personalAidKit";
this addItemToUniform "CUP_20Rnd_762x51_FNFAL_M";
for "_i" from 1 to 2 do {this addItemToUniform "11Rnd_45ACP_Mag";};
this addItemToVest "ACE_CableTie";
for "_i" from 1 to 3 do {this addItemToVest "11Rnd_45ACP_Mag";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_20Rnd_762x51_FNFAL_M";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addHeadgear "CUP_H_CZ_Cap_rgr";
this addGoggles "CFP_Tac_Goggles_Blk_Drk";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
