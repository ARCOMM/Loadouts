
this addWeapon "CUP_arifle_AKMS_top_rail";
this addPrimaryWeaponItem "optic_Aco";
this addPrimaryWeaponItem "CUP_30Rnd_762x39_AK47_M";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";
;
this forceAddUniform "CUP_O_TKI_Khet_Partug_02";
this addVest "CFP_Tactical1_IranDesert2";
this addBackpack "CUP_B_TK_Medic_Desert";

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
this addItemToUniform "CUP_30Rnd_762x39_AK47_M";
for "_i" from 1 to 3 do {this addItemToVest "CUP_30Rnd_762x39_AK47_M";};
for "_i" from 1 to 1 do {this addItemToVest "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_30Rnd_762x39_AK47_M";};
this addHeadgear "CUP_H_TKI_Pakol_1_01";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

[this,"usm_PersianHead_A3_01","ace_novoice"] call BIS_fnc_setIdentity;
