removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;
this forceAddUniform "usm_bdu_w";
this addItemToUniform "ACE_CableTie";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "usm_vest_rba_lbe_rm";
this addItemToVest "ACE_EntrenchingTool";
for "_i" from 1 to 2 do {this addItemToVest "hlc_13Rnd_9x19_B_P228";};
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 3 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 7 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 3 do {this addItemToVest "hlc_30rnd_556x45_MDim";};
for "_i" from 1 to 6 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 3 do {this addItemToVest "1Rnd_Smoke_Grenade_shell";};
this addHeadgear "usm_helmet_pasgt_w";
this addWeapon "hlc_rifle_Colt727_GL";
this addWeapon "hlc_Pistol_M11";
this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
