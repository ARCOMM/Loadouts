this addWeapon "LMG_Zafir_F";
this addPrimaryWeaponItem "150Rnd_762x54_Box";
this forceAddUniform "CFP_U_FieldUniform_idf";
this addVest "CFP_PlateCarrier1_IDF";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
this addItemToVest "SmokeShell";
this addItemToVest "150Rnd_762x54_Box";
this addBackpack "B_AssaultPack_blk";
for "_i" from 1 to 3 do {this addItemToBackpack "150Rnd_762x54_Box";};
this addHeadgear "CFP_MitzHelm1_Des2";
comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";