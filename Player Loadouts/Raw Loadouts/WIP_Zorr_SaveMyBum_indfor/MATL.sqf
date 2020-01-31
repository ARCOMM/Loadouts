
comment "Exported from Arsenal by ZorroUK";

comment "[!] UNIT MUST BE LOCAL [!]";
if (!local this) exitWith {};


comment "Add containers";
this forceAddUniform "CUP_I_B_PMC_Unit_13";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_I_RACS_Carrier_Vest";
for "_i" from 1 to 7 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
for "_i" from 1 to 3 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
this addBackpack "B_AssaultPack_cbr";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_1Rnd_HEDP_M203";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_SmokePurple_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_SmokeBlue_Grenade_shell";};
for "_i" from 1 to 4 do {this addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
this addHeadgear "H_HelmetB_black";
this addGoggles "CUP_G_PMC_RadioHeadset_Glasses";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A1_BUIS_GL";
this addPrimaryWeaponItem "CUP_optic_HoloBlack";
this addWeapon "CUP_hgun_M9";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";


