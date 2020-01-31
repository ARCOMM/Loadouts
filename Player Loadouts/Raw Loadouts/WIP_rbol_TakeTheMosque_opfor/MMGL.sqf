this addWeapon "CUP_arifle_AKMS_top_rail";
this addPrimaryWeaponItem "optic_Aco";
this addPrimaryWeaponItem "CUP_30Rnd_762x39_AK47_M";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

this forceAddUniform "CFP_U_KhetPartug_Long_light_olive";
this addVest "CFP_Tactical1_EDRL";
this addBackpack "B_FieldPack_khk";

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
this addItemToUniform "CUP_30Rnd_762x39_AK47_M";
for "_i" from 1 to 3 do {this addItemToVest "CUP_30Rnd_762x39_AK47_M";};
for "_i" from 1 to 1 do {this addItemToVest "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_30Rnd_762x39_AK47_M";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_M84";};
this addHeadgear "CUP_H_TKI_Lungee_05";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

[this,"usm_PersianHead_A3_01","ace_novoice"] call BIS_fnc_setIdentity;
