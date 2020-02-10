this forceAddUniform "MNP_CombatUniform_Ranger_A";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
for "_i" from 1 to 5 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addBackpack "B_AssaultPack_cbr";
this addItemToBackpack "ToolKit";
this addHeadgear "CUP_H_CZ_Helmet10";

comment "Add weapons";
this addWeapon "hlc_rifle_Colt727";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
