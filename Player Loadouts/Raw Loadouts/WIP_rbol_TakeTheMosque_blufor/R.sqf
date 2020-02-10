
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

this addWeapon "hlc_rifle_416D10_tan";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

this forceAddUniform "CFP_GUER_PolyDespants";
this addVest "CFP_FAPC_Operator_OCP";
this addBackpack "B_AssaultPack_ocamo";

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 3 do {this addItemToUniform "hlc_30rnd_556x45_EPR";};
this addItemToVest "ACE_M84";
this addItemToVest "HandGrenade";
for "_i" from 1 to 3 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 4 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 4 do {this addItemToBackpack "hlc_30rnd_556x45_EPR";};
this addHeadgear "CFP_BaseballCap_IASF1";
this addGoggles "CUP_G_PMC_RadioHeadset_Glasses_Dark";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
