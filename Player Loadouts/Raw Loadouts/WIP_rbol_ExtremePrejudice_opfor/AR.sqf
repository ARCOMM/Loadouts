
comment "Add weapons";
this addWeapon "hlc_m249_pip3";
this addPrimaryWeaponItem "optic_Aco";
this addPrimaryWeaponItem "hlc_200rnd_556x45_M_SAW";

comment "Add containers";
this forceAddUniform "CFP_U_BattleDressUniform_DPMWoodland";
this addVest "CUP_V_CZ_NPP2006_light_vz95";
this addBackpack "B_AssaultPack_eaf_F";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_MX991";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_Chemlight_HiWhite";};
this addItemToUniform "ACE_HandFlare_White";
this addItemToVest "hlc_200rnd_556x45_M_SAW";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_200rnd_556x45_M_SAW";};
this addHeadgear "CUP_H_RACS_Helmet_wdl";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
