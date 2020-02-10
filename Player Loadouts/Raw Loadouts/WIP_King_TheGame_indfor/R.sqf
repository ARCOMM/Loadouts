removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

private _uniform = selectRandom [
    "CUP_U_O_CHDKZ_Bardak",
    "CUP_U_O_CHDKZ_Lopotev",
    "CUP_U_C_Citizen_02",
    "CUP_U_C_Citizen_01",
    "CUP_U_C_Citizen_04",
    "CUP_U_C_Citizen_03",
    "CUP_U_C_Fireman_01",
    "CUP_U_C_Labcoat_02",
    "CUP_U_C_Labcoat_03",
    "CUP_U_C_Mechanic_02",
    "CUP_U_C_Rescuer_01",
    "CUP_U_C_Pilot_01",
    "CUP_U_C_Priest_01",
    "CUP_U_C_Profiteer_02",
    "CUP_U_C_Rocker_01",
    "CUP_U_C_Rocker_02",
    "CUP_U_C_Rocker_03",
    "CUP_U_C_Rocker_04",
    "CUP_U_C_Suit_01",
    "CUP_U_C_Suit_02",
    "CUP_U_C_Woodlander_01",
    "CUP_U_C_Worker_02",
    "CUP_U_C_Villager_02"
];

private _headgear = selectRandom [
    "H_Construction_basic_yellow_F",
    "H_Hat_Safari_olive_F",
    "H_Hat_Safari_sand_F",
    "CUP_H_C_Beanie_01",
    "CUP_H_C_Beret_04",
    "CUP_H_PMC_Cap_Burberry",
    "CUP_H_C_MAGA_01",
    "CUP_H_PMC_Cap_Back_Grey",
    "CUP_H_TKI_Lungee_Open_01",
    "CUP_H_TKI_Lungee_Open_05",
    "CUP_H_C_Ushanka_03",
    ""
];

if (_uniform == "CUP_U_C_Fireman_01") then {
    _headgear = "CUP_H_C_Fireman_Helmet_01";
};

this forceAddUniform _uniform;
for "_i" from 1 to 6 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 6 do {this addItemToUniform "ACE_morphine";};
this addHeadgear _headgear;
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemGPS";

private _backpack = selectRandom [
    "B_Messenger_Black_F",
    "B_Messenger_Coyote_F",
    "B_Messenger_Olive_F"
];

if (random 1 < 0.33) then {
    this addBackpack _backpack;
};

if (random 1 < 0.25) then {
    removeBackpack this;
    this addBackpack _backpack;
    for "_i" from 1 to 2 do {this addItemToBackpack "rhsusf_m112_mag";};
};

this selectWeapon primaryWeapon this;
