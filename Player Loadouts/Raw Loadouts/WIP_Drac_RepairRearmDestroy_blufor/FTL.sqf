comment "Exported from Arsenal by Draco194";

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
this forceAddUniform "CUP_U_B_USMC_FROG1_DMARPAT";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "hlc_30rnd_556x45_EPR";};
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
this addItemToVest "SmokeShell";
this addItemToVest "SmokeShellBlue";
this addBackpack "B_Kitbag_cbr";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_HandGrenade_L109A1_HE";};
for "_i" from 1 to 5 do {this addItemToBackpack "SmokeShell";};
for "_i" from 1 to 6 do {this addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 5 do {this addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
this addHeadgear "H_HelmetSpecB_sand";
this addGoggles "G_Combat";

comment "Add weapons";
this addWeapon "hlc_rifle_m4m203";
this addPrimaryWeaponItem "ACE_muzzle_mzls_L";
this addPrimaryWeaponItem "optic_Holosight";
this addWeapon "CUP_hgun_PB6P9";
this addHandgunItem "CUP_muzzle_PB6P9";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
this setFace "TanoanHead_A3_02";
this setSpeaker "ace_novoice";
