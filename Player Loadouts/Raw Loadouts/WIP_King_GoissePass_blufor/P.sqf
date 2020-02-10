comment "Exported from Arsenal by Kingsley";

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
this forceAddUniform "rhs_uniform_cu_ocp";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "rhsusf_iotv_ocp";
for "_i" from 1 to 3 do {this addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};
this addBackpack "rhsusf_falconii_mc";
this addItemToBackpack "ToolKit";
this addHeadgear "rhsusf_hgu56p_visor";

comment "Add weapons";
this addWeapon "rhsusf_weap_m9";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "ACE_NVG_Wide";
