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
this forceAddUniform "U_B_HeliPilotCoveralls";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "SmokeShell";
this addVest "V_Chestrig_oli";
for "_i" from 1 to 6 do {this addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 3 do {this addItemToVest "ACE_morphine";};
for "_i" from 1 to 2 do {this addItemToVest "16Rnd_9x21_Mag";};
this addItemToVest "Chemlight_green";
for "_i" from 1 to 3 do {this addItemToVest "CUP_30Rnd_9x19_MP5";};
this addHeadgear "CUP_H_BAF_Helmet_Pilot";

comment "Add weapons";
this addWeapon "CUP_smg_MP5A5";
this addWeapon "hgun_P07_F";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
this linkItem "arcore_nightvision_Gen8";

comment "Set identity";
this setFace "TanoanHead_A3_02";
this setSpeaker "ace_novoice";
