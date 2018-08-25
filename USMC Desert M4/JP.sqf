comment "Exported from Arsenal by Matuzalem";

this forceAddUniform "CUP_U_B_USMC_PilotOverall";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {this addItemToUniform "CUP_7Rnd_45ACP_1911";};
this addVest "CUP_V_B_PilotVest";
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_7Rnd_45ACP_1911";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellPurple";};
this addBackpack "CUP_T10_Parachute_backpack";
this addHeadgear "H_PilotHelmetFighter_O";

this addWeapon "CUP_hgun_Colt1911";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
