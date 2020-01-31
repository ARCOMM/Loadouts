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
for "_i" from 1 to 5 do {this addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToVest "ACE_morphine";};
this addItemToVest "rhs_mag_an_m8hc";
this addItemToVest "9Rnd_45ACP_Mag";
for "_i" from 1 to 7 do {this addItemToVest "30Rnd_65x39_caseless_green";};
this addItemToVest "10Rnd_50BW_Mag_F";
this addBackpack "B_AssaultPack_blk";
this addItemToBackpack "RPG7_F";
this addHeadgear "H_Bandanna_gry";
this addGoggles "G_Bandanna_blk";

comment "Add weapons";
this addWeapon "arifle_ARX_blk_F";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_Aco";
this addWeapon "launch_RPG7_F";
this addWeapon "hgun_ACPC2_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

