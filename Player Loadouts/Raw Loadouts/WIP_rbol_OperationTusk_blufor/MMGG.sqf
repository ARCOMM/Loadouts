comment "Add weapons";
this addWeapon "CUP_lmg_M240";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CFP_RAID_DBDU_1";
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
this addBackpack "CUP_B_USPack_Coyote";

comment "Add items to containers";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "CUP_15Rnd_9x19_M9";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellYellow";};
this addItemToVest "CUP_15Rnd_9x19_M9";
this addItemToVest "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
this addItemToBackpack "CUP_HandGrenade_M67";
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShellYellow";};
this addItemToBackpack "SmokeShell";
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";};
this addHeadgear "usm_helmet_pasgt_dcu";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch"