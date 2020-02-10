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
this addVest "V_PlateCarrier1_blk";
for "_i" from 1 to 9 do {this addItemToVest "30Rnd_580x42_Mag_Tracer_F";};
this addItemToVest "rhs_mag_an_m8hc";
for "_i" from 1 to 2 do {this addItemToVest "rhs_mag_m67";};
this addItemToVest "9Rnd_45ACP_Mag";
this addBackpack "B_AssaultPack_blk";
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_CableTie";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_fieldDressing";};
this addHeadgear "H_Bandanna_gry";
this addGoggles "G_Bandanna_blk";

comment "Add weapons";
this addWeapon "arifle_CTAR_blk_F";
this addPrimaryWeaponItem "acc_flashlight";
this addPrimaryWeaponItem "optic_Holosight_blk_F";
this addWeapon "hgun_ACPC2_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";




