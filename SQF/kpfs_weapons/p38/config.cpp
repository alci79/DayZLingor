class CfgPatches {
	class KPFS_P38 {
		units[] = {};
		weapons[] = {KPFS_P1, KPFS_P38, "KPFS_P38k"};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};

class CfgMagazines {
	class CA_Magazine;	// External class reference
	
	class KPFS_8Rnd_9x19_P1 : CA_Magazine {
		scope = 2;
		displayName = $STR_KPFS_P38_MAG;
		type = 16;
		ammo = "B_9x19_Ball";
		count = 8;
		initSpeed = 360;
		picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
		descriptionShort = $STR_KPFSS_P38_MAG;
	};
};

class cfgWeapons {
	class M9;	// External class reference
	
	class KPFS_P1 : M9 {
		scope = 2;
		magazines[] = {"KPFS_8Rnd_9x19_P1"};
		model = "\kpfs_weapons\p38\p1.p3d";
		dispersion = 0.0015;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.75;
		maxRange = 30;
		maxRangeProbab = 0.1;
		displayName = $STR_KPFS_P1;
		picture = "\kpfs_weapons\data\icons\w_p1_ca.paa";
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P1;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
	
	class KPFS_P38 : KPFS_P1 {
		displayName = $STR_KPFS_P38;
		model = "\kpfs_weapons\p38\p38.p3d";
		picture = "\kpfs_weapons\data\icons\w_p38_ca.paa";
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P38;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
	
	class KPFS_P38k : KPFS_P1 {
		displayName = $STR_KPFS_P38K;
		model = "\kpfs_weapons\p38\p38k.p3d";
		picture = "\kpfs_weapons\data\icons\w_p38k_ca.paa";
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P38K;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
