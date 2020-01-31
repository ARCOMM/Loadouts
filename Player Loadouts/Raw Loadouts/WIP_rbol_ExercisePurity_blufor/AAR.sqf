
comment "Add weapons";
this addWeapon "CUP_arifle_M4A3_desert";
this addPrimaryWeaponItem "optic_ACO_grn";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";

comment "Add containers";
this forceAddUniform "V_ARCunis_ARCTech_bduAOR1";
this addVest "CFP_LBT6094_MG_AOR1";
this addVest "CUP_V_CZ_NPP2006_nk_des";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "CUP_SOFLAM";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_epinephrine";
this addItemToUniform "ACE_morphine";
this addItemToVest "ACE_Fortify";
this addItemToVest "ACE_EntrenchingTool";
for "_i" from 1 to 8 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};
this addHeadgear "CUP_H_CZ_Helmet02";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

