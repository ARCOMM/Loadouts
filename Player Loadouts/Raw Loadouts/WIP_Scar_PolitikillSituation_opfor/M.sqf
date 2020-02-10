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
this addVest "V_PlateCarrier1_blk";
for "_i" from 1 to 5 do {this addItemToVest "ACE_fieldDressing";};
this addItemToVest "rhs_mag_an_m8hc";
this addItemToVest "9Rnd_45ACP_Mag";
for "_i" from 1 to 4 do {this addItemToVest "10Rnd_50BW_Mag_F";};
for "_i" from 1 to 3 do {this addItemToVest "30Rnd_580x42_Mag_F";};
this addBackpack "B_AssaultPack_blk";
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "100Rnd_580x42_Mag_Tracer_F";};
this addHeadgear "H_Watchcap_blk";
this addGoggles "G_Bandanna_blk";

comment "Add weapons";
this addWeapon "arifle_CTAR_blk_F";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_Holosight_blk_F";
this addWeapon "hgun_ACPC2_F";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

