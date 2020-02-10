
comment "Add containers";
this forceAddUniform "U_I_C_Soldier_Bandit_5_F";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addVest "CUP_V_O_TK_OfficerBelt";
for "_i" from 1 to 5 do {this addItemToVest "CUP_8Rnd_9x18_Makarov_M";};
this addBackpack "B_LegStrapBag_coyote_F";
for "_i" from 1 to 2 do {this addItemToBackpack "DemoCharge_Remote_Mag";};
this addHeadgear "H_ShemagOpen_khk";

comment "Add weapons";
this addWeapon "CUP_hgun_Makarov";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
