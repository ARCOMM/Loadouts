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
this forceAddUniform "MNP_CombatUniform_Militia_A";
this addItemToUniform "FirstAidKit";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_10x_303_M";};
this addVest "V_I_G_resistanceLeader_F";
this addBackpack "CUP_B_TK_AssaultPack_Medic";
this addItemToBackpack "Medikit";
for "_i" from 1 to 10 do {this addItemToBackpack "FirstAidKit";};

comment "Add weapons";
this addWeapon "CUP_srifle_LeeEnfield";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
this setFace "PersianHead_A3_01";
this setSpeaker "male02per";
