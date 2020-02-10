comment "Add weapons";
this addWeapon "CUP_hgun_Colt1911";
this addHandgunItem "CUP_7Rnd_45ACP_1911";

comment "Add containers";
this forceAddUniform "CFP_BDU_Tan";
this addVest "CUP_V_CDF_OfficerBelt";

comment "Add items to containers";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "CUP_HandGrenade_M67";
this addItemToUniform "SmokeShell";
for "_i" from 1 to 4 do {this addItemToVest "CUP_7Rnd_45ACP_1911";};
this addHeadgear "H_Cap_headphones";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";