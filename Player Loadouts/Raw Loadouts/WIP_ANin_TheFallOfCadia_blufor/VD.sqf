
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
this forceAddUniform "CadTnkUni836th";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 3 do {this addItemToUniform "LuciusLaspistol_mag";};
for "_i" from 1 to 2 do {this addItemToUniform "30Rnd_Agrip_mag";};
this addVest "Cad_Gear836th";
for "_i" from 1 to 3 do {this addItemToVest "LuciusLaspistol_mag";};
for "_i" from 1 to 4 do {this addItemToVest "30Rnd_Agrip_mag";};
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_Agrip_mag_Tracer";};
this addHeadgear "Cad_Tnk_Helm";

comment "Add weapons";
this addWeapon "TIOW_Type3_AgripinaaAuto_Base";
this addWeapon "LuciusLaspistolGreen";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

comment "Set identity";
[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
