#include "R.sqf"

this addBackpack (if (571710 in getDLCs 1) then [{"B_Messenger_Gray_F"}, {"B_AssaultPack_sgg"}]);
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 15 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 4 do {this addItemToBackpack "ACE_salineIV";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_personalAidKit";};
