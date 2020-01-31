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
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 4 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 3 do {this addItemToVest "CUP_15Rnd_9x19_M9";};
for "_i" from 1 to 3 do {this addItemToVest "hlc_30rnd_556x45_M";};
this addBackpack "usm_pack_alice_medic";
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 40 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
this addHeadgear "usm_helmet_pasgt_w";
this addWeapon "hlc_rifle_M4";
this addWeapon "CUP_hgun_M9";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";