class CfgPatches {
	class KPFS_HKP30 {
		units[] = {};
		weapons[] = {KPFS_HKP30};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};

class cfgWeapons {
	class glock17_EP1;	// External class reference
	
	class KPFS_HKP30 : glock17_EP1 {
		scope = 2;
		model = "\kpfs_weapons\p30\p30.p3d";
		picture = "\kpfs_weapons\data\icons\w_p30_ca.paa";
		displayName = $STR_KPFS_P30;
		magazines[] = {"15Rnd_9x19_M9"};
		begin1[] = {"Ca\Sounds_E\Weapons_E\Glock17\glock17_1", 1.0, 1, 800};
		begin2[] = {"Ca\Sounds_E\Weapons_E\Glock17\glock17_2", 1.0, 1, 800};
		soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\Glock17\reload1", 1.0, 1, 20};
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P30;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
