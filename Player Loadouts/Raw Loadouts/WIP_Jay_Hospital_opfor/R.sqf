
switch (round(random 3)) do {
    case 0;
    case 1: {
      this forceAddUniform "CUP_U_I_GUE_Anorak_03";
      this addVest "CUP_V_B_GER_Carrier_Rig_3_Brown";
      this addGoggles "G_Balaclava_oli";
    };
    case 2: {
      this forceAddUniform "U_I_C_Soldier_Bandit_2_F";
      this addVest "CUP_V_OI_TKI_Jacket3_02";
      this addHeadgear "H_ShemagOpen_tan";
    };
    case 3: {
      this forceAddUniform "U_I_C_Soldier_Bandit_3_F";
      this addVest "CUP_V_I_Guerilla_Jacket";
      this addGoggles "G_Balaclava_blk";
    };
};

for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "16Rnd_9x21_Mag";
for "_i" from 1 to 2 do {this addItemToVest "CUP_HandGrenade_RGD5";};
for "_i" from 1 to 10 do {this addItemToVest "30Rnd_762x39_Mag_F";};
this addWeapon "arifle_AKM_F";
this addWeapon "hgun_Rook40_F";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
