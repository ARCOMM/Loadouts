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
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 4 do {this addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 4 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
this addHeadgear "H_HelmetB_grass";
this addWeapon "hlc_rifle_M4";
this addWeapon "CUP_hgun_M9";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
