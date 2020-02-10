// this call compile preprocessFileLineNumbers "loadouts\blufor\BASE.sqf";
_this forceAddUniform selectRandom ["CUP_U_B_CDF_FST_2", "CUP_U_B_CDF_FST_1"];
_this addHeadgear "CUP_H_CDF_H_PASGT_FST";
_this addVest "CUP_V_CDF_6B3_1_FST";
for "_i" from 1 to 3 do {_this addItemToUniform "ACE_fieldDressing";};
_this addItemToUniform "CUP_HandGrenade_RGD5";
_this addItemToUniform "SmokeShell";
_this addItemToUniform "ACE_morphine";
_this addItemToUniform "ACE_tourniquet";