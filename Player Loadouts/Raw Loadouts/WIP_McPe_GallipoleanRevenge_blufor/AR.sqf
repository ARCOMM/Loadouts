comment "Add weapons";
this addWeapon "hlc_lmg_m60";
this addPrimaryWeaponItem "hlc_100Rnd_762x51_M_M60E4";

comment "Add containers";
this forceAddUniform "CFP_BDU_Tan";
this addVest "CFP_Alice_Vest2_Tan";

comment "Add items to containers";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_M67";};
this addItemToUniform "SmokeShell";
for "_i" from 1 to 2 do {this addItemToVest "hlc_100Rnd_762x51_M_M60E4";};
this addHeadgear "SP_M1Helmet_Tan";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";