this addWeapon "hlc_rifle_SG551SB_RIS";
this addPrimaryWeaponItem "CUP_optic_CompM4";
this addPrimaryWeaponItem "hlc_30Rnd_556x45_T_sg550";
this addWeapon "hlc_pistol_P226US";
this addHandgunItem "hlc_15Rnd_9x19_B_P226";
this forceAddUniform "U_B_GEN_Commander_F";
this addVest "V_TacVest_blk_POLICE";
this addBackpack "B_AssaultPack_blk";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_epinephrine";
for "_i" from 1 to 7 do {this addItemToVest "hlc_30Rnd_556x45_T_sg550";};
for "_i" from 1 to 3 do {this addItemToVest "hlc_15Rnd_9x19_B_P226";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_tourniquet";};
this addHeadgear "H_MilCap_gen_F";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
[this,"USP_PATCH_ID_MEDIC_CROSS"] call BIS_fnc_setUnitInsignia;