
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
this addWeapon "hlc_m249_SQuantoon";
this addPrimaryWeaponItem "hlc_200rnd_556x45_M_SAW";
this addPrimaryWeaponItem "CUP_bipod_VLTOR_Modpod_black";
this addWeapon "CUP_hgun_Glock17";
this addHandgunItem "optic_MRD_black";
this addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam_wdl_f";
this addVest "V_PlateCarrier_Kerry";
this addBackpack "CFP_AssaultPack_Woodland";

comment "Add items to containers";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToUniform "SmokeShell";};
this addItemToUniform "CUP_HandGrenade_L109A1_HE";
this addItemToVest "CUP_17Rnd_9x19_glock17";
this addItemToVest "hlc_200rnd_556x45_M_SAW";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_200rnd_556x45_M_SAW";};
this addHeadgear "CFP_OpsC_Uncovered";
this addGoggles "SP_Balaclava_Venom";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
[this,"GreekHead_A3_07","male09eng"] call BIS_fnc_setIdentity;
