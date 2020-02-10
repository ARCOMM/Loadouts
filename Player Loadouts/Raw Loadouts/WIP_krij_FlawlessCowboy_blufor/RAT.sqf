this forceAddUniform "OPTRE_MJOLNIR_Undersuit";
for "_i" from 1 to 3 do {this addItemToUniform "OPTRE_Biofoam";};
this addItemToUniform "ACE_Flashlight_XL50";
this addVest "OPTRE_MJOLNIR_Mk4Armor";
for "_i" from 1 to 5 do {this addItemToVest "OPTRE_36Rnd_95x40_Mag";};
for "_i" from 1 to 4 do {this addItemToVest "OPTRE_36Rnd_95x40_Mag_Tracer";};
for "_i" from 1 to 3 do {this addItemToVest "OPTRE_M9_Frag";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addBackpack "OPTRE_ILCS_Rucksack_Black";
this addItemToBackpack "OPTRE_M41_Twin_HEAT";
this addItemToBackpack "OPTRE_M41_Twin_HEAP";
this addHeadgear "OPTRE_MJOLNIR_MkVBHelmet";

comment "Add weapons";
this addWeapon "OPTRE_BR55HB";
this addWeapon "OPTRE_M41_SSR";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_20";
this setSpeaker "ace_novoice";
