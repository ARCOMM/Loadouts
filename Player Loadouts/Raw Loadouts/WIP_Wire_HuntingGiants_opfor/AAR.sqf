removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;
this forceAddUniform "U_B_CombatUniform_mcam_tshirt";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "11Rnd_45ACP_Mag";};
this addVest "V_PlateCarrier2_blk";
this addItemToVest "ACE_tourniquet";
for "_i" from 1 to 7 do {this addItemToVest "30Rnd_556x45_Stanag_red";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
this addItemToVest "SmokeShell";
this addBackpack "B_AssaultPack_blk";
for "_i" from 1 to 8 do {this addItemToBackpack "ACE_20Rnd_762x51_Mag_Tracer";};
this addHeadgear "H_HelmetSpecB_blk";
this addWeapon "arifle_SPAR_01_blk_F";
this addPrimaryWeaponItem "optic_Holosight_blk_F";
this addWeapon "hgun_Pistol_heavy_01_F";
this addHandgunItem "optic_MRD";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
