
comment "Add weapons";
this addWeapon "hlc_rifle_416D10_tan";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "CFP_GUER_PolyDespants";
this addVest "CFP_FAPC_Operator_OCP";

comment "Add binoculars";
this addWeapon "CUP_Vector21Nite";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_personalAidKit";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToUniform "hlc_30rnd_556x45_EPR";};
this addItemToVest "ACE_M84";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
this addHeadgear "CFP_BaseballCap_IASF1";
this addGoggles "CUP_G_PMC_RadioHeadset_Glasses_Dark";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
