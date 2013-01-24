CHN_fn_CROCFINDWP1 = {
private ["_crocodile","_mindist","_candidate","_candpos","_check"];
_crocodile=_this select 0;
_mindist=100000;
_candidate=objNull;
_candpos=[-1,-1,-1];
{
	
	if (alive _x) then
	{
		if (_x distance _crocodile<_mindist) then 
		{
			_mindist=_x distance _crocodile;
			_candidate=_x;
		};
		
	};
} foreach CHN_ALLWATERUNITS;
_check = _crocodile getvariable "CHN_CROCFOOD";
if ((! (isNull _candidate)) and (isNil "_check") and (_mindist<320)) then {_candpos=position _candidate};
// _candpos
position _candidate
};


CHN_fn_CROCSSPWNDNEAR = {
private ["_tarpos","_cond"];
_tarpos=_this select 0;
_cond=false;
{
	
	if (_tarpos distance _x<200) then
	{
		_cond=true;
		
	};
} foreach CHN_CROCASSIGNED;
_cond
};

CHN_fn_CROCSANY1NEAR = {
private ["_crocodile","_cond"];
_crocodile=_this select 0;
_cond=false;
{
	
	if ((_crocodile!=_x) and (faction _x !="CHN_CrocodilesFAC") and (_crocodile distance _x<250) and (alive _x) and (vehicle _x==_x)) then
	{
		_cond=true;
		
	};
} foreach allunits;
_cond
};



