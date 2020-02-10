
comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add weapons";
this addWeapon "CUP_smg_MP7";
this addPrimaryWeaponItem "CUP_muzzle_snds_MP7";
this addPrimaryWeaponItem "optic_Aco";
this addPrimaryWeaponItem "CUP_40Rnd_46x30_MP7";
this addWeapon "CUP_hgun_Glock17_blk";
this addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
this forceAddUniform "xmas_santa_blufor_uniform";
this addVest "CUP_V_B_PilotVest";
this addBackpack "SP_Carryall_White";

comment "Add binoculars";
this addWeapon "Binocular";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 4 do {this addItemToUniform "CUP_40Rnd_46x30_MP7";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_17Rnd_9x19_glock17";};
for "_i" from 1 to 4 do {this addItemToBackpack "FirstAidKit";};
this addItemToBackpack "100Rnd_65x39_caseless_mag";
for "_i" from 1 to 2 do {this addItemToBackpack "10Rnd_338_Mag";};
for "_i" from 1 to 2 do {this addItemToBackpack "20Rnd_762x51_Mag";};
this addHeadgear "H_PilotHelmetHeli_B";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
this linkItem "CUP_NVG_GPNVG_winter";
