
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
this addItemToUniform "ACRE_PRC152";
this addItemToUniform "ACRE_PRC148";
for "_i" from 1 to 6 do {this addItemToUniform "LuciusLaspistol_mag";};
this addVest "Cad_Gear836th";
this addHeadgear "Cad_RebreatherMaskPhoto836th";

comment "Add weapons";
this addWeapon "LuciusLaspistolBlack";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

comment "Set identity";
[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
