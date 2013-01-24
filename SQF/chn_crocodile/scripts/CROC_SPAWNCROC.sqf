_target= _this select 0;

_closestspawnpoint=[];
_mindist=100000;		
{
	_spawnpointpos=_x;
	_targetpos= getpos _target;
	_dist= sqrt (((_spawnpointpos select 0) - (_targetpos select 0))^2 + ((_spawnpointpos select 1) - (_targetpos select 1))^2);
	
	if (_dist<_mindist) then 
	
	{
		_mindist=_spawnpointpos distance _targetpos;
		_closestspawnpoint=_spawnpointpos;
		//player sidechat format ["close1 %1",_candidate];
	};
			
} foreach CHN_CROC_LINGORSPAWNPOINTS;
		
createcenter civilian;
_spawngroup = creategroup civilian;
_croc = _spawngroup createUnit ["CHN_Crocodile",_closestspawnpoint,[],0,"CAN_COLLIDE"];
_croc setpos _closestspawnpoint;
CHN_SPAWNEDCROCS set [count CHN_SPAWNEDCROCS,_croc];
_croc setRank "PRIVATE";
_croc setvariable ["CHN_CROCSPAWNTIME",time];