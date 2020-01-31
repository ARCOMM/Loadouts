this forceAddUniform "MNP_CombatUniform_Ranger_A";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Green";};
this addBackpack "CUP_B_USPack_Coyote";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};
this addHeadgear "CUP_H_CZ_Helmet10";

comment "Add weapons";
this addWeapon "CUP_arifle_M16A4_Base";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
