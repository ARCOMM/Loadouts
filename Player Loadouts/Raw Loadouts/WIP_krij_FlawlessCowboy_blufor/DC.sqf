this forceAddUniform "OPTRE_MJOLNIR_Undersuit";
for "_i" from 1 to 3 do {this addItemToUniform "OPTRE_Biofoam";};
this addItemToUniform "ACE_Flashlight_XL50";
this addVest "OPTRE_MJOLNIR_Mk4Armor";
for "_i" from 1 to 3 do {this addItemToVest "OPTRE_M9_Frag";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 5 do {this addItemToVest "OPTRE_60Rnd_762x51_Mag";};
for "_i" from 1 to 3 do {this addItemToVest "OPTRE_60Rnd_762x51_Mag_Tracer";};
for "_i" from 1 to 5 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
this addBackpack "OPTRE_ANPRC_521_Green";
for "_i" from 1 to 3 do {this addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 5 do {this addItemToBackpack "UGL_FlareWhite_F";};
for "_i" from 1 to 2 do {this addItemToBackpack "UGL_FlareGreen_F";};
for "_i" from 1 to 2 do {this addItemToBackpack "UGL_FlareRed_F";};
for "_i" from 1 to 5 do {this addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
this addHeadgear "OPTRE_MJOLNIR_ReconHelmet";

comment "Add weapons";
this addWeapon "OPTRE_MA5BGL";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_20";
this setSpeaker "ace_novoice";
