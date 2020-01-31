
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
for "_i" from 1 to 2 do {this addItemToUniform "HandGrenade";};
this addItemToUniform "SmokeShell";
for "_i" from 1 to 4 do {this addItemToUniform "LuciusLaspistol_mag";};
this addVest "Cad_Gear836th";
this addItemToVest "HandGrenade";
for "_i" from 1 to 5 do {this addItemToVest "TIOW_Meltagun_Mag";};
for "_i" from 1 to 3 do {this addItemToVest "LuciusLaspistol_mag";};
this addHeadgear "Cad_InfBreather_Helm836th";
this addGoggles "TIOW_F_Gloves_Black";

comment "Add weapons";
this addWeapon "TIOW_MeltaGun_01";
this addWeapon "LuciusLaspistolGreen";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
