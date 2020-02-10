
comment "Add weapons";
this addWeapon "CUP_arifle_G36C_VFG_wdl";
this addPrimaryWeaponItem "CUP_acc_Flashlight";
this addPrimaryWeaponItem "optic_Aco";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_G36_wdl";
this addWeapon "CUP_hgun_Mk23";
this addHandgunItem "CUP_12Rnd_45ACP_mk23";

comment "Add containers";
this forceAddUniform "CFP_U_BattleDressUniform_DPMWoodland";
this addVest "CUP_V_CZ_NPP2006_light_vz95";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_MX991";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_Chemlight_HiWhite";};
this addItemToUniform "ACE_HandFlare_White";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_G36_wdl";};
for "_i" from 1 to 3 do {this addItemToVest "ACE_M84";};
this addHeadgear "CUP_H_RACS_Helmet_wdl";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

