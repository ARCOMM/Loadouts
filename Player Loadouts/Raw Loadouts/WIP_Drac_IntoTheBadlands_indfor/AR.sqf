
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
this addWeapon "CUP_lmg_m249_SQuantoon";
this addPrimaryWeaponItem "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
this addWeapon "CUP_hgun_Glock17_blk";
this addHandgunItem "CUP_acc_Glock17_Flashlight";
this addHandgunItem "optic_MRD";
this addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
this forceAddUniform "CUP_U_B_BAF_MTP_S5_UnRolled";
this addVest "CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner";
this addBackpack "CUP_B_Bergen_BAF";

comment "Add items to containers";
for "_i" from 1 to 5 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_L109A1_HE";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 2 do {this addItemToVest "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};
this addItemToBackpack "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
this addHeadgear "CUP_H_BAF_Helmet_3_MTP";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
