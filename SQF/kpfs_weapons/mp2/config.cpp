class CfgPatches {
	class KPFS_MP2 {
		units[] = {};
		weapons[] = {KPFS_MP2};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E", "CAWeapons_E_fnfal", "CAWeapons_Colt1911"};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgAmmo {
	class BulletBase;	// External class reference
	
	class KPFS_Para_9mm_Ball : BulletBase {
		cartridge = "FxCartridge_Small";
		hit = 7;
		cost = 5;
		typicalspeed = 360;
	};
};

class CfgMagazines {
	class CA_Magazine;	// External class reference
	class HandGrenade;	// External class reference
	
	class KPFS_32Rnd_MP2 : CA_Magazine {
		scope = 2;
		displayName = $STR_KPFS_MP2_MAG;
		initSpeed = 320;
		count = 32;
		ammo = "KPFS_Para_9mm_Ball";
		picture = "\kpfs_weapons\data\icons\m_mp2_ca.paa";
	};
};
class ThrowMuzzle;	// External class reference

class CfgWeapons {
	class MP5A5;	// External class reference
	
	class KPFS_MP2 : MP5A5 {
		scope = 2;
		opticsZoomMin = 0.27;
		opticsZoomMax = 0.42;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		model = "\kpfs_weapons\mp2\mp2.p3d";
		picture = "\kpfs_weapons\data\icons\w_mp2_ca.paa";
		displayName = $STR_KPFS_MP2;
		magazines[] = {"KPFS_32Rnd_MP2", "30Rnd_9x19_UZI"};
		modes[] = {"Single", "ai_single", "FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\SA61\SA61_reload_1", 1.0, 1.1, 30};
		
		class Single : Mode_SemiAuto {
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_4outof10";
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.015;
			begin1[] = {"Ca\Sounds_E\Weapons_E\UZI\UZI_single_1", 1.0, 1, 800};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.075;
		};
		
		class ai_Single : Mode_SemiAuto {
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_4outof10";
			dispersion = 0.006;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.6;
			maxRange = 100;
			maxRangeProbab = 0.001;
			sound[] = {"Ca\Sounds_E\Weapons_E\UZI\UZI_single_1", 1.0, 1, 800};
			showtoplayer = 0;
		};
		
		class FullAuto : Mode_FullAuto {
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			reloadTime = 0.075;
			begin1[] = {"Ca\Sounds_E\Weapons_E\UZI\UZI_single_1", 1.0, 1, 800};
			soundBegin[] = {"begin1", 1};
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_MP2;
		};
		descriptionShort = $STR_KPFS_MP2_SHORT;
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
	
	class KPFS_MP2A1 : KPFS_MP2 {
		model = "\kpfs_weapons\mp2\mp2a1.p3d";
		picture = "\kpfs_weapons\data\icons\w_mp2a1_ca.paa";
		displayName = $STR_KPFS_MP2A1;
		
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
};
