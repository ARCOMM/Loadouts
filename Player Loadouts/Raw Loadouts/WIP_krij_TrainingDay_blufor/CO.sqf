this forceAddUniform "usm_bdu_w";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addVest "usm_vest_rba_lbe_rm";
for "_i" from 1 to 6 do {this addItemToVest "hlc_30rnd_556x45_EPR";};
for "_i" from 1 to 3 do {this addItemToVest "hlc_30rnd_556x45_MDim";};
this addItemToVest "MiniGrenade";
this addItemToVest "SmokeShell";
for "_i" from 1 to 3 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
this addItemToVest "UGL_FlareGreen_F";
this addItemToVest "UGL_FlareRed_F";
for "_i" from 1 to 2 do {this addItemToVest "1Rnd_Smoke_Grenade_shell";};
this addHeadgear "usm_helmet_pasgt_g_w_m";
this addWeapon "RH_M16A2gl"
this addWeapon "Binocular";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
