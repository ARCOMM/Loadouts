// include "BASE.sqf";
this forceAddUniform selectRandom ["CUP_I_B_PMC_Unit_26", "CUP_I_B_PMC_Unit_27"];
this addVest "V_TacVestIR_blk";
this addHeadgear "CUP_H_PASGTv2_winter";
this addGoggles selectRandom ["CUP_PMC_Facewrap_Winter", "CUP_G_PMC_Facewrap_Winter_Glasses_Dark","CUP_G_ESS_KHK_Facewrap_White","CUP_G_PMC_Facewrap_Winter_Glasses_Dark_Headset"];

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_CableTie";
this addItemToUniform "MiniGrenade";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
