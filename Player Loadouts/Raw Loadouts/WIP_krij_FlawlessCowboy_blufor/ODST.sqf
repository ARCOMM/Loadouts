
this forceAddUniform "OPTRE_UNSC_ODST_Uniform";
for "_i" from 1 to 3 do {this addItemToUniform "OPTRE_Biofoam";};
for "_i" from 1 to 2 do {this addItemToUniform "OPTRE_12Rnd_127x40_Mag";};
this addVest "OPTRE_UNSC_M52D_Armor_Scout";
for "_i" from 1 to 5 do {this addItemToVest "OPTRE_60Rnd_762x51_Mag";};
this addItemToVest "OPTRE_M9_Frag";
this addHeadgear "OPTRE_UNSC_CH252D_Helmet";

comment "Add weapons";
this addWeapon "OPTRE_MA5B";
this addWeapon "OPTRE_M6C";
this addHandgunItem "OPTRE_M6C_compensator";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

comment "Set identity";
this setFace "WhiteHead_20";
this setSpeaker "ace_novoice";
