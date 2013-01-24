_man = _this select 0;
_snake = _this select 1;

while {((alive _man) and ((getdammage _man)>=0.2)) } do
{
	if (_man == player) then {[_man] execVM "CSJ_snake\scripts\dizzy.sqf"};
	_dam = getDammage _man;
	_dam = _dam + 0.01;
	_snakeType = typeOf _snake;
	if (_snakeType == "CSJ_Snake2") then {_dam = _dam + 0.015;};
	if (_snakeType == "CSJ_Snake3") then {_dam = _dam + 0.035;};
	_man setDamage _dam;
	sleep (60 - (_dam*30));
};