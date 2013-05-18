_snake = _this select 0;
_driver = driver vehicle _snake;
removeAllWeapons _driver;
if (_driver ==player) then {(driver _snake) action ["eject", _snake]};
if (_driver ==player) then {hint "Player can not be shark"};
while {(alive _snake)} do
{
	if (count (crew _snake)<=0) exitWith {_snake setDammage 1};
	sleep 3;
};