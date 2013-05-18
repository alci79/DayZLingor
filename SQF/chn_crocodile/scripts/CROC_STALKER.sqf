// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Croc Stalker script written by Charon September 2010
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Adaption,modification or external use is not allowed
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++

if ((isMultiPlayer) and (not isServer)) exitwith {};

for "_i" from 0 to 99999999 step 0 do
{
	{
				if ((alive _x) and (not (isplayer _x))) then
				{
					
					_target= _x getvariable "CHN_CROCCLOSESTTAR";
					_testposx= position _x select 0;
					_testposy= position _x select 1;
					_tarx=0;
					_tary=0;
					_tarx= (position _target select 0) - (position _x select 0);
					_tary= (position _target select 1) - (position _x select 1);
					_tarang=_tarx atan2 _tary;
					_x setvariable ["CHN_CROCTARANG",_tarang];
					_isstalk=_x getvariable "CHN_CROCSTALKING";
					_tarasl= getposASL _target select 2;
					//player sidechat format ["_isstalk %1 (! isnull _target) %2 _tarasl %3 _target distance _x %4",_isstalk,(! isnull _target),_tarasl,(_target distance _x)];
					if ((_isstalk) and (! isnull _target) and (_tarasl<2.2) and (_target distance _x>2.9)) then
					{
						_x setvariable ["CHN_CROC_ANIMRST",false];
						if ((getposATL _x select 2)> 3) then {_x setpos [getpos _x select 0,getpos _x select 1,0]};
						// player globalchat format ["%1 i stalk",_x];
						_x disableAI "ANIM";
						_x setdir _tarang;
						// _x switchmove "AswmPercMstpSnonWnonDnon";
						_x switchmove "Swimfast";
						_x setvariable ["CHN_CROC_TARANG", _tarang];
						_x setvariable ["CHN_CROC_BURST",true];
						//CHN_DEBUG=true;
						if (!(isnil "CHN_DEBUG")) then {player sidechat format ["target stalk %1",_target]};
						_stuckchecktime=_x getvariable "CHN_CROCLASTTIME";
						if (time>_stuckchecktime + 4) then
						{
							_lastpos=_x getvariable "CHN_CROCLASTPOS";
							if (_lastpos distance _x<1.5) then	
							{
								_pos= position _x;
								_x setpos [(_pos select 0)+2.5,_pos select 1];
							};
							_x setvariable ["CHN_CROCLASTTIME",time];
							_x setvariable ["CHN_CROCLASTPOS",position _x];
						};

					}
					else
					{
						if (!(_x getvariable "CHN_CROC_ANIMRST")) then
						{
							_x switchmove "";
							_x setvariable ["CHN_CROC_ANIMRST",true];
							_x setvariable ["CHN_CROC_BURST",true];
							_x enableAI "ANIM";
							_x enableAI "MOVE";
							
							_x setvariable ["CHN_CROC_ANIMRST",false];
							if ((alive _target) and (_target distance _x<5)) then 
							{
								_x setdir _tarang;
								[_x,_target] spawn CROC_ATTACK;
							};
						};
					};
				};	
				
			
				

	if ((_x distance (_x getvariable "CHN_CROCCLOSESTTAR")>220)) then	
		{
		if (!(_x getvariable "CHN_CROC_ANIMRST")) then
						{
							_x switchmove "";
							_x setvariable ["CHN_CROC_ANIMRST",true];
							_x setvariable ["CHN_CROC_BURST",true];
							_x enableAI "ANIM";
							_x enableAI "MOVE";
							
							_x setvariable ["CHN_CROC_ANIMRST",false];
							
						};
		};



				
	} foreach CHN_CROCSTALKERARR;
	sleep 1.9;
	// player globalchat format ["CHN_CROCSTALKERARR  %1",CHN_CROCSTALKERARR];
	//if (true) then {player sidechat format ["Stalker script iteration time indicator %1",time]};
};