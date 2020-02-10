comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "11Rnd_45ACP_Mag";
this addVest "V_PlateCarrier2_rgr";
for "_i" from 1 to 4 do {this addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 5 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addBackpack "B_AssaultPack_rgr";
this addHeadgear "H_HelmetB";

comment "Add weapons";
this addWeapon "arifle_SPAR_01_blk_F";
this addPrimaryWeaponItem "acc_flashlight";
this addPrimaryWeaponItem "optic_ACO_grn";
this addWeapon "hgun_Pistol_heavy_01_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";
