class CfgPatches {
	class KPFS_Weapons_walther {
		units[] = {};
		weapons[] = {KPFS_P5};
		requiredVersion = 1.6;
		requiredAddons[] = {"CAWeapons", "KPFS_Weapons"};
	};
};

class CfgMagazines {
	class CA_Magazine;	// External class reference
	
	class KPFS_8Rnd_9x19_P5 : CA_Magazine {
		scope = 2;
		displayName = $STR_KPFS_P5_MAG;
		type = 16;
		picture = "\Ca\weapons\Data\Equip\m_m9_beretta_CA.paa";
		ammo = "B_9x19_Ball";
		count = 8;
		sound[] = {"\ca\Weapons\Data\Sound\Beretta_single_shot_v3", 0.316228, 1, 700};
		initSpeed = 360;
	};
};

class cfgWeapons {
	class M9;	// External class reference
	
	class KPFS_P5 : M9 {
		scope = 2;
		magazines[] = {"KPFS_8Rnd_9x19_P5"};
		model = "\kpfs_weapons\p5\p5.p3d";
		dispersion = 0.0015;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.75;
		maxRange = 30;
		maxRangeProbab = 0.1;
		displayName = $STR_KPFS_P5;
		picture = "\kpfs_weapons\data\icons\w_p5_ca.paa";
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P5;
		};
	};
};
