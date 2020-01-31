
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
this forceAddUniform "U_C_Man_casual_1_F";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "CUP_HandGrenade_M67";
this addVest "V_I_G_resistanceLeader_F";
for "_i" from 1 to 9 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
this addBackpack "B_FieldPack_oli";
this addHeadgear "H_HeadSet_black_F";
this addGoggles "G_Balaclava_blk";

comment "Add weapons";
this addWeapon "hlc_rifle_RU5562";
this addPrimaryWeaponItem "CUP_optic_MicroT1_coyote";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";


