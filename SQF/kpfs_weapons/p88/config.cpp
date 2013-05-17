class CfgPatches {
	class KPFS_P88 {
		units[] = {};
		weapons[] = {KPFS_P88};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons"};
	};
};

class cfgWeapons {
	class M9;	// External class reference
	
	class KPFS_P88 : M9 {
		scope = 2;
		model = "\kpfs_weapons\p88\p88.p3d";
		modelOptics = "-";
		picture = "\kpfs_weapons\data\icons\w_p88_ca.paa";
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.8;
		maxRange = 50;
		maxRangeProbab = 0.04;
		optics = 1;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		displayName = $STR_KPFS_P88;
		sound[] = {"\ca\Weapons\Data\Sound\Glock2_A", 1.0, 1};
		drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1", 0.0001, 1};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload", 0.0316228, 1};
		magazines[] = {"15Rnd_9x19_M9"};
		dispersion = 0.02;
		ffCount = 1;
		recoil = "pistolBase";
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P88;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
