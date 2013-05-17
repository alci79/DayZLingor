class CfgPatches {
	class KPFS_P99 {
		units[] = {};
		weapons[] = {KPFS_P99};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons"};
	};
};

class CfgMagazines {
	class CA_Magazine;	// External class reference
	
	class KPFS_16Rnd_9x19_para : CA_Magazine {
		scope = 2;
		displayName = $STR_KPFS_P99_MAG;
		type = 16;
		picture = "\ca\weapons\data\equip\m_makarov_ca.paa";
		ammo = "B_9x19_Ball";
		count = 16;
		sound[] = {"\ca\Weapons\Data\Sound\Beretta_single_shot_v3", 0.316228, 1, 700};
		initSpeed = 390;
		descriptionShort = $STR_KPFSS_P99_MAG;
	};
};

class cfgWeapons {
	class glock17_EP1;	// External class reference
	
	class KPFS_P99QA : glock17_EP1 {
		scope = 2;
		model = "\kpfs_weapons\p99\p99.p3d";
		picture = "\kpfs_weapons\data\icons\w_p99_ca.paa";
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
		optics = 1;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		displayName = $STR_KPFS_P99;
		begin1[] = {"ca\sounds\weapons\pistols\m9_single1", 0.794328, 1, 700};
		soundBegin[] = {"begin1", 1};
		drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1", 0.01, 1, 20};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload", 0.1, 1, 20};
		magazines[] = {"KPFS_16Rnd_9x19_para"};
		dispersion = 0.018;
		ffCount = 1;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P99;
		};
		descriptionShort = P99QA;
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
};
