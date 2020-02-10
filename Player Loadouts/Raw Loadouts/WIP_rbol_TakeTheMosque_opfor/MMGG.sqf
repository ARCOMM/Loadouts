
this addWeapon "CUP_lmg_L110A1";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";

this forceAddUniform "CFP_U_KhetPartug_Short_EDRL";
this addVest "CFP_Tactical1_EDRL";
this addBackpack "B_FieldPack_khk";

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToVest "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
for "_i" from 1 to 1 do {this addItemToBackpack "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};
this addHeadgear "CUP_H_TKI_SkullCap_02";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

[this,"usm_PersianHead_A3_01","ace_novoice"] call BIS_fnc_setIdentity;
