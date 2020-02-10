
this addWeapon "hlc_rifle_416D10_tan";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "hlc_pistol_P226R_357Combat";
this addHandgunItem "HLC_optic_VTAC";
this addHandgunItem "hlc_12Rnd_357SIG_B_P226";

this forceAddUniform "CFP_GUER_PolyDespants";
this addVest "CFP_FAPC_Operator_OCP";
this addBackpack "B_AssaultPack_ocamo";

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 3 do {this addItemToVest "hlc_12Rnd_357SIG_B_P226";};
for "_i" from 1 to 1 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 1 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_12Rnd_357SIG_B_P226";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_30Rnd_556x45_Stanag";};
this addHeadgear "CFP_BaseballCap_IASF1";
this addGoggles "CUP_G_PMC_RadioHeadset_Glasses_Dark";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
