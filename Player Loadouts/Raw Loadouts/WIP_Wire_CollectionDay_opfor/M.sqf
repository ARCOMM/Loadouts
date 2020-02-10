
comment "Exported from Arsenal by WirelessPillow";

comment "[!] UNIT MUST BE LOCAL [!]";
this addWeapon "hlc_rifle_M4";
this addPrimaryWeaponItem "hlc_30rnd_556x45_EPR";
this forceAddUniform "CUP_I_B_PMC_Unit_11";
this addVest "CFP_Smersh_Creme";
this addBackpack "B_AssaultPack_blk";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 7 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 6 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 40 do {this addItemToBackpack "ACE_fieldDressing";};
this addHeadgear "SP_BeanieHat_Tan";
this addGoggles "G_Bandanna_khk";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
