this forceAddUniform "CUP_U_B_FR_SpecOps";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_IR_Strobe_Item";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};

this addVest "CUP_V_B_RRV_Officer";
for "_i" from 1 to 10 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};

this addBackpack "B_TacticalPack_oli";
for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};

this addHeadgear "CUP_H_USMC_MICH2000_DEF_WDL";

this addWeapon "CUP_arifle_M4A1_camo";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_2_camo";
this addPrimaryWeaponItem "CUP_optic_HoloWdl";
this addWeapon "CUP_hgun_M9";
this addWeapon "Binocular";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "CUP_NVG_HMNVS";

[this,"MedB"] call bis_fnc_setUnitInsignia;
