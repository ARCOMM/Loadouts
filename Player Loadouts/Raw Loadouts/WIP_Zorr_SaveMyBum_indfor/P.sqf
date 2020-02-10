
comment "Exported from Arsenal by ZorroUK";

comment "[!] UNIT MUST BE LOCAL [!]";
if (!local this) exitWith {};


comment "Add containers";
this forceAddUniform "CUP_I_B_PMC_Unit_3";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {this addItemToUniform "CUP_6Rnd_45ACP_M";};
this addVest "CUP_V_PMC_CIRAS_Coyote_Veh";
for "_i" from 1 to 8 do {this addItemToVest "CUP_6Rnd_45ACP_M";};
this addHeadgear "CUP_H_NAPA_Fedora";
this addGoggles "CUP_TK_NeckScarf";

comment "Add weapons";
this addWeapon "CUP_hgun_TaurusTracker455";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";



