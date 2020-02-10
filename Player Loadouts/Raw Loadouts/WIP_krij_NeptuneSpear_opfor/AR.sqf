this forceAddUniform "CUP_O_TKI_Khet_Partug_01";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
this addVest "CUP_V_O_TK_Vest_1";
for "_i" from 1 to 4 do {this addItemToVest "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
this addHeadgear "H_Bandanna_surfer_blk";

comment "Add weapons";
this addWeapon "CUP_arifle_RPK74";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

