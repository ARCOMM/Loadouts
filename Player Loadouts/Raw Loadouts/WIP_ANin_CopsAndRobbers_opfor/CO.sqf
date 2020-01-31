
comment "Exported from Arsenal by A Ninja";

comment "[!] UNIT MUST BE LOCAL [!]";
if (!local this) exitWith {};

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
this forceAddUniform "MNP_CombatUniform_ASA_GC3_B";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_CableTie";};
this addItemToUniform "CUP_HandGrenade_M67";
for "_i" from 1 to 3 do {this addItemToUniform "hlc_30rnd_556x45_EPR";};
this addVest "V_TacVest_blk";
this addItemToVest "HandGrenade";
for "_i" from 1 to 3 do {this addItemToVest "CUP_20Rnd_B_765x17_Ball_M";};
for "_i" from 1 to 6 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addBackpack "B_FieldPack_blk";
this addHeadgear "CUP_H_USArmy_Helmet_ECH1_Black";
this addGoggles "G_Balaclava_lowprofile";

comment "Add weapons";
this addWeapon "hlc_rifle_Colt727";
this addWeapon "CUP_hgun_SA61";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";

