this forceAddUniform "U_TIOW_Fire_Warrior";
this addItemToUniform "ACE_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_tourniquet";
this addVest "TIOW_Tau_Belt_Shasui";
for "_i" from 1 to 14 do {this addItemToVest "TIOW_pulse_mag";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
this addBackpack "TIOW_Tau_Bck_Strike_Shasui";
this addHeadgear "TIOW_Tau_HelmetS_sui";
this addWeapon "TIOW_pulse_carbine";
this addPrimaryWeaponItem "TIOW_Tau_optics_ColiB";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

[this,"tau_male_1","ace_novoice"] call BIS_fnc_setIdentity;

for "_i" from 1 to 30 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_salineIV";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_personalAidKit";};