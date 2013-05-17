class CfgPatches {
	class KPFS_PSL {
		units[] = {};
		weapons[] = {KPFS_PSL};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons_E", "CAWeapons"};
	};
};

class CfgMagazines {
	class 10Rnd_762x54_SVD;	// External class reference
	
	class KPFS_10Rnd_PSL : 10Rnd_762x54_SVD {
		scope = 2;
		displayName = $STR_KPFS_PSL_MAG;
		picture = "\kpfs_weapons\data\icons\m_psl_ca.paa";
		count = 10;
		ammo = "B_762x54_noTracer";
		initSpeed = 870;
		descriptionShort = "Ammo for the romanian sniper rifle in East German service.";
	};
};

class cfgWeapons {
	class SVD;	// External class reference
	
	class KPFS_PSL : SVD {
		scope = 2;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.01;
		weaponInfoType = "RscWeaponZeroing";
		model = "\kpfs_weapons\psl";
		picture = "\kpfs_weapons\data\icons\w_psl_ca.paa";
		displayName = $STR_KPFS_PSL;
		magazines[] = {"KPFS_10Rnd_PSL"};
		
		class OpticsModes {
			class Scope {
				OpticsID = 1;
				UseModelOptics = 1;
				MemoryPointCamera = "Eye";
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				OpticsFlare = 1;
				OpticsDisablePeripherialVision = 1;
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				VisionMode[] = {"Normal"};
				CameraDir = "";
			};
			
			class Ironsights {
				OpticsID = 2;
				UseModelOptics = 0;
				MemoryPointCamera = "Eye";
				OpticsPPEffects[] = {};
				OpticsFlare = 0;
				OpticsDisablePeripherialVision = 0;
				OpticsZoomMin = 0.25;
				OpticsZoomMax = 1.1;
				OpticsZoomInit = 0.5;
				DistanceZoomMin = 200;
				DistanceZoomMax = 200;
				VisionMode[] = {};
				CameraDir = "";
			};
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_PSL;
		};
		
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
};
