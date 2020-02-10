this forceAddUniform "U_C_IDAP_Man_Jeans_F";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "30Rnd_545x39_Mag_F";};
this addVest "CUP_V_O_TK_Vest_1";
for "_i" from 1 to 6 do {this addItemToVest "30Rnd_545x39_Mag_F";};
this addBackpack "CUP_B_RUS_Backpack";
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_personalAidKit";};
this addHeadgear "H_Hat_Safari_sand_F";

comment "Add weapons";
this addWeapon "arifle_AKS_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

