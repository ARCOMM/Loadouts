this forceAddUniform "usm_bdu_w";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "usm_vest_rba_lbv_rmp";
for "_i" from 1 to 2 do {this addItemToVest "CUP_7Rnd_45ACP_1911";};
for "_i" from 1 to 10 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 6 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 4 do {this addItemToVest "SmokeShell";};
this addHeadgear "usm_helmet_pasgt_g_w";
this addWeapon "RH_M16A2";
this addWeapon "CUP_launch_M72A6";
this addWeapon "CUP_hgun_Colt1911";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";