
comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_GL_carryhandle_desert";
this addPrimaryWeaponItem "CUP_optic_HoloDesert";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";
this addPrimaryWeaponItem "CUP_muzzle_snds_G36_desert";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CUP_U_CRYE_V3_Full";
this addVest "CUP_V_B_BAF_DDPM_Osprey_Mk3_Rifleman";
this addBackpack "CUP_B_AssaultPack_Coyote";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "Laserdesignator";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACRE_PRC343";
this addItemToUniform "ACE_epinephrine";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
this addItemToUniform "CUP_1Rnd_Smoke_M203";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_EMAG_Tan";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 4 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 1 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 1 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 1 do {this addItemToVest "SmokeShellYellow";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_30Rnd_556x45_EMAG_Tan";};
for "_i" from 1 to 1 do {this addItemToBackpack "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_30Rnd_556x45_PMAG_QP_Tan";};
this addItemToBackpack "SmokeShellYellow";
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_M84";};
this addHeadgear "H_HelmetSpecB_sand";
this addGoggles "G_Combat";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
