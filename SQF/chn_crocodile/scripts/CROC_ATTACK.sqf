// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Croc Attack script written by Charon September 2010
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Adaption,modification or external use is not allowed
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++


_croc= _this select 0;
_tar = _this select 1;



// bleed in water increase damage

_croc switchmove "Crocbite1";
_croc say "CHN_CrocAttack1";

sleep 0.75;

_tar say "CHN_CrocHumanScream1";
_damtar= getDammage _tar;
_tar setDammage (_damtar + 0.25);

_check= _croc getvariable "CHN_CROCHASATTACKED";

if (isNil "_check") then {
	_croc setvariable ["CHN_CROCHASATTACKED",true];
	// make croc enemy
	_crocside= east;
	_tarside= side _tar;
	_value1 = _tarside getFriend east;
	_value2 = _tarside getFriend west;
	_value3 = _tarside getFriend resistance;
	if (_value3<0.59) then {_crocside=resistance};
	if (_value2<0.59) then {_crocside=west};
	if (_value1<0.59) then {_crocside=east};
	createcenter _crocside;
	_dummygroup = creategroup _crocside;
	sleep 0.1;
	_dummy = _dummygroup createUnit ["USMC_Soldier",[0,0,0],[],0,"CAN_COLLIDE"];
	_dummy setRank "COLONEL";
	_croc AddRating -10000;
	sleep 0.1;
	[_croc] joinsilent _dummygroup;
	sleep 0.4;
	deletevehicle _dummy;
};


if (getDammage _tar>0.7) then 
{
	_crocdir= getdir _croc;
	_offsetx=0.4 * sin _crocdir;
	_offsety=0.4 * cos _crocdir;
	_tar attachto [_croc,[0,0,0.1],"HumanFood"];
	_croc setvariable ["CHN_CROCFOOD",true];
	_croc setvariable ["CHN_CROCSTALKING",false];
	_i =CHN_CROCSTALKERARR find _croc;
	CHN_CROCSTALKERARR set [_i,objnull];
	CHN_CROCSTALKERARR = CHN_CROCSTALKERARR - [objnull];
	[_croc,_tar] spawn CROC_DEATHWALTZ;
};

for [{_i=0}, {_i<25}, {_i=_i+1}] do
{
	_object = _tar selectionposition "Pelvis";
	_pos=_tar modelToWorld _object;
	//_pos1=[_pos select 0,_pos select 1,(_pos select 2)-0.35];
	_pos1=[_pos select 0,_pos select 1,-0.21];
	
	drop [["\ca\Data\ParticleEffects\Universal\Universal", 16, 12, 8,0],	"", "Billboard", 1, 60, _pos1, [random 0.1, random 0.1, 0], random 1, 0.255016, 0.2, 0, [0.5,1,1.5+(random 3)], [[0.25, 0.05, 0.05, 0.6],[0.15, 0.02, 0.02, .3]], [1], 1, 0, "", "", ""];
	sleep .05;
};



