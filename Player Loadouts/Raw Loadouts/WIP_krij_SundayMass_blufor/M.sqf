
this forceAddUniform "usm_bdu_w";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "usm_vest_rba_lbe_rm";
for "_i" from 1 to 6 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addItemToVest "SmokeShell";
this addItemToVest "MiniGrenade";
for "_i" from 1 to 3 do {this addItemToVest "hlc_30rnd_556x45_MDim";};
this addBackpack "usm_pack_m5_medic";
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_bodyBag";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 25 do {this addItemToBackpack "ACE_fieldDressing";};
this addHeadgear "usm_helmet_pasgt_g_w_m";
this addWeapon "RH_M16A2";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
