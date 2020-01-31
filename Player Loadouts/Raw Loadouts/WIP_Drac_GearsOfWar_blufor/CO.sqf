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
this forceAddUniform "CUP_U_C_Fireman_01";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addBackpack "CUP_B_USPack_Black";
this addItemToBackpack "ToolKit";
for "_i" from 1 to 3 do {this addItemToBackpack "CUP_30Rnd_545x39_AK_M";};
for "_i" from 1 to 2 do {this addItemToBackpack "CUP_MAAWS_HEDP_M";};
this addHeadgear "H_HelmetCrew_I";

comment "Add weapons";
this addWeapon "CUP_arifle_AK107";
this addWeapon "CUP_launch_MAAWS";
this addWeapon "CUP_hgun_Colt1911";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "TanoanHead_A3_02";
this setSpeaker "ace_novoice";
