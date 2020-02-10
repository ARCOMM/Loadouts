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
this addItemToVest "9Rnd_45ACP_Mag";
for "_i" from 1 to 4 do {this addItemToVest "10Rnd_50BW_Mag_F";};
this addItemToVest "30Rnd_580x42_Mag_F";
this addItemToVest "rhs_mag_an_m8hc";
this addBackpack "B_AssaultPack_blk";
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 7 do {this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 5 do {this addItemToBackpack "1Rnd_SmokeBlue_Grenade_shell";};
for "_i" from 1 to 5 do {this addItemToBackpack "1Rnd_SmokePurple_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhs_mag_m18_green";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhs_mag_m18_purple";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhs_mag_m18_red";};
this addHeadgear "H_Cap_surfer";
this addGoggles "G_Bandanna_blk";

comment "Add weapons";
this addWeapon "arifle_CTAR_GL_blk_F";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_ACO_grn";
this addWeapon "hgun_ACPC2_F";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";


