comment "Add weapons";
this addWeapon "hlc_rifle_L1A1SLR";
this addPrimaryWeaponItem "hlc_20Rnd_762x51_B_fal";

comment "Add containers";
this forceAddUniform "CFP_BDU_Tan";
this addVest "CFP_Alice_Vest2_Tan";

comment "Add items to containers";

for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_M67";};
this addItemToUniform "SmokeShell";
this addItemToUniform "hlc_20Rnd_762x51_B_fal";
for "_i" from 1 to 6 do {this addItemToVest "hlc_20Rnd_762x51_B_fal";};
this addHeadgear "SP_M1Helmet_Tan";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
