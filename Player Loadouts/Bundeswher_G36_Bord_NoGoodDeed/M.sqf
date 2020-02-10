this addWeapon "CUP_arifle_G36A_RIS";
this addPrimaryWeaponItem "cup_acc_flashlight";



this forceAddUniform "CUP_U_B_GER_Flecktarn_5";
this addVest "CUP_V_B_GER_PVest_Fleck_Med_LT";
this addBackpack "CUP_B_GER_Pack_Flecktarn";

this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_EntrenchingTool";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};

for "_i" from 1 to 11 do {this addItemToVest "CUP_30Rnd_556x45_G36";};


for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 8 do {this addItemToBackpack "ACE_personalAidKit";};

this addHeadgear "CUP_H_Ger_M92_Cover";
this addGoggles "CUP_G_PMC_Facewrap_Black_Glasses_Dark";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";