this forceAddUniform "MNP_CombatUniform_Ranger_A";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_Eagle_SPC_MG";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
this addItemToVest "hlc_200rnd_556x45_M_SAW";
this addBackpack "CUP_B_USPack_Coyote";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_200rnd_556x45_M_SAW";};
this addHeadgear "CUP_H_CZ_Helmet09";
comment "Add weapons";
this addWeapon "hlc_lmg_m249para";
this addPrimaryWeaponItem "ACE_muzzle_mzls_B";
comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

for "_i" from 1 to 2 do {this addItemToVest "11Rnd_45ACP_Mag";};

this addWeapon "hgun_Pistol_heavy_01_F";