
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
this addWeapon "CUP_arifle_M4A3_camo";
this addPrimaryWeaponItem "optic_Holosight_khk_F";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Emag";
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
for "_i" from 1 to 8 do {this addItemToVest "CUP_30Rnd_556x45_Emag";};
this addItemToVest "CUP_17Rnd_9x19_glock17";
this addHeadgear "CFP_OpsC_Uncovered";
this addGoggles "CUP_G_PMC_Facewrap_Tropical_Glasses_Dark_Headset";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
[this,"GreekHead_A3_07","male09eng"] call BIS_fnc_setIdentity;

