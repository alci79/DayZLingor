// ++++++++++++++++++++++++++++++++++++++++++++
// +++++ CROC_FORCECOLLISION.sqf script +++++++
// ++++++ written by Charon October 2009 ++++++
// ++++++++++++++++++++++++++++++++++++++++++++
// ++++++++++++++++++++++++++++++++++++++++++++
// ++ Adaption,modification or external use  ++
// +++++++++++ is not allowed +++++++++++++++++
// ++++++++++++++++++++++++++++++++++++++++++++
// 


if ((isMultiplayer) and ! (isServer)) exitwith {};

for "_i" from 0 to 99999999 step 0 do
{
	{
		if ((alive _x) and (_x getvariable "CHN_CROC_BURST")) then
		{
			_tarang=_x getvariable "CHN_CROCTARANG";
			_x setvelocity [15*sin _tarang ,15 * cos _tarang,0];
			hintsilent "i push";
		};
	} foreach CHN_CROCSTALKERARR;
	
	if ((! isMultiplayer) and (not alive player)) exitwith {};
};