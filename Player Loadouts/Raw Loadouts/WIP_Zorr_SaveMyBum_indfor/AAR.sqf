
comment "Exported from Arsenal by ZorroUK";

comment "[!] UNIT MUST BE LOCAL [!]";
if (!local this) exitWith {};


comment "Add containers";
this forceAddUniform "CUP_I_B_PMC_Unit_15";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_I_RACS_Carrier_Vest";
for "_i" from 1 to 7 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
this addItemToVest "SmokeShell";
this addItemToVest "CUP_HandGrenade_M67";
this addBackpack "B_Kitbag_cbr";
for "_i" from 1 to 4 do {this addItemToBackpack "hlc_200rnd_556x45_M_SAW";};
this addHeadgear "CUP_H_PMC_Cap_PRR_Tan";
this addGoggles "CUP_FR_NeckScarf2";

comment "Add weapons";
this addWeapon "CUP_arifle_M4A3_black";
this addPrimaryWeaponItem "optic_Aco";
this addWeapon "CUP_hgun_M9";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";



