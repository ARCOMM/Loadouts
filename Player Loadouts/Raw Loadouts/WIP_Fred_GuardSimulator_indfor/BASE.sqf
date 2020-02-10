// include "BASE.sqf";
this forceAddUniform "CFP_U_BattleDressUniform_tigerstripe";
this addVest "CUP_V_O_SLA_Flak_Vest03";
this addHeadgear selectRandom 
[
	"SP_M1Helmet_Green",
	"SP_M1Helmet_GrayDim",
	"SP_M1Helmet_Tan"
];
this addGoggles selectRandom 
[
	"none", 
	"none", 
	"none", 
	"none", 
	"CUP_G_WristWatch",
	"CUP_G_WristWatch",
	"SP_Kneepads_Green2",
	"CFP_Beard",
	"G_Aviator",
	"G_Spectacles",
	"G_Squares"
];

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {this addItemToUniform "ACE_CableTie";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_Flashlight_KSF1";
this addItemToUniform "CUP_HandGrenade_RGD5";
this addItemToUniform "SmokeShell";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_HandFlare_Red";};
this addItemToUniform selectRandom ["ACE_Canteen", "ACE_Canteen_Half"];

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

switch (floor random 5) do 
{ 
	case 1 : {_this addItem 'SHIF_wine'}; 
	default {_this addItem 'CUP_item_Money';};
};