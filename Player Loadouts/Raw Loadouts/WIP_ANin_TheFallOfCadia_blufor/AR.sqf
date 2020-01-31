
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
for "_i" from 1 to 3 do {this addItemToUniform "LuciusLaspistol_mag";};
this addVest "Cad_Gear836th";
for "_i" from 1 to 8 do {this addItemToVest "M36KantRifle_mag";};
this addItemToVest "HandGrenade";
this addHeadgear "Cad_InfBreather_Helm836th";

comment "Add weapons";
this addWeapon "M36KantRifle836";
this addWeapon "LuciusLaspistolGreen";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
