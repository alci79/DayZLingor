private["_item","_config","_onLadder","_classname","_text","_consume","_hastrapitem","_location","_object"];

_item = 	_this;
_config =	configFile >> "CfgWeapons" >> _item;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

call gear_ui_init;

_classname = 	getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
_text = 		getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_consume = 	([] + getArray (_config >> "magazines")) select 0;

_hastrapitem = _item in magazines player;

if (!_hastrapitem) exitWith {cutText [format[(localize "str_player_31"),_text,(localize "str_player_31_place")] , "PLAIN DOWN"]};

player removeMagazine _item;
_location = getPosATL player;

player playActionNow "PutDown";
sleep 1;

_object = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
_object setDir (getDir player);
player reveal _object;

cutText [format[localize "str_build_01",_text], "PLAIN DOWN"];