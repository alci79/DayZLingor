// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Croc Stalker script written by Charon September 2010
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Adaption,modification or external use is not allowed
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++


_croc= _this select 0;
_tar = _this select 1;

if ((isMultiPlayer) and (not isServer)) exitwith {};

_croc say "CHN_CrocWater1";

_croc switchmove "CrocHeadShaker1";
sleep 2;
_croc switchmove "CrocHeadShaker1";
sleep 3;

[_croc,_tar] spawn CROC_EATUP;
_tar setdammage 1;


