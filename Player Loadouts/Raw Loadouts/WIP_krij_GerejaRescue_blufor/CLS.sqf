this forceAddUniform "CUP_I_B_PMC_Unit_24";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {this addItemToUniform "ACE_IR_Strobe_Item";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_Flashlight_KSF1";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";

this addVest "CUP_V_PMC_CIRAS_Black_TL";
for "_i" from 1 to 4 do {this addItemToVest "hlc_30Rnd_9x19_SD_MP5";};
for "_i" from 1 to 2 do {this addItemToVest "hlc_12Rnd_40SW_B_P226";};

this addBackpack "B_ViperLightHarness_blk_F";
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};

this addGoggles "CUP_RUS_Balaclava_blk";
this addWeapon "hlc_smg_mp5sd6";
this addPrimaryWeaponItem "CUP_optic_MRad";
this addWeapon "hlc_pistol_P226R_40Enox";
this addHandgunItem "hlc_acc_TLR1";
this addHandgunItem "HLC_optic_XS";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "CUP_NVG_PVS14";
