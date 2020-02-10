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
this forceAddUniform "CUP_U_B_USArmy_TwoKnee";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_MTV";
for "_i" from 1 to 5 do {this addItemToVest "CUP_30Rnd_9x19_MP5";};
this addHeadgear "CUP_H_FR_ECH";
this addGoggles "G_Bandanna_tan";

comment "Add weapons";
this addWeapon "CUP_smg_MP5A5";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";


