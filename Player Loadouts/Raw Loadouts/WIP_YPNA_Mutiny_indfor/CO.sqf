this forceAddUniform "CUP_U_B_CDF_FST_2";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";

this addVest "CUP_V_CDF_6B3_5_FST";
for "_i" from 1 to 2 do {this addItemToVest "hlc_30Rnd_545x39_B_AK";};
for "_i" from 1 to 3 do {this addItemToVest "hlc_30Rnd_545x39_t_ak";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_1Rnd_HE_GP25_M";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_1Rnd_SMOKE_GP25_M";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_RGD5";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 2 do {this addItemToVest "10Rnd_9x21_Mag";};

this addHeadgear "CUP_H_RUS_6B27_olive";

comment "Add weapons";
this addWeapon "hlc_rifle_ak74m_gl";
this addWeapon "hgun_Pistol_01_F";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
