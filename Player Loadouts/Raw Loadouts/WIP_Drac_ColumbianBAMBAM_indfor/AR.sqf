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
this forceAddUniform "U_BG_leader";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_30Rnd_9x19_UZI";};
this addVest "V_TacVest_camo";
this addItemToVest "CUP_30Rnd_9x19_UZI";
for "_i" from 1 to 2 do {this addItemToVest "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_HandGrenade_RGO";};
for "_i" from 1 to 4 do {this addItemToBackpack "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
this addHeadgear "H_Hat_tan";
this addGoggles "G_Spectacles_Tinted";

comment "Add weapons";
this addWeapon "hlc_rifle_rpk74n";
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
