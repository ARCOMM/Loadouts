#include "BASE.sqf"

this addHeadgear "SP_Beret_Blue";

for "_i" from 1 to 4 do {this addItemToVest "CUP_20Rnd_762x51_FNFAL_M";};
this addWeapon "CUP_arifle_FNFAL5061_wooden";
this addPrimaryWeaponItem "CUP_acc_LLM01_coyote_F";

this addBackpack "CUP_B_AlicePack_Khaki";
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 4 do {this addItemToBackpack "ACE_salineIV";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
