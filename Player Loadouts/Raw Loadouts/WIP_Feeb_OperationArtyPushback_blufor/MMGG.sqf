comment "Add containers";
this forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "11Rnd_45ACP_Mag";
this addVest "V_PlateCarrier2_rgr";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 3 do {this addItemToBackpack "130Rnd_338_Mag";};
this addHeadgear "H_HelmetB";

comment "Add weapons";
this addWeapon "MMG_02_black_F";
this addPrimaryWeaponItem "bipod_01_F_blk";
this addWeapon "hgun_Pistol_heavy_01_F";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_11";
this setSpeaker "ace_novoice";





