
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
this addWeapon "hgun_Pistol_heavy_02_F";
this addHandgunItem "6Rnd_45ACP_Cylinder";

comment "Add containers";
this forceAddUniform "xmas_santa_ind_uniform";
this addVest "SP_Modular2_White";
this addBackpack "SP_Carryall_White";

comment "Add binoculars";
this addWeapon "Binocular";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_M84";};
for "_i" from 1 to 3 do {this addItemToVest "SmokeShellRed";};
for "_i" from 1 to 6 do {this addItemToVest "6Rnd_45ACP_Cylinder";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
this addHeadgear "SP_ACHHelmet_White1";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
