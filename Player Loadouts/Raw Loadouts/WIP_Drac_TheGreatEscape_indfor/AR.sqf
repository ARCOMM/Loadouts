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
this forceAddUniform "U_BG_leader";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addHeadgear "H_Hat_tan";
this addGoggles "G_Spectacles_Tinted";

comment "Add weapons";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";

comment "Set identity";
this setFace "GreekHead_A3_07";
this setSpeaker "male09eng";
