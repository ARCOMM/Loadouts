this forceAddUniform "CUP_O_TKI_Khet_Partug_06";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_O_TK_Vest_1";
for "_i" from 1 to 4 do {this addItemToVest "CUP_64Rnd_9x19_Bizon_M";};
this addBackpack "CUP_B_RUS_Backpack";
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 6 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 6 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 4 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_salineIV";};
this addHeadgear "CUP_H_TKI_Lungee_05";

comment "Add weapons";
this addWeapon "CUP_smg_bizon";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

