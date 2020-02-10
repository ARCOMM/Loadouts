this forceAddUniform "usm_bdu_w";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "usm_vest_rba_lbe_rm";
for "_i" from 1 to 6 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addItemToVest "SmokeShell";
this addItemToVest "MiniGrenade";
for "_i" from 1 to 3 do {this addItemToVest "hlc_30rnd_556x45_MDim";};
this addBackpack "usm_pack_alice";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_200rnd_556x45_M_SAW";};
this addHeadgear "usm_helmet_pasgt_g_w_m";
this addWeapon "RH_M16A2";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

