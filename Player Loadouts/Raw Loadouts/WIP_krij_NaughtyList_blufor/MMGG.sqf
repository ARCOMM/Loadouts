
this forceAddUniform "usm_bdu_ubn";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_Flashlight_XL50";
this addVest "V_PlateCarrier2_blk";
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addItemToVest "SmokeShell";
this addItemToVest "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
this addBackpack "MNP_B_WB_KB";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";};
this addHeadgear "MNP_Boonie_WW1";

comment "Add weapons";
this addWeapon "CUP_lmg_M240";
this addWeapon "CUP_hgun_M9";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
