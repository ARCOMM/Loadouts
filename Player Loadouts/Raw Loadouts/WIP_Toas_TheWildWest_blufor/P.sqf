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
this forceAddUniform "CUP_U_B_USMC_PilotOverall";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 3 do {this addItemToUniform "hlc_30Rnd_9x19_B_MP5";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_17Rnd_9x19_glock17";};
this addVest "V_LegStrapBag_black_F";
this addItemToVest "SmokeShell";
for "_i" from 1 to 3 do {this addItemToVest "16Rnd_9x21_Mag";};
this addItemToVest "hlc_30Rnd_9x19_B_MP5";
this addBackpack "B_AssaultPack_rgr";
this addItemToBackpack "ACRE_PRC117F";
this addItemToBackpack "ToolKit";
this addHeadgear "H_PilotHelmetHeli_B";

comment "Add weapons";
this addWeapon "hlc_smg_MP5N";
this addWeapon "CUP_hgun_Glock17_blk";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
this linkItem "NVGoggles";
