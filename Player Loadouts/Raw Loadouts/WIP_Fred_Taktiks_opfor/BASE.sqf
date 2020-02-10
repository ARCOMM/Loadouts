// this call compile preprocessFileLineNumbers "loadouts\opfor\BASE.sqf";
_this forceAddUniform selectRandom ["CUP_U_O_TK_Green", "CUP_U_O_TK_MixedCamo"];
_this addHeadgear selectRandom ["CUP_H_TK_Helmet", "CUP_H_SLA_Helmet_DES", "CUP_H_SLA_Helmet"];
_this addVest selectRandom ["CUP_V_O_TK_Vest_1", "CUP_V_O_SLA_M23_1_BRN", "CUP_V_O_SLA_M23_1_OD"];
_this addGoggles selectRandom ["CUP_FR_NeckScarf", "CUP_FR_NeckScarf2", "CFP_Beard", "None", "None", "None", "None"];
for "_i" from 1 to 3 do {_this addItemToUniform "ACE_fieldDressing";};
_this addItemToUniform "CUP_HandGrenade_RGD5";
_this addItemToUniform "SmokeShell";
_this addItemToUniform "ACE_morphine";
_this addItemToUniform "ACE_tourniquet";
_this addItemToUniform "ACE_Flashlight_KSF1";
_this addItemToUniform "ACE_CableTie";

_this linkItem "ItemMap";
_this linkItem "ItemCompass";
_this linkItem "ItemWatch";
