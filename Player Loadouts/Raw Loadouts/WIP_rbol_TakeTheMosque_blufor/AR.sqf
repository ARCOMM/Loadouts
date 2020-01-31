
this addWeapon "CUP_arifle_M4A3_desert";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "hlc_50rnd_556x45_EPR";
this addWeapon "hlc_pistol_P226R_357Combat";
this addHandgunItem "HLC_optic_VTAC";
this addHandgunItem "hlc_12Rnd_357SIG_B_P226";

this forceAddUniform "CFP_GUER_PolyDespants";
this addVest "CFP_FAPC_Operator_OCP";
this addBackpack "B_AssaultPack_ocamo";

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "hlc_12Rnd_357SIG_B_P226";};
this addItemToVest "ACE_M84";
this addItemToVest "HandGrenade";
for "_i" from 1 to 3 do {this addItemToVest "hlc_50rnd_556x45_EPR";};
this addItemToVest "CUP_30Rnd_556x45_Stanag";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_12Rnd_357SIG_B_P226";};
for "_i" from 1 to 5 do {this addItemToBackpack "hlc_50rnd_556x45_EPR";};
this addHeadgear "SP_BaseballCap_Hunter2";
this addGoggles "CUP_G_PMC_RadioHeadset_Glasses_Dark";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
