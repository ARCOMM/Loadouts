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
this forceAddUniform "CUP_I_B_PMC_Unit_15";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 4 do {this addItemToUniform "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_17Rnd_9x19_glock17";};
this addItemToUniform "SmokeShell";
this addVest "CUP_V_PMC_CIRAS_Black_TL";
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
for "_i" from 1 to 4 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addHeadgear "CUP_H_PMC_Cap_Back_PRR_Tan";
this addGoggles "G_Bandanna_beast";

comment "Add weapons";
this addWeapon "hlc_rifle_416D145_CAG";
this addPrimaryWeaponItem "CUP_optic_CompM2_Black";
this addWeapon "CUP_launch_M136";
this addWeapon "CUP_hgun_Glock17_blk";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
this linkItem "NVGoggles";
