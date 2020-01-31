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
this forceAddUniform "U_BG_Guerrilla_6_1";
this addItemToUniform "rhs_mag_m67";
this addItemToUniform "30Rnd_65x39_caseless_mag";
this addVest "V_BandollierB_rgr";
for "_i" from 1 to 5 do {this addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToVest "ACE_morphine";};
this addHeadgear "rhsusf_hgu56p_visor_green";
this addGoggles "G_Bandanna_shades";

comment "Add weapons";
this addWeapon "arifle_MXC_Black_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

