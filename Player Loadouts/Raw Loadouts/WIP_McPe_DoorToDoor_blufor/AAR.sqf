this forceAddUniform "usm_bdu_odg";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addVest "usm_vest_pasgt_lbv_rm_m";
for "_i" from 1 to 9 do {this addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addItemToVest "SmokeShell";
this addBackpack "usm_pack_762x51_ammobelts";
for "_i" from 1 to 4 do {this addItemToBackpack "hlc_100Rnd_762x51_M_M60E4";};
this addHeadgear "usm_helmet_pasgt_w_m";
this addWeapon "RH_M16A2";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";