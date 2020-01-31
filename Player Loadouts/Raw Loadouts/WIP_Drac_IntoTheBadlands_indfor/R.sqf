
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
this addWeapon "CUP_arifle_L85A2";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";

comment "Add containers";
this forceAddUniform "CUP_U_B_BAF_MTP_S5_UnRolled";
this addVest "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader";
this addBackpack "CUP_B_Bergen_BAF";

comment "Add items to containers";
for "_i" from 1 to 5 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 4 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_L109A1_HE";};
this addItemToVest "SmokeShell";
this addHeadgear "CUP_H_BAF_Helmet_4_MTP";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
