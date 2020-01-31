// include "BASE.sqf";
this forceAddUniform "CFP_CHZ_Berezka2";
this addHeadgear selectRandom ["CUP_H_RUS_Altyn","CUP_H_RUS_Altyn_Goggles","CUP_H_RUS_Altyn_Shield_Down","CUP_H_RUS_Altyn_Shield_Up"];
this addGoggles selectRandom ["CUP_PMC_Facewrap_Winter", "CUP_G_PMC_Facewrap_Winter_Glasses_Dark"];
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_Flashlight_KSF1";
this addItemToUniform "ACE_CableTie";
this addItemToUniform "MiniGrenade";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
