removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;
this addWeapon "hlc_lmg_M60E4";
this addPrimaryWeaponItem "hlc_100Rnd_762x51_M_M60E4";
this forceAddUniform "CFP_U_FieldUniform_marpat_w_light";
this addVest "CUP_V_B_Eagle_SPC_Rifleman";
this addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addItemToVest "hlc_100Rnd_762x51_M_M60E4";
for "_i" from 1 to 2 do {this addItemToBackpack "hlc_100Rnd_762x51_M_M60E4";};
this addHeadgear "CFP_PASGTHelmet_Marpat2";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
