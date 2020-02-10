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
for "_i" from 1 to 2 do {this addItemToVest "150Rnd_556x45_Drum_Mag_F";};
this addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 2 do {this addItemToBackpack "150Rnd_556x45_Drum_Mag_Tracer_F";};
this addHeadgear "H_HelmetB";

comment "Add weapons";
this addWeapon "arifle_SPAR_02_blk_F";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "bipod_01_F_blk";
this addWeapon "hgun_Pistol_heavy_01_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";
