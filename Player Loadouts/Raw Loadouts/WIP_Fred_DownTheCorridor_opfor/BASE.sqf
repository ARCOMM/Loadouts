//this call compile preprocessFileLineNumbers "loadouts\opfor\BASE.sqf";

this = _this;

this addUniform selectRandom ["CUP_U_O_CHDKZ_Kam_03", "CUP_U_O_CHDKZ_Kam_01", "CUP_U_O_CHDKZ_Kam_04", "CUP_U_O_CHDKZ_Kam_02", "CUP_U_O_CHDKZ_Kam_08", "CUP_U_O_CHDKZ_Kam_05", "CUP_U_O_CHDKZ_Kam_07", "CUP_U_O_CHDKZ_Kam_06"];
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_MX991";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_HandFlare_Red";

this addVest selectRandom ["CUP_V_O_Ins_Carrier_Rig", "CUP_V_RUS_Smersh_1", "CUP_V_O_Ins_Carrier_Rig_Light", "CUP_V_O_Ins_Carrier_Rig_MG", "CUP_V_O_SLA_M23_1_OD"];

this addHeadgear selectRandom ["CUP_H_ChDKZ_Beanie", "CUP_H_ChDKZ_Beret", "CUP_H_ChDKZ_Cap", "CUP_H_C_Ushanka_04", "SP_BeanieHat_Green", "CUP_H_PMC_Beanie_Khaki"];
this addGoggles selectRandom ["G_Spectacles", "G_Squares", "G_Balaclava_oli", "G_Balaclava_blk", "None", "None"];

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";