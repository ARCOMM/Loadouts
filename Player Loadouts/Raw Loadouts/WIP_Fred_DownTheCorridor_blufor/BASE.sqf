//this call compile preprocessFileLineNumbers "loadouts\blufor\BASE.sqf";

this = _this;

this addUniform "usm_bdu_w_m";
for "_i" from 1 to 3 do {this addItemToUniform "ACE_fieldDressing";};
this addItemToUniform "ACE_Flashlight_MX991";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
this addItemToUniform "ACE_HandFlare_Red";

this addVest "usm_vest_pasgt_lbe_rm_m";

this addHeadgear selectRandom ["usm_helmet_pasgt_w_m", "usm_helmet_pasgt_g_w_m"];
this addGoggles selectRandom ["G_Spectacles", "G_Squares", "None", "None", "None", "None"];

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";