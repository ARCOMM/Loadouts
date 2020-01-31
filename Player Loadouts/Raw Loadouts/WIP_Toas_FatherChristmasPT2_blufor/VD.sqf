
comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add weapons";
this addWeapon "hlc_rifle_hk53RAS";
this addPrimaryWeaponItem "hlc_30rnd_556x45_b_HK33";

comment "Add containers";
this forceAddUniform "CFP_CHZ_Berezka2";
this addVest "V_Chestrig_rgr";
this addBackpack "CFP_AssaultPack_White";

comment "Add items to containers";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addItemToVest "ACE_M84";
for "_i" from 1 to 5 do {this addItemToVest "hlc_30rnd_556x45_b_HK33";};
for "_i" from 1 to 2 do {this addItemToBackpack "ACE_EntrenchingTool";};
this addItemToBackpack "ToolKit";
this addHeadgear "H_HelmetCrew_I";
this addGoggles "CUP_G_ESS_KHK_Facewrap_White";

comment "Add items";
this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
