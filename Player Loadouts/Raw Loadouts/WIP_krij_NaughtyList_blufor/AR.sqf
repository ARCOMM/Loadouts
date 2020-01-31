
this forceAddUniform "usm_bdu_ubn";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_Flashlight_XL50";
this addVest "V_PlateCarrier2_blk";
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addItemToVest "SmokeShell";
this addItemToVest "hlc_200rnd_556x45_M_SAW";
this addBackpack "MNP_B_WB_KB";
this addItemToBackpack "hlc_200rnd_556x45_M_SAW";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_200rnd_556x45_T_SAW";};
this addHeadgear "MNP_Boonie_WW1";

comment "Add weapons";
this addWeapon "hlc_m249_pip1";
this addWeapon "CUP_hgun_M9";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

