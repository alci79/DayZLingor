class CfgPatches {
	class ibr_hangars {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_Modules", "CAData"};
	};
};

class cfgvehicleClasses {
	class ibr_hangars {
		displayName = "Lingor Aircraft Shelters";
	};
};

class CfgSounds {
	class dooropen {
		name = "dooropen";
		sound[] = {"\ibr\ibr_hangars\sounds\dooropen.ogg", 1, 1};
		titles[] = {};
	};
	
	class doorclose {
		name = "doorclose";
		sound[] = {"\ibr\ibr_hangars\sounds\doorclose.ogg", 1, 1};
		titles[] = {};
	};
};

class Rotation {
	type = "translation";
	memory = 1;
	minValue = 0;
	maxValue = 1;
	angle0 = 0;
	angle1 = 1;
};

class CfgVehicles {
	class HouseBase;	// External class reference
	
	class House : HouseBase {
		class DestructionEffects;	// External class reference
	};
	class Ruins;	// External class reference
	
	class Land_ibr_hangar_ruins : Ruins {
		scope = 1;
		vehicleClass = "Ruins";
		model = "\ibr\ibr_hangars\ibr_hangar_ruins";
		displayName = "ibr_hangar_ruins";
	};
	
	class land_ibr_hangar : House {
		model = "\ibr\ibr_hangars\ibr_hangar";
		scope = 2;
		vehicleClass = "ibr_hangars";
		transportFuel = 50;
		transportRepair = 0;
		icon = "\ibr\ibr_hangars\icons\icon5.paa";
		mapSize = 40;
		displayName = "House";
		destrType = "DestructBuilding";
		armor = 1200;
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\ibr\ibr_hangars\ibr_hangar_ruins";
				position = "";
				intensity = 2;
				interval = 1;
				lifeTime = 1;
			};
		};
		
		class MarkerLights {
			class WhiteBlinking {
				name = "svet1";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {1.0, 1.0, 1.0, 1};
				brightness = 0.01;
				blinking = 0;
			};
		};
		
		class AnimationSources {
			class doorf {
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
		};
		
		class UserActions {
			class Open_Gate {
				displayName = "Open Gate";
				position = "handle1";
				radius = 10.0;
				onlyForPlayer = 0;
				condition = "this animationPhase ""doorfanim"" < 0.5";
				statement = "this animate [""doorfanim"", 1]";
			};
			
			class Close_Gate {
				displayName = "Close Gate";
				position = "handle1";
				radius = 10.0;
				onlyForplayer = 0;
				condition = "this animationPhase ""doorfanim"" > 0.5";
				statement = "this animate [""doorfanim"",0]";
			};
		};
	};
};
