
comment "Exported from Arsenal by A Ninja";

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

comment "Add containers";
this forceAddUniform "CadUni836th";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "HandGrenade";};
this addItemToUniform "SmokeShell";
for "_i" from 1 to 2 do {this addItemToUniform "LuciusLaspistol_mag";};
this addVest "Cad_MedGear836th";
for "_i" from 1 to 7 do {this addItemToVest "M36KantRifle_mag";};
this addItemToVest "HandGrenade";
this addBackpack "TIOW_CadMedicaeBackpack";
for "_i" from 1 to 2 do {this addItemToBackpack "FirstAidKit";};
this addItemToBackpack "Medikit";
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 8 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 2 do {this addItemToBackpack "M36KantRifle_mag";};
this addHeadgear "Cad_InfBreather_Helm836th";
this addGoggles "TIOW_F_Gloves_Black";

comment "Add weapons";
this addWeapon "M36KantRifle836";
this addWeapon "LuciusLaspistolGreen";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
[this,"ChaosHead_20",""] call BIS_fnc_setIdentity;
