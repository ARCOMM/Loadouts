comment "Exported from Arsenal by Feebee";

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "11Rnd_45ACP_Mag";
this addVest "V_PlateCarrier2_rgr";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 4 do {this addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 5 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
this addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShellGreen";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShellRed";};
for "_i" from 1 to 6 do {this addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_SmokeGreen_Grenade_shell";};
this addItemToBackpack "130Rnd_338_Mag";
this addHeadgear "H_HelmetB";

comment "Add weapons";
this addWeapon "arifle_SPAR_01_GL_blk_F";
this addPrimaryWeaponItem "optic_ACO_grn";
this addWeapon "hgun_Pistol_heavy_01_F";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";
