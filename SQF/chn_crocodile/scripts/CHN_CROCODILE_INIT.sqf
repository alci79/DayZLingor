// Initializes each spawned crocodile

_crocodile=_this select 0;


CHN_ISOA=false;
_wn=getText (configFile >> "CfgWorlds" >> "Takistan" >> "worldName");
if (_wn=="\ca\takistan\takistan.wrp") then {CHN_ISOA=true};
//CHN_ISOA=true;

_path="\CHN_Crocodile\scripts\";


CROC_UPDATETAR = compile preprocessFileLineNumbers (_path+"CROC_UPDATETAR.sqf");
CROC_STALKER = compile preprocessFileLineNumbers (_path+"CROC_STALKER.sqf");
CROC_FORCECOLLISION = compile preprocessFileLineNumbers (_path+"CROC_FORCECOLLISION.sqf");
CROC_SORTER = compile preprocessFileLineNumbers (_path+"CROC_SORTER.sqf");
CROC_ATTACK = compile preprocessFileLineNumbers (_path+"CROC_ATTACK.sqf");
CROC_EATUP = compile preprocessFileLineNumbers (_path+"CROC_EATUP.sqf");
CROC_DEATHWALTZ = compile preprocessFileLineNumbers (_path+"CROC_DEATHWALTZ.sqf");
CROC_SPAWNCROC = compile preprocessFileLineNumbers (_path+"CROC_SPAWNCROC.sqf");
CROC_DEATHGUARD = compile preprocessFileLineNumbers (_path+"CROC_DEATHGUARD.sqf");
CROC_FUNCTIONS = compile preprocessFileLineNumbers (_path+"CROC_FUNCTIONS.sqf");

call CROC_FUNCTIONS;

// variables

_crocodile setUnitRank "COLONEL";
_crocodile setskill 1;
_crocodile allowfleeing 0;
_crocodile setbehaviour "AWARE";
_crocodile setcombatmode "RED";
_crocodile setunitpos "UP";


_crocodile setVariable ["CHN_ISCROCODILE",true];
_crocodile setVariable ["BIS_noCoreConversations", true];
_crocodile setVariable ["CHN_CROCHUNTS", objNull];
_crocodile setVariable ["CHN_CROCCLOSESTTAR", objNull];
_crocodile setVariable ["CHN_CROCHUNTMODE", "HUNTING"];
_crocodile setvariable ["CHN_CROCWP",[]];
_crocodile setvariable ["CHN_CROCHASWP2",false];
_crocodile setvariable ["CHN_CROCLASTPOS",position _crocodile];
_crocodile setvariable ["CHN_CROCLASTTIME",time];
_crocodile setvariable ["CHN_CROCCHECKPOS",position _crocodile];
_crocodile setvariable ["CHN_CROCCHECKPOSTIME",time];
_crocodile setvariable ["CHN_CROCSTALKING",false];
_crocodile setvariable ["CHN_CROCTARANG",0];

sleep 0.1;


_check=CHN_ALLWATERUNITS;
if (isnil "_check") then 
{
	CHN_ALLWATERUNITS=[];
};
_check=CHN_CROCSTALKERARR;
if (isnil "_check") then 
{
	CHN_CROCSTALKERARR=[];
};

[_crocodile] spawn CROC_UPDATETAR;

_check=CHN_CROCSCRIPTSPWND;

if (isnil "_check") then 
{
	
	[] spawn CROC_SORTER;
	[] spawn CROC_STALKER;
	CHN_CROCSCRIPTSPWND=true;
};

// nul= [_predator] execFSM ("\CHN_Predator_c\FSMs\Predator_Sounds.fsm");



nul= [_crocodile] execFSM ("\CHN_Crocodile\FSMs\Croc_Hunt.fsm");



if ((isnil "CHN_CROC_NOSPLASH") and (isnil "CHN_CROCSPLASHSHOWN")) then {
CHN_CROCSPLASHSHOWN=true;
cuttext["CHN Crocodile Version V0.6","plain down",1];

sleep 2;
cuttext["CREATED BY CHARON PRODUCTIONS","plain down",1];
};

CHN_CROCINITIALIZED=true;