
comment "Add containers";
this forceAddUniform "U_BG_Guerilla2_3";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToUniform "ACE_Banana";};
this addVest "V_HarnessO_ghex_F";
for "_i" from 1 to 3 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_762x39_AK47_M";};
this addBackpack "CUP_B_SLA_Medicbag";
for "_i" from 1 to 25 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_salineIV_250";};
this addHeadgear "CUP_H_TKI_Pakol_1_02";
this addGoggles "G_Aviator";

comment "Add weapons";
this addWeapon "CUP_arifle_AK47";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
