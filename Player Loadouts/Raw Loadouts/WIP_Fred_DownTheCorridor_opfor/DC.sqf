this call compile preprocessFileLineNumbers "loadouts\opfor\BASE.sqf";

this addUniform "CUP_U_O_CHDKZ_Bardak";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_MX991";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_HandFlare_Red";

this addGoggles "G_Aviator";
this addHeadgear "H_Watchcap_blk";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

this addVest "V_TacChestrig_grn_F";

for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M";};
this addItemToVest "SmokeShell";

this addWeapon "CUP_arifle_AKS_Gold";
this addPrimaryWeaponItem "cup_acc_flashlight";

this addBackpack "CUP_B_Kombat_Radio_Olive";