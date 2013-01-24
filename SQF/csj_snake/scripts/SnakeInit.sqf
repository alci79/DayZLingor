_snake = _this select 0;
[_snake] execVM "CSJ_snake\scripts\slitherAction.sqf";
[_snake] execVM "CSJ_snake\scripts\clown.sqf";
[driver _snake] join grpnull;
_origPos = [(getPos _snake select 0),(getPos _snake select 1)];
_snake setVariable ["varOrigPos", _origPos]; 
(driver _snake) addRating 4000000;
_snake addRating 4000000;
[_snake] execVM "CSJ_snake\scripts\cruise.sqf";
