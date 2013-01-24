// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Croc Stalker script written by Charon September 2010
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Adaption,modification or external use is not allowed
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++


_croc= _this select 0;
_tar = _this select 1;

if ((isMultiPlayer) and (not isServer)) exitwith {};


for [{_i=0}, {_i<300}, {_i=_i+1}] do
{
	_object = _tar selectionposition "Pelvis";
	_pos=_tar modelToWorld _object;
	//_pos1=[_pos select 0,_pos select 1,(_pos select 2)-0.35];
	_pos1=[_pos select 0,_pos select 1,-0.21];
	
	drop [["\ca\Data\ParticleEffects\Universal\Universal", 16, 12, 8,0],	"", "Billboard", 1, 60, _pos1, [random 0.1, random 0.1, 0], random 1, 0.255016, 0.2, 0, [0.5,1,1.5+(random 3)], [[0.25, 0.05, 0.05, 0.6],[0.15, 0.02, 0.02, .3]], [1], 1, 0, "", "", ""];
	sleep .05;
};

_croc setvelocity [0,0,0];
sleep 57;

detach _tar;

_croc setvariable ["CHN_CROCFOOD",nil];