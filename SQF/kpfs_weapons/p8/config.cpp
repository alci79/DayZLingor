class CfgPatches {
	class KPFS_Weapons_HKUSP {
		units[] = {};
		weapons[] = {KPFS_P8, KPFS_P12, KPFS_P12SD};
		requiredVersion = 1.6;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E", "KPFS_Weapons"};
	};
};

class cfgAmmo {
	class B_45ACP_Ball;	// External class reference
	
	class kpfs_B_45ACP_Ball_sd : B_45ACP_Ball {
		visibleFire = 0.035;
		audibleFire = 0.035;
	};
};

class CfgMagazines {
	class 15Rnd_9x19_M9;	// External class reference
	
	class KPFS_15Rnd_9x19_P8 : 15Rnd_9x19_M9 {
		scope = 2;
		displayName = $STR_KPFS_P8_MAG;
		count = 15;
		initSpeed = 270;
	};
	class 7Rnd_45ACP_1911;	// External class reference
	
	class KPFS_12Rnd_45ACP_P12 : 7Rnd_45ACP_1911 {
		scope = 2;
		displayName = $STR_KPFS_P12_MAG;
		ammo = "B_45ACP_Ball";
		count = 12;
		initSpeed = 270;
	};
	
	class KPFS_12Rnd_45ACP_P12SD : KPFS_12Rnd_45ACP_P12 {
		displayName = $STR_KPFS_P12SD_MAG;
		ammo = "kpfs_B_45ACP_Ball_sd";
		count = 12;
		initSpeed = 270;
	};
};

class cfgWeapons {
	class M9;	// External class reference
	class M9sd;	// External class reference
	class Colt1911;	// External class reference
	
	class KPFS_P8 : M9 {
		scope = 2;
		model = "\kpfs_weapons\p8\p8";
		displayName = $STR_KPFS_P8;
		magazines[] = {"KPFS_15Rnd_9x19_P8"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100};
		discreteDistanceInitIndex = 1;
		picture = "\kpfs_weapons\data\icons\w_p8_ca.paa";
		begin1[] = {"\kpfs_weapons\sound\usp9_fire1", 0.684328, 1, 700};
		soundBegin[] = {"begin1", 1};
		reloadMagazineSound[] = {"\kpfs_weapons\sound\usp_reload", 0.1, 1, 20};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P8;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
	
	class KPFS_P12 : Colt1911 {
		scope = 2;
		model = "\kpfs_weapons\p8\p12";
		displayName = $STR_KPFS_P12;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100};
		discreteDistanceInitIndex = 1;
		picture = "\kpfs_weapons\data\icons\w_p12_ca.paa";
		magazines[] = {"KPFS_12Rnd_45ACP_P12"};
		begin1[] = {"\kpfs_weapons\sound\usp9_fire1", 0.714328, 1, 700};
		soundBegin[] = {"begin1", 1};
		reloadMagazineSound[] = {"\kpfs_weapons\sound\usp_reload", 0.1, 1, 20};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P12;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
	
	class KPFS_P12SD : M9sd {
		scope = 2;
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		model = "\kpfs_weapons\p8\p12sd";
		displayName = $STR_KPFS_P12SD;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100};
		discreteDistanceInitIndex = 1;
		picture = "\kpfs_weapons\data\icons\w_p12sd_ca.paa";
		magazines[] = {"KPFS_12Rnd_45ACP_P12SD"};
		begin1[] = {"\kpfs_weapons\sound\usp9sd_fire1", 0.316228, 1, 200};
		soundBegin[] = {"begin1", 1};
		reloadMagazineSound[] = {"\kpfs_weapons\sound\usp_reload", 0.1, 1, 20};
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P12;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
};
