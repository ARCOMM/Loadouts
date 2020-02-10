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
this addVest "CUP_V_OI_TKI_Jacket2_02";

comment "Add weapons";
this addWeapon "CUP_arifle_AKM";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
this setFace "PersianHead_A3_03";
this setSpeaker "male03per";
