comment "Exported from Arsenal by Draco194";

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
this forceAddUniform "V_ARCunis_ARCTech_bduAOR2";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 6 do {this addItemToUniform "ACE_fieldDressing";};
this addVest "Avest1";
for "_i" from 1 to 4 do {this addItemToVest "SmokeShellGreen";};
for "_i" from 1 to 5 do {this addItemToVest "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR";};
this addBackpack "AOR2_Assault_Pack";
for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR";};
this addHeadgear "AOR2Helm2";
this addGoggles "G_Bandanna_oli";

comment "Add weapons";
this addWeapon "CUP_arifle_Mk17_STD_FG_woodland";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "GreekHead_A3_07";
this setSpeaker "male09eng";
