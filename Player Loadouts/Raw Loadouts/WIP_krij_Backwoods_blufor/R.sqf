this forceAddUniform "U_B_GEN_Commander_F";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "V_PlateCarrier2_blk";
for "_i" from 1 to 6 do {this addItemToVest "hlc_30Rnd_556x45_EPR_sg550";};
for "_i" from 1 to 2 do {this addItemToVest "hlc_30Rnd_556x45_T_sg550";};
this addItemToVest "CUP_HandGrenade_M67";
this addBackpack "B_AssaultPack_blk";
this addHeadgear "CUP_H_USArmy_Helmet_ECH1_Black";

comment "Add weapons";
this addWeapon "hlc_rifle_SG551LB";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

