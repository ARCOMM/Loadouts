#include "BASE.sqf"

this addHeadgear "CUP_H_C_Policecap_01";
this addVest "CUP_V_O_SLA_Flak_Vest02";

this addItemToVest "ACE_MapTools";

for "_i" from 1 to 4 do {this addItemToVest "CUP_20Rnd_762x51_FNFAL_M";};
this addWeapon "CUP_arifle_FNFAL5061_wooden";
this addPrimaryWeaponItem "CUP_acc_LLM01_coyote_F";

for "_i" from 1 to 2 do {this addItemToVest "CUP_6Rnd_45ACP_M";};
this addWeapon "CUP_hgun_TaurusTracker455";

this addWeapon "Binocular";