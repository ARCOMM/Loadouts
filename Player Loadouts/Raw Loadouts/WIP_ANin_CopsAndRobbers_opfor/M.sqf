
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
this forceAddUniform "U_BG_Guerilla2_1";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "CUP_HandGrenade_M67";
this addItemToUniform "hlc_30rnd_556x45_b_HK33";
this addVest "V_TacVest_blk";
for "_i" from 1 to 8 do {this addItemToVest "hlc_30rnd_556x45_b_HK33";};
this addBackpack "B_FieldPack_blk";
for "_i" from 1 to 8 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
this addHeadgear "H_Helmet_Skate";
this addGoggles "G_Bandanna_aviator";

comment "Add weapons";
this addWeapon "hlc_rifle_hk53";
this addPrimaryWeaponItem "hlc_muzzle_556NATO_M42000";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";
