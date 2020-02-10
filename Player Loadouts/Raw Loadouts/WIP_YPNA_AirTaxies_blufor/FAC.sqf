this forceAddUniform "CUP_U_B_FR_Corpsman";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_IR_Strobe_Item";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_15Rnd_9x19_M9";};

this addVest "CUP_V_B_RRV_Scout3";
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 5 do {this addItemToVest "CUP_1Rnd_HEDP_M203";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_FlareRed_M203";};
for "_i" from 1 to 5 do {this addItemToVest "CUP_1Rnd_Smoke_M203";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};

this addBackpack "CUP_B_USMC_AssaultPack";
for "_i" from 1 to 10 do {this addItemToBackpack "SmokeShellGreen";};
for "_i" from 1 to 10 do {this addItemToBackpack "SmokeShellRed";};
for "_i" from 1 to 10 do {this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 10 do {this addItemToBackpack "1Rnd_SmokeGreen_Grenade_shell";};

this addHeadgear "CUP_H_USMC_MICH2000_DEF_WDL";

this addWeapon "CUP_arifle_M4A1_BUIS_camo_GL";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_2_camo";
this addPrimaryWeaponItem "CUP_optic_HoloWdl";
this addWeapon "CUP_hgun_M9";
this addWeapon "Binocular";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemRadio";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "CUP_NVG_HMNVS";