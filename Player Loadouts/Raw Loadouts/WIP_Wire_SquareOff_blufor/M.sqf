removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;
this forceAddUniform "CUP_U_B_BAF_MTP_S1_RolledUp";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_17Rnd_9x19_glock17";};
this addVest "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman";
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
this addItemToVest "CUP_HandGrenade_L109A2_HE";
this addItemToVest "SmokeShell";
this addBackpack "CUP_B_Bergen_BAF";
for "_i" from 1 to 40 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_tourniquet";};
this addHeadgear "CUP_H_BAF_Helmet_4_MTP";
this addWeapon "CUP_arifle_L85A2_G";
this addWeapon "CUP_hgun_Glock17_blk";
this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
