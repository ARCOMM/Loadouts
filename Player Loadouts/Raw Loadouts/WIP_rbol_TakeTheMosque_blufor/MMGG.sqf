
this addWeapon "CUP_arifle_MG36_camo";
this addPrimaryWeaponItem "CUP_100Rnd_556x45_BetaCMag_camo";
this addPrimaryWeaponItem "optic_ACO_grn";
this addWeapon "hlc_pistol_P226R_357Combat";
this addHandgunItem "HLC_optic_VTAC";
this addHandgunItem "hlc_12Rnd_357SIG_B_P226";

this forceAddUniform "CFP_GUER_PolyDespants";
this addVest "CFP_FAPC_Operator_OCP";
this addBackpack "B_AssaultPack_ocamo";

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "CUP_100Rnd_556x45_BetaCMag_camo";
for "_i" from 1 to 3 do {this addItemToVest "hlc_12Rnd_357SIG_B_P226";};
for "_i" from 1 to 1 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 1 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_100Rnd_556x45_BetaCMag_camo";};
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_12Rnd_357SIG_B_P226";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_100Rnd_556x45_BetaCMag_camo";};
this addHeadgear "CFP_BaseballCap_ANA2";
this addGoggles "CUP_G_PMC_RadioHeadset_Glasses_Dark";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
