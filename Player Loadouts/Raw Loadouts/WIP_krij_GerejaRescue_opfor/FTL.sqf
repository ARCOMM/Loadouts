this addWeapon "CUP_smg_vityaz";
this addPrimaryWeaponItem "CUP_30Rnd_9x19AP_Vityaz";

comment "Add containers";
this forceAddUniform "CUP_U_O_Partisan_TTsKO_Mixed";
this addVest "CUP_V_O_TK_Vest_1";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_30Rnd_9x19AP_Vityaz";};
for "_i" from 1 to 6 do {this addItemToVest "CUP_30Rnd_9x19AP_Vityaz";};
this addHeadgear "CUP_H_SLA_BeretRed";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

