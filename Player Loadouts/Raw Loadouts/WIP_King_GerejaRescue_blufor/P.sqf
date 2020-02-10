this forceAddUniform "CUP_U_B_CZ_Pilot_WDL";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {this addItemToUniform "ACE_IR_Strobe_Item";};
this addItemToUniform "ACE_CableTie";
this addItemToUniform "ACE_Flashlight_KSF1";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";

this addVest "CUP_V_B_PilotVest";
for "_i" from 1 to 8 do {this addItemToVest "hlc_12Rnd_40SW_B_P226";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellPurple";};
for "_i" from 1 to 2 do {this addItemToVest "ACE_Chemlight_HiRed";};

this addHeadgear "CUP_H_BAF_Helmet_Pilot";
this addWeapon "hlc_pistol_P226R_40Enox";
this addHandgunItem "hlc_acc_TLR1";
this addHandgunItem "HLC_Optic_Docter_CADEX";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";
this linkItem "arcore_nightvision_Gen8";
