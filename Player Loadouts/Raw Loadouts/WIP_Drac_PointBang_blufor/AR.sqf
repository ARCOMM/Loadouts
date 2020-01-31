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
this forceAddUniform "U_C_ConstructionCoverall_Blue_F";
this addItemToUniform "ACE_EarPlugs";
this addItemToUniform "hlc_30Rnd_545x39_B_AK";
this addVest "CUP_V_B_LHDVest_Blue";
for "_i" from 1 to 4 do {this addItemToVest "ACE_fieldDressing";};
this addItemToVest "ACE_morphine";
this addBackpack "B_FieldPack_blk";
for "_i" from 1 to 4 do {this addItemToBackpack "SmokeShell";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";};
this addHeadgear "CUP_H_CDF_Beret_UN";
this addGoggles "G_Shades_Blue";

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
[this,"CUP_Logo_Plain_black"] call bis_fnc_setUnitInsignia;
