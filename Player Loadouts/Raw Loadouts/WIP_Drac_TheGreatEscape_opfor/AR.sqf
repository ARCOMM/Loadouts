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
this forceAddUniform "MNP_CombatUniform_Militia_B";
this addItemToUniform "FirstAidKit";
this addVest "CUP_V_OI_TKI_Jacket3_04";
this addItemToVest "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
this addBackpack "CUP_B_TKI_CivPack_WDL_RPK";
for "_i" from 1 to 5 do {this addItemToBackpack "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_HandGrenade_RGD5";};

comment "Add weapons";
this addWeapon "CUP_arifle_RPK74";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
this setFace "PersianHead_A3_03";
this setSpeaker "male02per";
