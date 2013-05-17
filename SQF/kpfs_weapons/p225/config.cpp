class CfgPatches {
	class KPFS_P225 {
		units[] = {};
		weapons[] = {KPFS_P225};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons"};
	};
};

class cfgWeapons {
	class Pistol;	// External class reference
	
	class KPFS_P225 : Pistol {
		scope = 2;
		model = "\kpfs_weapons\p225\p6";
		modelOptics = "-";
		picture = "\kpfs_weapons\data\icons\w_p6_ca.paa";
		displayName = $STR_KPFS_P225;
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
			libTextDesc = $STR_KPFS_LIB_P225;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
