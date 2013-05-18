_snake = _this select 0;
_range = 15;
_origPos = [(getPos _snake select 0),(getPos _snake select 1)];
_pos = "heliHEmpty" createVehicle (getPos _snake);
_i=0;
while {(alive _snake)} do
{
	(driver _snake) allowFleeing 0;
	_newPos = [(_origPos select 0) - _range + (random (2 * _range)+10), (_origPos select 1) - _range + (random (2 * _range)+10)];
	(driver _snake) setBehaviour "careless";
	(driver _snake) commandMove _newPos;
	_Pos setPos _newPos;
	while {(((_snake distance _Pos)>=5)and(alive _snake))} do
	{
		(driver _snake) commandMove _newPos;
		_i=_i+1;
		if (_i >=5) then {(_snake)  say ["hiss",1]; _i=0};

		_enemyTarget = nearestObject [_snake, "Man"];

		while {(((_enemyTarget distance _snake)<=1)and(alive _enemyTarget)and(alive _snake))} do
		{
			(driver _snake) setCombatMode "BLUE";
			(driver _snake) setBehaviour "careless";
			(_snake)  say ["strike",.01];
			_dam = getDammage _enemyTarget;
			_dam = _dam + 0.2;
			(_enemyTarget) say ["ouch",6];
			_enemyTarget setDamage _dam;	
			if (alive _enemyTarget) exitWith {[_enemyTarget,_snake] execVM "CSJ_snake\scripts\wounded.sqf"};
		};
		(driver _snake) commandMove _newPos;
		sleep 2;
	};
};
deleteVehicle (driver _snake);