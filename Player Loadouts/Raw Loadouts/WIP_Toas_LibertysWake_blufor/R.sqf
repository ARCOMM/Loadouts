comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;


this forceAddUniform "U_B_CTRG_1";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_CableTie";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_M67";};
this addVest "V_PlateCarrier1_rgr_noflag_F";
for "_i" from 1 to 10 do {this addItemToVest "CUP_30Rnd_556x45_Stanag_L85";};
this addBackpack "B_AssaultPack_rgr";
this addHeadgear "H_HelmetB_sand";
this addGoggles "G_Bandanna_oli";
this addWeapon "CUP_arifle_L85A2_G";
this addPrimaryWeaponItem "CUP_optic_MicroT1_low";
this addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag_L85";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
