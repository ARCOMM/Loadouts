
comment "Add weapons";
this addWeapon "hlc_rifle_416D10_st6";
this addPrimaryWeaponItem "optic_Aco";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "CUP_hgun_Mk23";
this addHandgunItem "CUP_12Rnd_45ACP_mk23";

comment "Add containers";
this forceAddUniform "SP_0000_Standard_BattleDressUniform_Green";
this addVest "CUP_V_PMC_CIRAS_Black_Veh";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_MX991";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_Chemlight_HiWhite";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_12Rnd_45ACP_mk23";};
this addItemToUniform "ACE_HandFlare_White";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
this addItemToVest "hlc_30rnd_556x45_EPR";
this addHeadgear "CUP_H_OpsCore_Black_NoHS";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "arcore_nightvision_Gen5";
