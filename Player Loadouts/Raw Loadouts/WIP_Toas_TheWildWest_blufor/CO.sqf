comment "Exported from Arsenal by ToastSmack";

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add containers";
this forceAddUniform "CUP_I_B_PMC_Unit_22";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
this addItemToUniform "ACRE_PRC148";
this addItemToUniform "ACRE_PRC152";
for "_i" from 1 to 4 do {this addItemToUniform "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_17Rnd_9x19_glock17";};
this addItemToUniform "CUP_HandGrenade_M67";
this addVest "CUP_V_PMC_CIRAS_Black_Grenadier";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
for "_i" from 1 to 4 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addBackpack "B_AssaultPack_blk";
for "_i" from 1 to 5 do {this addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 3 do {this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 4 do {this addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 3 do {this addItemToBackpack "1Rnd_SmokeGreen_Grenade_shell";};
this addHeadgear "CUP_H_PMC_Cap_Back_EP_Tan";

comment "Add weapons";
this addWeapon "hlc_rifle_416D145_gl";
this addPrimaryWeaponItem "CUP_optic_CompM2_Black";
this addWeapon "CUP_hgun_Glock17_blk";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
this linkItem "NVGoggles";
