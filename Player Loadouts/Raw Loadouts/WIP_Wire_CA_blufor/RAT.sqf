removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;
this forceAddUniform "U_B_CombatUniform_mcam";
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_EarPlugs";
this addItemToUniform "ACE_EntrenchingTool";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
this addItemToUniform "16Rnd_9x21_Mag";
this addVest "V_PlateCarrier2_rgr_noflag_F";
for "_i" from 1 to 3 do {this addItemToVest "16Rnd_9x21_Mag";};
for "_i" from 1 to 4 do {this addItemToVest "ACE_30Rnd_556x45_Stanag_M995_AP_mag";};
for "_i" from 1 to 2 do {this addItemToVest "30Rnd_556x45_Stanag_green";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addBackpack "B_AssaultPack_rgr";
this addHeadgear "H_HelmetSpecB_paint1";
this addWeapon "arifle_SPAR_01_khk_F";
this addPrimaryWeaponItem "optic_Holosight_khk_F";
this addWeapon "launch_NLAW_F";
this addWeapon "hgun_P07_khk_F";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
