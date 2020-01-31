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
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellGreen";};
for "_i" from 1 to 6 do {this addItemToVest "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR";};
this addBackpack "AOR2_Assault_Pack";
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR";};
this addItemToBackpack "CUP_200Rnd_TE4_Green_Tracer_556x45_M249";
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
