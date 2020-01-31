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
this addVest "CUP_V_B_LHDVest_Blue";
for "_i" from 1 to 4 do {this addItemToVest "ACE_fieldDressing";};
this addItemToVest "ACE_morphine";
this addBackpack "CUP_B_USPack_Black";
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 6 do {this addItemToBackpack "CUP_30Rnd_762x39_AK47_M";};
for "_i" from 1 to 4 do {this addItemToBackpack "SmokeShell";};
this addHeadgear "CUP_H_CDF_Beret_UN";
this addGoggles "G_Shades_Blue";

comment "Add weapons";
this addWeapon "CUP_arifle_AKM";
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
