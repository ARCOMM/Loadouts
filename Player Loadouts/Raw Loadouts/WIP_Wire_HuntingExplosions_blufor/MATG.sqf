removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;
this forceAddUniform "CUP_U_B_USMC_FROG4_WMARPAT";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "hlc_10Rnd_40SW_B_P229";};
this addItemToUniform "HandGrenade";
this addItemToUniform "SmokeShell";
this addVest "CUP_V_B_Eagle_SPC_Corpsman";
for "_i" from 1 to 8 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addItemToVest "hlc_10Rnd_40SW_B_P229";
for "_i" from 1 to 2 do {this addItemToVest "ACE_tourniquet";};
this addBackpack "B_Bergen_mcamo_F";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_Javelin_M";};
this addHeadgear "CUP_H_USMC_MICH2000_WDL";
this addGoggles "G_Aviator";
this addWeapon "hlc_rifle_416D165";
this addWeapon "CUP_launch_Javelin";
this addWeapon "hlc_pistol_P229R_40Enox";
this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
