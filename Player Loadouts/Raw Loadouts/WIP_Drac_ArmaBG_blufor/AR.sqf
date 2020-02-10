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
this forceAddUniform "V_ARCunis_ARCTech_bdu";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 6 do {this addItemToUniform "ACE_fieldDressing";};
this addVest "custom_vest1";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellBlue";};
this addItemToVest "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
this addBackpack "AORN_Assault_Pack";
this addItemToBackpack "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
this addHeadgear "custom_helmet2";
this addGoggles "G_Bandanna_blk";

comment "Add weapons";
this addWeapon "hlc_lmg_M249E2";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "GreekHead_A3_07";
this setSpeaker "male09eng";
