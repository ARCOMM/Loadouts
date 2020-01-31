comment "Exported from Arsenal by SCAREYCAREY";

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add containers";
this forceAddUniform "U_BG_Guerilla2_1";
this addItemToUniform "ACRE_PRC343_ID_1";
this addItemToUniform "rhs_mag_m67";
this addVest "V_TacVest_blk";
for "_i" from 1 to 3 do {this addItemToVest "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim";};
this addHeadgear "H_PilotHelmetHeli_B";
this addGoggles "G_Bandanna_shades";

comment "Add weapons";
this addWeapon "arifle_MXC_Black_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

