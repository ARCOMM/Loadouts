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
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addBackpack "usm_pack_alice";
this addItemToBackpack "hlc_13Rnd_9x19_B_P228";
for "_i" from 1 to 3 do {this addItemToBackpack "hlc_200rnd_556x45_B_SAW";};
this addItemToBackpack "hlc_200rnd_556x45_T_SAW";
this addHeadgear "usm_helmet_pasgt_w";
this addWeapon "hlc_m249_pip2";
this addWeapon "hlc_Pistol_M11";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
