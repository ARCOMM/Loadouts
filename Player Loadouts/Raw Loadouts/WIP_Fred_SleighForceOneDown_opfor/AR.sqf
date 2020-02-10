#include "BASE.sqf"

this addVest "CUP_V_PMC_CIRAS_Winter_Veh";

this addBackpack "CUP_B_RUS_Backpack";
for "_i" from 1 to 4 do {this addMagazine "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M";};
this addWeapon "CUP_lmg_Pecheneg";
this addPrimaryWeaponItem "cup_optic_pechenegscope";

for "_i" from 1 to 2 do {this addItemToVest "16Rnd_9x21_Mag";};
this addWeapon "hgun_Rook40_F";