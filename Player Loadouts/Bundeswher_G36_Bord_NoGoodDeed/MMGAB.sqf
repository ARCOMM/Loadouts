this addWeapon "CUP_arifle_G36A_RIS";
this addPrimaryWeaponItem "cup_acc_flashlight";

this addWeapon "Binocular";


this forceAddUniform "CUP_U_B_GER_Flecktarn_2";
this addVest "CUP_V_B_GER_PVest_Fleck_RFL";
this addBackpack "CUP_B_GER_Pack_Flecktarn";

this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_EntrenchingTool";
this addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};

for "_i" from 1 to 11 do {this addItemToVest "CUP_30Rnd_556x45_G36";};


this addHeadgear "CUP_H_Ger_M92_Cover";
this addGoggles "CUP_G_PMC_Facewrap_Black_Glasses_Dark";

for "_i" from 1 to 4 do {this addItemToBackpack "CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";};

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";