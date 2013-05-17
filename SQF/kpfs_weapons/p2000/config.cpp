class CfgPatches {
	class KPFS_Weapons_P2000 {
		units[] = {};
		weapons[] = {KPFS_P2000};
		requiredVersion = 1.6;
		requiredAddons[] = {"CAWeapons", "KPFS_Weapons"};
	};
};

class CfgMagazines {
	class 15Rnd_9x19_M9;	// External class reference
	
	class KPFS_13Rnd_9x19_P2000 : 15Rnd_9x19_M9 {
		scope = 2;
		displayName = $STR_KPFS_P2000_MAG;
		count = 13;
		initSpeed = 270;
	};
};

class cfgWeapons {
	class M9;	// External class reference
	
	class KPFS_P2000 : M9 {
		scope = 2;
		model = "\kpfs_weapons\p2000\p2000";
		displayName = $STR_KPFS_P2000;
		magazines[] = {"KPFS_13Rnd_9x19_P2000"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100};
		discreteDistanceInitIndex = 1;
		picture = "\kpfs_weapons\data\icons\w_p2000_ca.paa";
		begin1[] = {"\kpfs_weapons\sound\usp9_fire1", 0.684328, 1, 700};
		soundBegin[] = {"begin1", 1};
		reloadMagazineSound[] = {"\kpfs_weapons\sound\usp_reload", 0.1, 1, 20};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P2000;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
