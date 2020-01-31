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
this forceAddUniform "MNP_CombatUniform_Militia_E";
this addItemToUniform "FirstAidKit";
this addVest "CUP_V_OI_TKI_Jacket1_03";
this addBackpack "CUP_B_TKI_Backpack_Gunner_RPG";
this addItemToBackpack "CUP_PG7VL_M";

comment "Add weapons";
this addWeapon "arifle_AKM_F";
this addWeapon "CUP_launch_RPG7V";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
this setFace "PersianHead_A3_01";
this setSpeaker "male02per";
