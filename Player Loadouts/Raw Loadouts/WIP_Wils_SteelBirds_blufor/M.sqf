this forceAddUniform "usm_bdu_odg";
for "_i" from 1 to 5 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_epinephrine";
this addItemToUniform "ACE_EarPlugs";
this addVest "usm_vest_rba_lbe_mg";
for "_i" from 1 to 10 do {this addItemToVest "RH_20Rnd_556x45_Red";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_7Rnd_45ACP_1911";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addBackpack "usm_pack_m5_medic";
for "_i" from 1 to 40 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
this addHeadgear "CUP_H_USArmy_Helmet_M1_Olive";
this addWeapon "RH_M16a1";
this addWeapon "CUP_hgun_Colt1911";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";