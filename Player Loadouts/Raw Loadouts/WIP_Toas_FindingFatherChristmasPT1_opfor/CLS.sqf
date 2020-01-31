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
for "_i" from 1 to 2 do {this addItemToUniform "ACE_CableTie";};
this addVest "SP_Tactical1_White";
for "_i" from 1 to 3 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 3 do {this addItemToVest "SmokeShellRed";};
for "_i" from 1 to 10 do {this addItemToVest "hlc_30Rnd_545x39_B_AK";};
this addBackpack "MNP_B_RUW_FP";
this addItemToBackpack "ACE_EntrenchingTool";
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
this addHeadgear "SP_SSh68CoverHelmet_White1";
this addGoggles "G_Bandanna_blk";
this addWeapon "hlc_rifle_aku12";
this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";