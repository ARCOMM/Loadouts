comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

this forceAddUniform "CUP_I_B_PMC_Unit_34";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_CableTie";};
this addVest "SP_Tactical1_White";
this addItemToVest "ACE_M84";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 9 do {this addItemToVest "hlc_30Rnd_545x39_B_AK";};
this addBackpack "MNP_B_RUW_FP";
this addItemToBackpack "ACE_EntrenchingTool";
this addItemToBackpack "SP_SSh68CoverHelmet_White1";
this addItemToBackpack "CUP_1Rnd_HE_GP25_M";
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_1Rnd_SmokeRed_GP25_M";};
this addHeadgear "SP_Beret2_Green";
this addGoggles "G_Bandanna_blk";
comment "Add weapons";
this addWeapon "hlc_rifle_ak12GL";
this addWeapon "Binocular";
comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
