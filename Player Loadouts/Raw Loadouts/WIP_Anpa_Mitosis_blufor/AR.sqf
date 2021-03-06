_uniformList = ["CUP_I_TKG_Khet_Jeans_01", "CUP_I_TKG_Khet_Partug_08", "CUP_I_TKG_Khet_Jeans_04", "CUP_I_TKG_Khet_Partug_02", "CUP_I_TKG_Khet_Jeans_04", "CUP_I_TKG_Khet_Partug_06", "CUP_I_TKG_Khet_Partug_05", "CUP_I_TKG_Khet_Jeans_03", "CUP_I_TKG_Khet_Partug_01", "CUP_I_TKG_Khet_Partug_07", "CUP_I_TKG_Khet_Partug_03"];
_vestList = ["CUP_V_I_Guerilla_Jacket"];
_headgearList = ["CUP_H_TKI_Lungee_Open_01, CUP_H_TKI_Lungee_Open_02, CUP_H_TKI_Lungee_Open_03", "CUP_H_TKI_Lungee_05", "CUP_H_TKI_Lungee_04", "CUP_H_TKI_Lungee_06", "CUP_H_TKI_Lungee_Open_06", "CUP_H_TKI_Lungee_Open_04", "CUP_H_TKI_Pakol_2_04", "CUP_H_TKI_Pakol_2_05", "H_ShemagOpen_khk", "CUP_H_TKI_SkullCap_05", "H_Bandanna_cbr", "H_Bandanna_khk", "H_Bandanna_gry"];

_uniform = _uniformList select floor(random(count _uniformList));
_vest = _vestList select floor(random(count _vestList));
_headgear = _headgearList select floor(random(count _headgearList));

this forceAddUniform _uniform;
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};

this addVest _vest;
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};

this addBackpack "usm_pack_200rnd_556_bandoliers";
for "_i" from 1 to 7 do {this addItemToBackpack "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};

this addHeadgear _headgear;

this addBackpack "CUP_B_ACRScout_m95";
for "_i" from 1 to 4 do {this addItemToBackpack "hlc_30Rnd_762x39_t_ak";};

this addWeapon "hlc_rifle_rpk74n";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";