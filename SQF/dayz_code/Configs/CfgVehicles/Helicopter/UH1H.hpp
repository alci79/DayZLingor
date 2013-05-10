	class UH1H_base: Helicopter 
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics {};
				class Turrets: Turrets {};
			};
			class LeftDoorGun: MainTurret
			{
				class Turrets: Turrets {};
			};
		};
	};
	
	class UH1H_DZ: UH1H_base
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 5;
		transportMaxMagazines = 25;
        transportmaxbackpacks = 4;
		class Sounds {
			class Engine {
				sound[] = {"\lingor_skaronator\vehicle\uh1\snd\uh1_t.wss", 2.51189, 1, 1500};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			
			class RotorLowOut {
				sound[] = {"\lingor_skaronator\vehicle\uh1\snd\uh1_rb.wss", 2.51189, 1, 2000};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6, 3.14, 2, 0.5};
			};
			
			class RotorHighOut {
				sound[] = {"\lingor_skaronator\vehicle\uh1\snd\uh1_ra.wss", 2.51189, 1, 2000};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6, 3.14, 2, 0.5};
			};
			
			class EngineIn {
				sound[] = {"\lingor_skaronator\vehicle\uh1\snd\uh1_c.wss", 3.16228, 1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			
			class RotorLowIn {
				sound[] = {"\lingor_skaronator\vehicle\uh1\snd\uh1_rb.wss", 3.16228, 1};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			
			class RotorHighIn {
				sound[] = {"\lingor_skaronator\vehicle\uh1\snd\uh1_ra.wss", 3.16228, 1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Turrets : Turrets 
		{
			class MainTurret : MainTurret 
			{
				magazines[] = {"100Rnd_762x51_M240"};
			};
			class LeftDoorGun : LeftDoorGun
			{
				magazines[] = {"100Rnd_762x51_M240"};
			};
		};
		hiddenSelectionsTextures[] = {"lingor_skaronator\vehicle\uh1\uh1_co.paa", "lingor_skaronator\vehicle\uh1\uh1_in_co.paa", "lingor_skaronator\vehicle\uh1\default_co.paa"};
	};