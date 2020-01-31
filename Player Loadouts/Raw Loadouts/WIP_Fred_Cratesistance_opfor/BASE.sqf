// this call compile preprocessFileLineNumbers "loadouts\opfor\BASE.sqf";
_this forceAddUniform selectRandom ["CUP_U_O_CHDKZ_Kam_03", "CUP_U_O_CHDKZ_Kam_01", "CUP_U_O_CHDKZ_Kam_04", "CUP_U_O_CHDKZ_Kam_02", "CUP_U_O_CHDKZ_Commander", "CUP_U_O_CHDKZ_Commander", "CUP_U_O_CHDKZ_Commander", "CUP_U_O_CHDKZ_Kam_07", "CUP_U_O_CHDKZ_Kam_06"];
_this addHeadgear selectRandom ["CUP_H_ChDKZ_Beanie", "CUP_H_ChDKZ_Beret", "CUP_H_ChDKZ_Cap", "CUP_H_SLA_Helmet", "", "", "", "CUP_H_PMC_Beanie_Khaki", "CUP_H_SLA_BeanieGreen", "CUP_H_FR_BandanaWdl"];
_this addVest selectRandom ["CUP_V_RUS_Smersh_1", "CUP_V_O_Ins_Carrier_Rig_Light", "CUP_V_O_SLA_Carrier_Belt02", "CUP_V_O_Ins_Carrier_Rig"];
for "_i" from 1 to 3 do {_this addItemToUniform "ACE_fieldDressing";};
_this addItemToUniform "CUP_HandGrenade_RGD5";
_this addItemToUniform "SmokeShell";
_this addItemToUniform "ACE_morphine";
_this addItemToUniform "ACE_tourniquet";