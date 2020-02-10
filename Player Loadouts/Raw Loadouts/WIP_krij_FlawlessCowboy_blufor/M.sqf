this forceAddUniform "OPTRE_MJOLNIR_Undersuit";
this addVest "OPTRE_MJOLNIR_Mk4Armor";
for "_i" from 1 to 3 do {this addItemToVest "OPTRE_Biofoam";};
this addItemToVest "ACE_Flashlight_XL50";
for "_i" from 1 to 3 do {this addItemToVest "OPTRE_M9_Frag";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 5 do {this addItemToVest "OPTRE_60Rnd_5x23mm_Mag";};
for "_i" from 1 to 4 do {this addItemToVest "OPTRE_60Rnd_5x23mm_Mag_tracer";};
this addBackpack "OPTRE_ILCS_Rucksack_Medical";
for "_i" from 1 to 3 do {this addItemToBackpack "OPTRE_MedKit";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 15 do {this addItemToBackpack "OPTRE_Biofoam";};
this addHeadgear "OPTRE_MJOLNIR_MPHelmet";

comment "Add weapons";
this addWeapon "OPTRE_M7";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_20";
this setSpeaker "ace_novoice";
