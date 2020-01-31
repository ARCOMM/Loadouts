
this addWeapon "CUP_arifle_M4A3_desert";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";
this addWeapon "hlc_pistol_P226R_357Combat";
this addHandgunItem "HLC_optic_VTAC";
this addHandgunItem "hlc_12Rnd_357SIG_B_P226";

this forceAddUniform "CFP_GUER_PolyDespants";
this addVest "CFP_FAPC_Operator_OCP";
this addBackpack "CUP_B_GER_Medic_Desert";

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToVest "hlc_12Rnd_357SIG_B_P226";};
for "_i" from 1 to 1 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 1 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_556x45_PMAG_QP";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_12Rnd_357SIG_B_P226";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_30Rnd_556x45_Stanag";};
this addHeadgear "SP_BaseballCap_Red";
this addGoggles "CUP_G_PMC_RadioHeadset_Glasses_Dark";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

[this,"Default","ace_novoice"] call BIS_fnc_setIdentity;
