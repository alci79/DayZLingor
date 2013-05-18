sleep 1;

if ((isMultiplayer) and ! (isServer)) exitwith {};

waituntil {count CHN_ALLWATERUNITS>0};

for "_i" from 0 to 99999999 step 0 do
{
	
	{
		_target=_x;
		_iscrocnear=false;
		_iscrocnear = [_target] call CHN_fn_CROCSSPWNDNEAR;
		if ((!(_target in CHN_CROCASSIGNED)) and (! _iscrocnear) and (count CHN_SPAWNEDCROCS<8)) then 
		{
				CHN_CROCASSIGNED set [count CHN_CROCASSIGNED,_target];
				[_target] spawn CROC_SPAWNCROC;
		};
	} foreach CHN_ALLWATERUNITS;
	
	{
		
		_spawntime= _x getvariable "CHN_CROCSPAWNTIME";
		
		if (time>_spawntime+500) then 
		{
			_any1near = [_x] call CHN_fn_CROCSANY1NEAR;
			if (! _any1near) then 
			{
				deletevehicle _x;
				_i = CHN_SPAWNEDCROCS find _x;
				CHN_SPAWNEDCROCS set [_i,objnull];
				CHN_SPAWNEDCROCS = CHN_SPAWNEDCROCS - [objnull];
				
			};
		};
		
		if ((! alive _x) or (isNull _x)) then 
		{
			_i = CHN_SPAWNEDCROCS find _x;
			CHN_SPAWNEDCROCS set [_i,objnull];
			CHN_SPAWNEDCROCS = CHN_SPAWNEDCROCS - [objnull];
			
		};
		
	} foreach CHN_SPAWNEDCROCS;
	
};