comment "Add containers";
this forceAddUniform "CUP_U_C_Woodlander_03";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addVest "V_HarnessO_ghex_F";
for "_i" from 1 to 3 do {this addItemToVest "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
this addBackpack "B_FieldPack_ghex_F";
this addItemToBackpack "CUP_HandGrenade_RGO";
this addItemToBackpack "SmokeShell";
this addHeadgear "CUP_H_PMC_Cap_Back_Grey";
this addGoggles "G_Aviator";

comment "Add weapons";
this addWeapon "CUP_arifle_RPK74M";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
