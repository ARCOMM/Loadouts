
comment "Add weapons";
this addWeapon "hlc_smg_MP5N";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "hlc_30Rnd_9x19_B_MP5";
this addWeapon "hlc_Pistol_M11";
this addHandgunItem "HLC_optic228_VTAC";
this addHandgunItem "hlc_13Rnd_9x19_B_P228";

comment "Add containers";
this forceAddUniform "U_I_pilotCoveralls";
this addVest "SP_Tactical1_Green";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "hlc_30Rnd_9x19_B_MP5";};
for "_i" from 1 to 2 do {this addItemToUniform "hlc_13Rnd_9x19_B_P228";};
for "_i" from 1 to 2 do {this addItemToVest "hlc_13Rnd_9x19_B_P228";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_30Rnd_9x19_MP5";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellGreen";};
this addHeadgear "SP_SPH4Helmet_Green";
this addGoggles "G_Aviator";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

