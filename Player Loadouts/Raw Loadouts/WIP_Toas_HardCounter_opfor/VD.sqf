
comment "Add containers";
this forceAddUniform "U_O_CombatUniform_oucamo";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_CableTie";};
this addVest "V_TacVest_blk";
for "_i" from 1 to 4 do {this addItemToVest "CUP_64Rnd_9x19_Bizon_M";};
this addBackpack "B_Carryall_oucamo";
this addHeadgear "H_Tank_black_F";
this addGoggles "G_Bandanna_blk";

comment "Add weapons";
this addWeapon "CUP_smg_bizon";
this addWeapon "CUP_hgun_Duty";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
