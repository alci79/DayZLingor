class CfgPatches {
	class KPFS_HK4 {
		units[] = {};
		weapons[] = {KPFS_HK4};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E", "CAWeapons_E_fnfal"};
	};
};

class CfgMagazines {
	class 15Rnd_9x19_M9;	// External class reference
	
	class kpfs_8Rnd_9x17 : 15Rnd_9x19_M9 {
		displayName = $STR_KPFS_HK4_MAG;
		type = 16;
		ammo = "B_765x17_Ball";
		count = 8;
		initSpeed = 300;
		descriptionShort = $STR_KPFSS_HK4_MAG;
		
		class Library {
			libTextDesc = "The 9 mm pistol cartridge (9 x 17 mm , .380 ACP) was developed by Moses Browning in 1908.";
		};
	};
};

class cfgWeapons {
	class Makarov;	// External class reference
	
	class KPFS_HK4 : Makarov {
		scope = 2;
		model = "kpfs_weapons\hk4\hk4.p3d";
		picture = "\kpfs_weapons\data\icons\w_hk4_ca.paa";
		displayName = $STR_KPFS_HK4;
		magazines[] = {"kpfs_8Rnd_9x17"};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_HK4;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
