this forceAddUniform "MNP_CombatUniform_Ukrainian";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_Fortify";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "16Rnd_9x21_Mag";};
this addVest "MNP_Vest_UKR_B";
for "_i" from 1 to 4 do {this addItemToVest "hlc_30Rnd_545x39_B_AK";};
for "_i" from 1 to 4 do {this addItemToVest "hlc_30Rnd_545x39_t_ak";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addItemToVest "CUP_HandGrenade_RGD5";
this addHeadgear "MNP_Helmet_PAGST_UKR";

comment "Add weapons";
this addWeapon "hlc_rifle_ak74m_MTK";
this addPrimaryWeaponItem "CUP_optic_TrijiconRx01_black";
this addPrimaryWeaponItem "CUP_acc_Flashlight";
this addWeapon "CUP_launch_M72A6";
this addWeapon "hgun_Rook40_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

