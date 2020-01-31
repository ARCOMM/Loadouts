
comment "Add containers";
this forceAddUniform "CUP_U_B_USArmy_TwoKnee";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_MTV_Patrol";
this addItemToVest "CUP_HandGrenade_M67";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellPurple";};
this addBackpack "CUP_B_GER_Medic_Desert";
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_epinephrine";};
this addHeadgear "CUP_H_USArmy_Helmet_ECH1_Sand";

comment "Add weapons";
this addWeapon "CUP_arifle_Mk16_CQC";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_2_desert";
this addPrimaryWeaponItem "CUP_optic_Eotech533";
this addWeapon "CUP_hgun_Colt1911";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "CUP_NVG_PVS7";


