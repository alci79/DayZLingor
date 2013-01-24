sleep 1;
if ((isMultiplayer) and ! (isServer)) exitwith {};
for "_i" from 0 to 99999999 step 0 do
{
	{
		if ((surfaceIsWater position _x) and (faction _x !="CHN_CrocodilesFAC") and (vehicle _x==_x) and (alive _x) and (! (_x in CHN_ALLWATERUNITS))) then
		{
			CHN_ALLWATERUNITS set [count CHN_ALLWATERUNITS,_x];
		};
		
		if ((! alive _x) and (_x in CHN_ALLWATERUNITS)) then
		{
			_i = CHN_ALLWATERUNITS find _x;
			CHN_ALLWATERUNITS set [_i,objnull];
			CHN_ALLWATERUNITS = CHN_ALLWATERUNITS - [objnull];
		};
		
		if ((alive _x) and (!(surfaceIsWater position _x)) and (_x in CHN_ALLWATERUNITS)) then
		{
			_i = CHN_ALLWATERUNITS find _x;
			CHN_ALLWATERUNITS set [_i,objnull];
			CHN_ALLWATERUNITS = CHN_ALLWATERUNITS - [objnull];
		};
	} foreach allunits;
	//player sidechat format ["CHN_ALLWATERUNITS %1",CHN_ALLWATERUNITS];
};