comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACRE_PRC343";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShellGreen";};
for "_i" from 1 to 2 do {this addItemToUniform "SmokeShellPurple";};
for "_i" from 1 to 2 do {this addItemToUniform "30Rnd_9x21_Mag";};
this addHeadgear "H_PilotHelmetHeli_B";
this addBackpack "B_AssaultPack_mcamo";

comment "Add weapons";
this addWeapon "hgun_PDW2000_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";