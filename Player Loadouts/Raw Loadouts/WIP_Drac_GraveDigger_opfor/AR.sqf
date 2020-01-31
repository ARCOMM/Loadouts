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
this forceAddUniform "U_C_ConstructionCoverall_Red_F";
this addItemToUniform "ACE_EarPlugs";
this addVest "CUP_V_B_LHDVest_Red";
this addItemToVest "ACE_morphine";
for "_i" from 1 to 4 do {this addItemToVest "ACE_fieldDressing";};
this addBackpack "B_FieldPack_blk";
for "_i" from 1 to 4 do {this addItemToBackpack "SmokeShell";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
this addItemToBackpack "hlc_30Rnd_545x39_B_AK";
this addHeadgear "CUP_H_CZ_Hat01";
this addGoggles "G_Shades_Red";

comment "Add weapons";
this addWeapon "hlc_rifle_rpk74n";
this addPrimaryWeaponItem "CUP_optic_Kobra";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "GreekHead_A3_09";
this setSpeaker "male02chi";
