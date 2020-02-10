
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
this addWeapon "SMG_01_F";
this addPrimaryWeaponItem "30Rnd_45ACP_Mag_SMG_01";
this addWeapon "CUP_hgun_M9";
this addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
this forceAddUniform "skn_u_nbc_opf_yellow";
this addVest "V_BandollierB_blk";

comment "Add binoculars";
this addWeapon "Binocular";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "SmokeShell";
for "_i" from 1 to 4 do {this addItemToVest "30Rnd_45ACP_Mag_SMG_01";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_HandFlare_Green";};
this addItemToVest "ACE_HandFlare_Red";
this addItemToVest "SmokeShellGreen";
this addHeadgear "H_CrewHelmetHeli_B";
this addGoggles "CUP_PMC_Facewrap_Black";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
this linkItem "arcore_nightvision_Gen8";
