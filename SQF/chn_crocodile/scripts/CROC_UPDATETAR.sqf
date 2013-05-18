// ++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Croc UpdateTar script written by Charon October 2010
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Adaption,modification or external use is not allowed
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++

_croc=_this select 0;
_candidate=objNull;

sleep 2;

if ((isMultiPlayer) and (not isServer)) exitwith {};


for "_i" from 0 to 99999999 step 0 do
{
	
		
			
			// find closest known human for crocodile
			

			_mindist=100000;
			_mindist2=100000;
			_candidate=objNull;
			_oldcandidate=objNull;
			
			
				{
					_human=_x;
					
					_humanpos= getpos _human;
					_crocpos= getpos _croc;
					_dist= sqrt (((_humanpos select 0) - (_crocpos select 0))^2 + ((_humanpos select 1) - (_crocpos select 1))^2);
					
					if ((_dist<_mindist) and (alive _human)) then 
					
					{
						_oldcandidate=_candidate;
						_mindist=_crocpos distance _human;
						_candidate=_human;
						//player sidechat format ["close1 %1",_candidate];
					};
							
				} foreach CHN_ALLWATERUNITS;
		
		//hintsilent format ["_candidate %1 ",_candidate];
		_croc setvariable ["CHN_CROCCLOSESTTAR",_candidate,true];
		
	sleep 0.01;
	// player sidechat format ["updatetar time %1",time];
				
};