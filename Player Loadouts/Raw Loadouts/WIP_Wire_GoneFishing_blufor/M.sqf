removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;
this forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "V_PlateCarrier2_rgr";
this addItemToVest "HandGrenade";
this addItemToVest "SmokeShell";
this addItemToVest "CUP_15Rnd_9x19_M9";
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
this addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 40 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 4 do {this addItemToBackpack "ACE_salineIV_250";};
this addHeadgear "H_HelmetB_grass";
this addWeapon "arifle_SPAR_01_blk_F";
this addPrimaryWeaponItem "CUP_optic_ZDDot";
this addWeapon "CUP_hgun_M9";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
