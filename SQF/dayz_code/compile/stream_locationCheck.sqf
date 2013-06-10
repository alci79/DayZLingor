private ["_location", "_distCfg","_configClass","_distAct","_rubbish","_config","_locHdr","_position" ];

//diag_log "running location check...";
_rubbish = dayz_Trash == 1;
{
	_location = _x select 0;
	_distCfg = (_x select 2);
	_configClass = _x select 1;
	_distAct = player distance position _location;	

	if (!(_location in dayz_locationsActive)) then {
		if ((_distAct < _distCfg + dayz_spawnArea) and _rubbish) then {
			dayz_locationsActive set [count dayz_locationsActive,_location];
			_config = configFile >> "CfgTownGeneratorChernarus" >> _configClass;
			_locHdr = configName _config;
			if (typeName _locHdr != "STRING") then { _locHdr = str _location; };
			diag_log format ["%1: creating %2 objects at '%3'", __FILE__, count _config, _locHdr];
			_config call stream_locationFill; // create wrecks & rubbish as local objects
		};
	} else {
		if (_distAct > _distCfg + dayz_canDelete) then {
			_config = configFile >> "CfgTownGeneratorChernarus" >> _configClass;
			_locHdr = configName _config;
			if (typeName _locHdr != "STRING") then { _locHdr = str _location; };
			diag_log format ["%1: removing %2 objects from '%3'", __FILE__, count _config, _locHdr];
			_config call stream_locationDel; // delete wrecks & rubbish
			dayz_locationsActive = dayz_locationsActive - [_location]; 
		};
	};
} forEach dayz_Locations;
