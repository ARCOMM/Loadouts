
this forceAddUniform "MNP_CombatUniform_Scorpion_B";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "CUP_V_B_PilotVest";
this addItemToVest "ACE_MapTools";
for "_i" from 1 to 3 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 4 do {this addItemToVest "Chemlight_green";};
this addBackpack "B_AssaultPack_rgr";
this addItemToBackpack "ToolKit";
this addHeadgear "H_CrewHelmetHeli_B";

comment "Add weapons";
this addWeapon "CUP_hgun_M9";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "CUP_NVG_GPNVG_black";

