
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
this addItemToUniform "ACRE_PRC343";
this addItemToUniform "ACRE_PRC148";
this addItemToUniform "ACRE_PRC152";
for "_i" from 1 to 4 do {this addItemToUniform "HandGrenade";};
for "_i" from 1 to 4 do {this addItemToUniform "TIOW_IGBoltPistol_Mag";};
this addVest "Cad_Gear836th";
for "_i" from 1 to 9 do {this addItemToVest "M36KantRifle_mag";};
this addBackpack "TIOW_CadBackpack";
for "_i" from 1 to 3 do {this addItemToBackpack "SmokeShellBlue";};
for "_i" from 1 to 3 do {this addItemToBackpack "SmokeShellGreen";};
for "_i" from 1 to 3 do {this addItemToBackpack "SmokeShellOrange";};
for "_i" from 1 to 3 do {this addItemToBackpack "SmokeShell";};
this addHeadgear "Cad_InfBreather_Helm836th";
this addGoggles "TIOW_F_Gloves_Black";

comment "Add weapons";
this addWeapon "M36KantRifle836";
this addWeapon "TIOW_Bolt_Pistol";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
