comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACRE_PRC343";
this addVest "V_PlateCarrierGL_mtp";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addBackpack "B_AssaultPack_mcamo";
for "_i" from 1 to 3 do {this addItemToBackpack "200Rnd_65x39_cased_Box_Tracer";};
this addHeadgear "H_HelmetSpecB_paint2";

comment "Add weapons";
this addWeapon "LMG_Mk200_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
