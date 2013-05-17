class CfgPatches {
	class KPFS_P226 {
		units[] = {};
		weapons[] = {KPFS_P226};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "KPFS_Weapons"};
	};
};

class CfgMagazines {
	class 15Rnd_9x19_M9;	// External class reference
	
	class kpfs_15Rnd_9x19 : 15Rnd_9x19_M9 {
		displayName = $STR_KPFS_P226_MAG;
		type = 16;
		picture = "\kpfs_weapons\p226\9mmluger_15mag.paa";
		ammo = "B_9x19_Ball";
		count = 15;
		initSpeed = 365;
		descriptionShort = " 15 Round 9x19 LUGER Magazine";
		
		class Library {
			libTextDesc = "The 9 mm Parabellum pistol cartridge (9 x 19 mm Luger, 9 x 19 mm NATO) was introduced in 1902 by the German weapons manufacturer Deutsche Waffen und Munitionsfabriken (DWM) for their Pistole Parabellum.";
		};
	};
};

class cfgWeapons {
	class Pistol;	// External class reference
	
	class KPFS_P226 : Pistol {
		scope = 2;
		model = "\kpfs_weapons\p226\p226.p3d";
		modelOptics = "-";
		picture = "\kpfs_weapons\p226\w_p226_ca.paa";
		displayName = $STR_KPFS_P226;
		opticsZoomMin = 0.7;
		opticsZoomMax = 0.7;
		opticsZoomInit = 0.7;
		reloadTime = 0.05;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.8;
		maxRange = 50;
		maxRangeProbab = 0.04;
		optics = "true";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		begin1[] = {"\kpfs_weapons\sound\p226.ogg", 3.16228, 1};
		soundBegin[] = {"begin1", 1};
		drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1", 0.01, 1};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload", 0.00177828, 1};
		magazines[] = {"kpfs_15Rnd_9x19"};
		Dexterity = 2;
		initSpeed = 365;
		dispersion = 0.02;
		ffCount = 1;
		recoil = "p22x";
		aiRateOfFire = 0.4;
		aiRateOfFireDistance = 50;
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P226;
		};
		
		class Armory {
			author = $STR_AUTHOR_SWM;
		};
	};
};
