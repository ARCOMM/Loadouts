this forceAddUniform "OPTRE_MJOLNIR_Undersuit";
for "_i" from 1 to 2 do {this addItemToUniform "OPTRE_M9_Frag";};
this addItemToUniform "SmokeShell";
this addVest "OPTRE_MJOLNIR_Mk4Armor";
for "_i" from 1 to 3 do {this addItemToVest "OPTRE_Biofoam";};
this addItemToVest "ACE_Flashlight_XL50";
for "_i" from 1 to 5 do {this addItemToVest "OPTRE_60Rnd_762x51_Mag";};
for "_i" from 1 to 4 do {this addItemToVest "OPTRE_60Rnd_762x51_Mag_Tracer";};
this addBackpack "OPTRE_ILCS_Rucksack_Heavy";
for "_i" from 1 to 2 do {this addItemToBackpack "OPTRE_200Rnd_95x40_Box";};
for "_i" from 1 to 2 do {this addItemToBackpack "OPTRE_200Rnd_95x40_Box_Tracer";};
this addHeadgear "OPTRE_MJOLNIR_Mk4Helmet";

comment "Add weapons";
this addWeapon "OPTRE_MA5B";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_20";
this setSpeaker "ace_novoice";
