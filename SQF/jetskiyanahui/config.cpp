class DefaultEventhandlers;

class CfgPatches {
	class JetSkiYanahuiAddon {
		units[] = {"JetSkiYanahui", "JetSkiYanahui_Case", "JetSkiYanahui_Case_Green", "JetSkiYanahui_White", "JetSkiYanahui_Red"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData", "CACharacters", "CAWeapons", "CA_Anims_Char"};
		author[] = {"Kol9yN", "Zakat", "Gerasimow9", "YuraPetrov", "zGuba", "A.Karagod", "IceBreakr", "Sahbazz"};
	};
};

class CfgFactionClasses {
	class ibr_arl_faction {
		displayName = "Lingor Rebels (ARL)";
		priority = 90;
		side = 2;
	};
	
	class ibr_drg_faction {
		displayName = "Druglord's Army";
		priority = 90;
		side = 2;
	};
};

class CfgVehicles {
	class Zodiac;	// External class reference
	
	class JetSkiYanahui : Zodiac {
		vehicleClass = "Ship";
		model = "\JetSkiYanahui\JetSkiYanahui.p3d";
		displayname = "JetSki Yanahui 100500 (Yellow)";
		accuracy = 0.5;
		transportSoldier = 1;
		icon = "\JetSkiYanahui\UI\icon_jetski_ca.paa";
		picture = "\JetSkiYanahui\UI\picture_jetski_ca.paa";
		mapSize = 3;
		wheelSteeringSensitivity = 0.7;
		fuelCapacity = 30;
		turnCoef = 1;
		ejectDeadCargo = 0;
		ejectDeadDriver = 0;
		
		class Turrets {};
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		maxSpeed = 140;
		getInRadius = 2;
		supplyRadius = 0.5;
		transportMaxMagazines = 10;
		transportMaxWeapons = 2;
		brakeDistance = 10;
		canFloat = 1;
		autocenter = 1;
		driverAction = "ATV_Driver_EP1";
		CargoAction[] = {"ATV_Cargo_EP1"};
		extCameraPosition[] = {0, 1, -10};
		soundEnviron[] = {"", 0.0562341, 0.95};
		scope = 2;
		side = 3;
		faction = CIV_LGR;
		crew = "ibr_lingorman4s";
		typicalcargo[] = {"ibr_lingorman4s", "ibr_lingorman4s"};
		
		class Library {
			libtextdesc = "JetSki Yanahui based on Yamaha GP 1300R, made especially for Lingor Island, by Kol9yN(J-Guid), Zakat, Gerasimow9, YuraPetrov, zGuba, A.Karagod, IceBreakr and Sahbazz.";
		};
		
		class TransportMagazines {};
		
		class SoundEvents {};
		insideSoundCoef = 1;
		soundEngineOnInt[] = {"\ca\sounds\Vehicles\Water\CRRC_PBX\ext-boat-engine-start-01", 0.1, 1.0};
		soundEngineOnExt[] = {"\ca\sounds\Vehicles\Water\CRRC_PBX\ext-boat-engine-start-01", 1.0, 1.0, 100};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Water\CRRC_PBX\ext-boat-engine-stop-01", 0.1, 1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Water\CRRC_PBX\ext-boat-engine-stop-01", 1.0, 1.0, 100};
		
		class Sounds {
			class Engine {
				sound[] = {"\ca\sounds\Vehicles\Water\CRRC_PBX\ext-boat-engine-low-01", 1.0, 1.0, 300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(thrust factor[0.7, 0.1])";
			};
			
			class EngineHighOut {
				sound[] = {"\ca\sounds\Vehicles\Water\CRRC_PBX\ext-boat-engine-high-01", 1.0, 0.8, 400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(thrust factor[0.5, 1.3])";
			};
			
			class IdleOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Water\CRRC_PBX\ext-boat-engine-idle-01", 0.562341, 1.0, 150};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.2, 0])";
			};
			
			class WaternoiseOutW1 {
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02", 0.398107, 1.0, 100};
				frequency = "1";
				volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
			};
			
			class WaternoiseOutW2 {
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02", 0.398107, 1.0, 100};
				frequency = "1";
				volume = "(speed factor[9, 18.7])";
			};
		};
		castDriverShadow = 1;
		castCargoShadow = 1;
		
		class Exhausts {};
		
		class DestructionEffects {};
		cost = 1000;
		armor = 30;
		damageResistance = 0.00913;
		
		class Damage {
			tex[] = {};
			mat[] = {"JetSkiYanahui\rvmats\korpus.rvmat", "JetSkiYanahui\rvmats\korpus_damage.rvmat", "JetSkiYanahui\rvmats\korpus_destruct.rvmat", "JetSkiYanahui\rvmats\benzobak.rvmat", "JetSkiYanahui\rvmats\benzobak_damage.rvmat", "JetSkiYanahui\rvmats\benzobak_destruct.rvmat"};
		};
		
		class AnimationSources {
			class CaseHide {
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
		};
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\jetskiyanahui\korpus_co.paa", "\jetskiyanahui\benzobak_co.paa"};
	};
	
	class JetSkiYanahui_Case : JetSkiYanahui {
		scope = 1;
		accuracy = 1000;
		displayname = "JetSki Yanahui 100500";
		
		class AnimationSources {
			class CaseHide {
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
		
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.02, 0.02, 0.02, 1.0};
				position = "l_svetlo";
				direction = "l_svetlo_dir";
				hitpoint = "L svetlo";
				selection = "svetlo";
				size = 0.6;
				brightness = 0.6;
			};
			
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.02, 0.02, 0.02, 1.0};
				position = "p_svetlo";
				direction = "p_svetlo_dir";
				hitpoint = "L svetlo";
				selection = "svetlo";
				size = 0.6;
				brightness = 0.6;
			};
		};
	};
	
	class JetSkiYanahui_Case_Green : JetSkiYanahui_Case {
		scope = 2;
		side = 2;
		faction = "ibr_arl_faction";
		crew = "ibr_arl_rif";
		typicalcargo[] = {"ibr_arl_rif", "ibr_arl_rif"};
		accuracy = 1000;
		displayname = "JetSki Yanahui 100500 (Green)";
		hiddenSelectionsTextures[] = {"\jetskiyanahui\korpus_green_co.paa", "\jetskiyanahui\benzobak_co.paa"};
	};
	
	class JetSkiYanahui_Case_Green2 : JetSkiYanahui_Case {
		scope = 2;
		side = 2;
		faction = "ibr_drg_faction";
		crew = "ibr_drg_man6";
		typicalcargo[] = {"ibr_drg_man6", "ibr_drg_man5"};
		accuracy = 1000;
		displayname = "JetSki Yanahui 100500 (Green)";
		hiddenSelectionsTextures[] = {"\jetskiyanahui\korpus_green_co.paa", "\jetskiyanahui\benzobak_co.paa"};
	};
	
	class JetSkiYanahui_White : JetSkiYanahui {
		accuracy = 1000;
		displayname = "JetSki Yanahui 100500 (Blue)";
		hiddenSelectionsTextures[] = {"\jetskiyanahui\korpus_blue_co.paa", "\jetskiyanahui\benzobak_co.paa"};
	};
	
	class JetSkiYanahui_Red : JetSkiYanahui {
		accuracy = 1000;
		displayname = "JetSki Yanahui 100500 (Red)";
		hiddenSelectionsTextures[] = {"\jetskiyanahui\korpus_red_co.paa", "\jetskiyanahui\benzobak_co.paa"};
	};
};
