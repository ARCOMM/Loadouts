this forceAddUniform "U_TIOW_Pathfinder";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {this addItemToUniform "TIOW_pulse_pistol_mag";};
this addVest "TIOW_Tau_BeltP";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 10 do {this addItemToVest "TIOW_ionrifle_shot_mag";};
for "_i" from 1 to 4 do {this addItemToVest "TIOW_pulse_pistol_mag";};
this addBackpack "TIOW_Tau_Bck_Phndr_Ion";
for "_i" from 1 to 12 do {this addItemToBackpack "TIOW_ionrifle_overcharge_mag";};
this addHeadgear "TIOW_Tau_HelmetP";
this addWeapon "TIOW_ion_rifle";
this addPrimaryWeaponItem "TIOW_Tau_optics_ColiS";
this addWeapon "TIOW_pulse_pistol";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
[this,"tau_male_3","ace_novoice"] call BIS_fnc_setIdentity;