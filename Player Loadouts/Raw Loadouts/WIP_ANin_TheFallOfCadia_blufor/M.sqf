
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
this forceAddUniform "U_TIOW_Comissar";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACRE_PRC343";
this addItemToUniform "ACRE_PRC152";
this addItemToUniform "ACRE_PRC148";
for "_i" from 1 to 9 do {this addItemToUniform "TIOW_IGBoltPistol_Mag";};
this addHeadgear "TIOW_Comissar_Cap";
this addGoggles "TIOW_F_Gloves_Brown";

comment "Add weapons";
this addWeapon "TIOW_Bolt_Pistol";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
