this forceAddUniform "usm_bdu_odg";
this addVest "usm_vest_LBE_rm";
for "_i" from 1 to 3 do {this addItemToVest "ACE_fieldDressing";};
this addItemToVest "ACE_morphine";
this addItemToVest "ACE_tourniquet";
for "_i" from 1 to 6 do {this addItemToVest "RH_20Rnd_556x45";};
for "_i" from 1 to 8 do {this addItemToVest "RH_20Rnd_556x45_Red";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_7Rnd_45ACP_1911";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_HandFlare_Red";};
this addItemToVest "SmokeShell";
this addItemToVest "CUP_HandGrenade_M67";
this addHeadgear "CUP_H_USArmy_Helmet_M1_Olive";

comment "Add weapons";
this addWeapon "RH_M16a1";
this addWeapon "CUP_hgun_Colt1911";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

