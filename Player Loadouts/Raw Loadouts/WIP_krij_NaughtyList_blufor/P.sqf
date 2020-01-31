
this forceAddUniform "CUP_U_B_USMC_PilotOverall";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addVest "CUP_V_B_PilotVest";
for "_i" from 1 to 3 do {this addItemToVest "CUP_30Rnd_9x19_MP5";};
this addHeadgear "H_PilotHelmetHeli_B";

comment "Add weapons";
this addWeapon "CUP_smg_MP5A5";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

