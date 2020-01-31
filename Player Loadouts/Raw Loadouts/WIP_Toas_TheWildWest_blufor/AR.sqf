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
this forceAddUniform "CUP_I_B_PMC_Unit_9";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_17Rnd_9x19_glock17";};
this addVest "CUP_V_PMC_CIRAS_Black_Patrol";
this addItemToVest "SmokeShell";
this addItemToVest "200Rnd_556x45_Box_Tracer_Red_F";
this addBackpack "B_AssaultPack_blk";
this addItemToBackpack "hlc_200rnd_556x45_M_SAW";
this addHeadgear "H_Watchcap_blk";
this addGoggles "G_Bandanna_shades";

comment "Add weapons";
this addWeapon "hlc_m249_pip3";
this addPrimaryWeaponItem "CUP_optic_HoloBlack";
this addWeapon "CUP_hgun_Glock17_blk";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
this linkItem "NVGoggles";
