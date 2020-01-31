
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
this addWeapon "hgun_PDW2000_F";
this addPrimaryWeaponItem "30Rnd_9x21_Mag";
this addWeapon "CUP_launch_M136_Loaded";
this addSecondaryWeaponItem "CUP_M136_M";
this addWeapon "CUP_hgun_Glock17";
this addHandgunItem "optic_MRD_black";
this addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
this forceAddUniform "CUP_U_CRYE_RGR_US_Roll";
this addVest "V_PlateCarrier_Kerry";
this addBackpack "CFP_AssaultPack_Woodland";

comment "Add items to containers";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToUniform "SmokeShell";};
this addItemToUniform "CUP_HandGrenade_L109A1_HE";
for "_i" from 1 to 6 do {this addItemToVest "30Rnd_9x21_Mag";};
this addItemToVest "CUP_17Rnd_9x19_glock17";
this addItemToBackpack "CUP_M136_M";
this addHeadgear "CUP_H_CZ_Helmet05";
this addGoggles "SP_Balaclava_Skull2";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
[this,"GreekHead_A3_07","male09eng"] call BIS_fnc_setIdentity;
