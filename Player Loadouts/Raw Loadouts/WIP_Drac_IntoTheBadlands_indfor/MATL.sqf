
comment "Exported from Arsenal by Draco194";

comment "[!] UNIT MUST BE LOCAL [!]";
if (!local this) exitWith {};

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add weapons";
this addWeapon "CUP_arifle_L85A2_GL";
this addPrimaryWeaponItem "30Rnd_556x45_Stanag_Tracer_Red";
this addPrimaryWeaponItem "CUP_1Rnd_HE_M203";
this addWeapon "CUP_launch_M136_Loaded";
this addSecondaryWeaponItem "CUP_M136_M";

comment "Add containers";
this forceAddUniform "CUP_U_B_BAF_MTP_S5_UnRolled";
this addVest "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman";
this addBackpack "CUP_B_Bergen_BAF";

comment "Add binoculars";
this addWeapon "Binocular";

comment "Add items to containers";
for "_i" from 1 to 5 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 8 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_L109A1_HE";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 5 do {this addItemToVest "CUP_1Rnd_HE_M203";};
this addItemToBackpack "RPG32_HE_F";
this addItemToBackpack "RPG32_F";
this addHeadgear "CUP_H_BAF_Helmet_2_MTP";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;

