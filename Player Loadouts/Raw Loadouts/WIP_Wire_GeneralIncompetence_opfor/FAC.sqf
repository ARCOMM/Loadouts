removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;
this forceAddUniform "U_B_T_Soldier_AR_F";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "CUP_HandGrenade_M67";
this addItemToUniform "SmokeShell";
this addVest "V_PlateCarrier1_rgr_noflag_F";
for "_i" from 1 to 4 do {this addItemToVest "hlc_20Rnd_762x51_B_fal";};
for "_i" from 1 to 4 do {this addItemToVest "SmokeShellPurple";};
for "_i" from 1 to 4 do {this addItemToVest "SmokeShellRed";};
for "_i" from 1 to 4 do {this addItemToVest "SmokeShellGreen";};
this addHeadgear "H_HelmetB_black";
this addGoggles "G_Aviator";
this addWeapon "hlc_rifle_SLR";
this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
