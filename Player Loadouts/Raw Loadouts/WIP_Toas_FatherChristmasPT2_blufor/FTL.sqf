comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

this forceAddUniform "CFP_CHZ_Berezka2";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_CableTie";};
this addVest "CFP_Tactical1_Berez";
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_1Rnd_Smoke_M203";};
for "_i" from 1 to 10 do {this addItemToVest "hlc_30rnd_556x45_EPR_G36";};
this addBackpack "CFP_AssaultPack_White";
this addItemToBackpack "ACE_EntrenchingTool";
for "_i" from 1 to 1 do {this addItemToBackpack "CFP_OPS2017_Helmet_White";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_1Rnd_Smoke_M203";};
this addHeadgear "SP_Beret_Blue";
this addGoggles "G_Bandanna_oli";
this addWeapon "hlc_rifle_G36VAG36";
this addPrimaryWeaponItem "CUP_optic_HoloBlack";
this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";