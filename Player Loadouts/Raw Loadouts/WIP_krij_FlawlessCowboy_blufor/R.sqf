
this forceAddUniform "OPTRE_MJOLNIR_Undersuit";
for "_i" from 1 to 2 do {this addItemToUniform "OPTRE_36Rnd_95x40_Mag";};
this addVest "OPTRE_MJOLNIR_Mk4Armor";
for "_i" from 1 to 3 do {this addItemToVest "OPTRE_Biofoam";};
this addItemToVest "ACE_Flashlight_XL50";
for "_i" from 1 to 5 do {this addItemToVest "OPTRE_36Rnd_95x40_Mag";};
for "_i" from 1 to 4 do {this addItemToVest "OPTRE_36Rnd_95x40_Mag_Tracer";};
for "_i" from 1 to 3 do {this addItemToVest "OPTRE_M9_Frag";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addHeadgear "OPTRE_MJOLNIR_MkVBHelmet";

comment "Add weapons";
this addWeapon "OPTRE_BR55HB";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_20";
this setSpeaker "ace_novoice";
