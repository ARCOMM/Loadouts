removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;
this forceAddUniform "CUP_U_B_BAF_MTP_S1_RolledUp";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "CUP_17Rnd_9x19_glock17";};
this addItemToUniform "CUP_30Rnd_556x45_Stanag";
this addVest "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader";
this addItemToVest "CUP_HandGrenade_L109A2_HE";
this addItemToVest "SmokeShell";
for "_i" from 1 to 4 do {this addItemToVest "CUP_30Rnd_556x45_Stanag";};
for "_i" from 1 to 5 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 4 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToVest "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToVest "1Rnd_SmokeGreen_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToVest "1Rnd_SmokeBlue_Grenade_shell";};
this addHeadgear "CUP_H_BAF_Helmet_4_MTP";
this addWeapon "CUP_arifle_L85A2_GL";
this addPrimaryWeaponItem "CUP_optic_ZDDot";
this addWeapon "CUP_hgun_Glock17_blk";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
