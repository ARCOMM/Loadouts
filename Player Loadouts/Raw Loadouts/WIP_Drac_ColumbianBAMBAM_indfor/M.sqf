comment "Exported from Arsenal by Draco194";

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
this forceAddUniform "U_BG_Guerilla1_2_F";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_30Rnd_9x19_UZI";};
this addVest "V_TacVest_camo";
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_762x39_AK47_M";};
this addItemToVest "CUP_30Rnd_9x19_UZI";
this addBackpack "B_FieldPack_oli";
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 40 do {this addItemToBackpack "ACE_fieldDressing";};
this addHeadgear "H_HeadBandage_bloody_F";
this addGoggles "G_Spectacles_Tinted";

comment "Add weapons";
this addWeapon "CUP_arifle_AKS";
this addPrimaryWeaponItem "CUP_optic_Kobra";
this addWeapon "CUP_hgun_MicroUzi";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
this setFace "GreekHead_A3_07";
this setSpeaker "male09eng";
