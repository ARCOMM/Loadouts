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
this forceAddUniform "U_BG_Guerilla1_1";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_30Rnd_9x19_UZI";};
this addVest "V_TacVest_camo";
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_762x39_AK47_M";};
this addItemToVest "CUP_30Rnd_9x19_UZI";
this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_30Rnd_762x39_AK47_M";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_HandGrenade_RGO";};
this addHeadgear "H_Hat_camo";
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
