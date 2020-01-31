
comment "Add weapons";
this addWeapon "hlc_rifle_416D10";
this addPrimaryWeaponItem "optic_Aco";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "CUP_hgun_Mac10";
this addHandgunItem "CUP_30Rnd_45ACP_MAC10_M";

comment "Add containers";
this forceAddUniform "CFP_U_BattleDressUniform_tigerstripe";
this addVest "CUP_V_PMC_CIRAS_Black_Veh";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_MX991";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_personalAidKit";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_Chemlight_HiWhite";};
this addItemToUniform "ACE_HandFlare_Green";
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_30Rnd_45ACP_MAC10_M";};
this addHeadgear "CUP_H_CZ_Hat01";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
