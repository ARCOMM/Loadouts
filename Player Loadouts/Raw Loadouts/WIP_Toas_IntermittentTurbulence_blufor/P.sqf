
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
this forceAddUniform "U_O_PilotCoveralls";
this addItemToUniform "FirstAidKit";
this addItemToUniform "ACRE_PRC343";
this addItemToUniform "ACRE_PRC152";
for "_i" from 1 to 3 do {this addItemToUniform "30Rnd_545x39_Mag_F";};
this addHeadgear "H_PilotHelmetHeli_O";
this addGoggles "G_Bandanna_khk";

comment "Add weapons";
this addWeapon "arifle_AKS_F";
this addWeapon "CUP_hgun_M9";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "arcore_nightvision_Gen8";
