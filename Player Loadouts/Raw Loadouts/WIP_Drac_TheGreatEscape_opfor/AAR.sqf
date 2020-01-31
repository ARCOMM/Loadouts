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
this forceAddUniform "MNP_CombatUniform_Militia_C";
this addItemToUniform "FirstAidKit";
this addVest "CUP_V_OI_TKI_Jacket2_01";
this addBackpack "CUP_B_TKI_Backpack_RPG";
this addItemToBackpack "CUP_PG7VR_M";
this addItemToBackpack "CUP_PG7VL_M";

comment "Add weapons";
this addWeapon "CUP_arifle_AKM";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
this setFace "PersianHead_A3_02";
this setSpeaker "male03per";
