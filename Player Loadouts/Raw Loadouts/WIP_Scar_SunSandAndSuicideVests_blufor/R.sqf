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
this addVest "CUP_V_B_MTV_Patrol";
for "_i" from 1 to 6 do {this addItemToVest "CUP_20Rnd_762x51_B_SCAR";};
this addItemToVest "CUP_HandGrenade_M67";
this addItemToVest "SmokeShell";
this addBackpack "CUP_B_AssaultPack_Coyote";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_20Rnd_762x51_B_SCAR";};
this addHeadgear "CUP_H_FR_ECH";

comment "Add weapons";
this addWeapon "CUP_arifle_Mk17_STD_FG";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_2_desert";
this addPrimaryWeaponItem "CUP_optic_CompM2_Desert";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "CUP_NVG_PVS7";

