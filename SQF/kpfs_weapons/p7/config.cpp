class CfgPatches {
	class KPFS_HKP7 {
		units[] = {};
		weapons[] = {KPFS_HKP7};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};

class CfgMagazines {
	class 15Rnd_9x19_M9;	// External class reference
	
	class kpfs_8Rnd_9x19 : 15Rnd_9x19_M9 {
		displayName = $STR_KPFS_HKP7_MAG;
		type = 16;
		ammo = "B_9x19_Ball";
		count = 8;
		initSpeed = 360;
		picture = "\ca\weapons\data\equip\m_m9_beretta_CA.paa";
		descriptionShort = $STR_KPFSS_HKP7_MAG;
		
		class Library {
			libTextDesc = "The 9 mm Parabellum pistol cartridge (9 x 19 mm Luger, 9 x 19 mm NATO) was introduced in 1902 by the German weapons manufacturer Deutsche Waffen und Munitionsfabriken (DWM) for their Pistole Parabellum.";
		};
	};
};

class cfgWeapons {
	class glock17_EP1;	// External class reference
	
	class KPFS_HKP7 : glock17_EP1 {
		scope = 2;
		model = "\kpfs_weapons\p7\p7.p3d";
		picture = "\kpfs_weapons\data\icons\w_p7_ca.paa";
		displayName = $STR_KPFS_P7;
		magazines[] = {"kpfs_8Rnd_9x19"};
		begin1[] = {"Ca\Sounds_E\Weapons_E\Glock17\glock17_1", 1.0, 1, 800};
		begin2[] = {"Ca\Sounds_E\Weapons_E\Glock17\glock17_2", 1.0, 1, 800};
		soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\Glock17\reload1", 1.0, 1, 20};
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P7;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
