class CfgPatches {
	class KPFS_P220 {
		units[] = {};
		weapons[] = {KPFS_P220};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "KPFS_Weapons"};
	};
};

class CfgMagazines {
	class 15Rnd_9x19_M9;	// External class reference
	
	class kpfs_9Rnd_9x19 : 15Rnd_9x19_M9 {
		displayName = $STR_KPFS_P220_MAG;
		type = 16;
		picture = "\kpfs_weapons\p220\9mmluger_9mag.paa";
		ammo = "B_9x19_Ball";
		count = 9;
		initSpeed = 360;
		descriptionShort = "9 Round 9x19 LUGER Magazine for the P220";
		
		class Library {
			libTextDesc = "The 9 mm Parabellum pistol cartridge (9 x 19 mm Luger, 9 x 19 mm NATO) was introduced in 1902 by the German weapons manufacturer Deutsche Waffen und Munitionsfabriken (DWM) for their Pistole Parabellum.";
		};
	};
};

class cfgWeapons {
	class Pistol;	// External class reference
	
	class KPFS_P220 : Pistol {
		scope = 2;
		model = "\kpfs_weapons\p220\p220.p3d";
		modelOptics = "-";
		picture = "\kpfs_weapons\p220\w_p220_ca.paa";
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
		displayName = $STR_KPFS_P220;
		begin1[] = {"\kpfs_weapons\sound\p220.ogg", 3.16228, 1};
		soundBegin[] = {"begin1", 1};
		drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1", 0.01, 1};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload", 0.00177828, 1};
		magazines[] = {"kpfs_9Rnd_9x19"};
		Dexterity = 2;
		initSpeed = 360;
		dispersion = 0.025;
		ffCount = 1;
		recoil = "pistolBase";
		aiRateOfFire = 0.45;
		aiRateOfFireDistance = 50;
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P220;
		};
		
		class Armory {
			author = $STR_AUTHOR_SWM;
		};
	};
};
