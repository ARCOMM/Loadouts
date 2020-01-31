comment "Add weapons";
this addWeapon "CUP_arifle_M16A1GL";
this addPrimaryWeaponItem "CUP_20Rnd_556x45_Stanag";
this addPrimaryWeaponItem "CUP_1Rnd_HE_M203";

comment "Add containers";
this forceAddUniform "CFP_BDU_Tan";
this addVest "CFP_Alice_Vest2_Tan";
this addBackpack "CUP_B_AlicePack_Khaki";

comment "Add binoculars";
this addWeapon "Binocular";

comment "Add items to containers";

for "_i" from 1 to 4 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 2 do {this addItemToUniform "CUP_HandGrenade_M67";};
this addItemToUniform "SmokeShell";
for "_i" from 1 to 2 do {this addItemToVest "Chemlight_green";};
for "_i" from 1 to 6 do {this addItemToVest "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 7 do {this addItemToVest "CUP_20Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShellRed";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShellGreen";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShellBlue";};
for "_i" from 1 to 2 do {this addItemToBackpack "SmokeShell";};
for "_i" from 1 to 4 do {this addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 8 do {this addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 8 do {this addItemToBackpack "1Rnd_SmokeGreen_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_SmokeBlue_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToBackpack "1Rnd_SmokeYellow_Grenade_shell";};
this addHeadgear "SP_Beret2_Tan";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";