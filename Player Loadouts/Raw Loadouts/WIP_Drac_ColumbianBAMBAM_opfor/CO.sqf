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
this forceAddUniform "MNP_CombatUniform_Militia_F";
this addItemToUniform "FirstAidKit";
this addItemToUniform "CUP_30Rnd_545x39_AK_M";
this addVest "CUP_V_O_TK_OfficerBelt2";
this addItemToVest "CUP_30Rnd_545x39_AK_M";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_RGD5";};
this addItemToVest "SmokeShell";
this addItemToVest "SmokeShellBlue";

comment "Add weapons";
this addWeapon "CUP_arifle_AKS74U";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";

comment "Set identity";
this setFace "PersianHead_A3_02";
this setSpeaker "male02per";
