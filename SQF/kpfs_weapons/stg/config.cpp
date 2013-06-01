
class CfgPatches {
	class KPFS_STG {
		units[] = {};
		weapons[] = {KPFS_STG44};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};

class CfgAmmo {
	class B_762x54_Ball;	// External class reference
	
	class KPFS_762x43_TBall : B_762x54_Ball {
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1;
		typicalspeed = 620;
		tracerColor[] = {0, 0, 0, 0};
		tracerColorR[] = {0, 0, 0, 0};
	};
};

class CfgMagazines {
	class CA_Magazine;	// External class reference
	
	class KPFS_30Rnd_762x43_STG44 : CA_Magazine {
		scope = 2;
		displayName = $STR_KPFS_STG44_MAG;
		picture = "\kpfs_weapons\data\icons\m_mp44_ca.paa";
		ammo = "KPFS_762x43_TBall";
		count = 30;
		initSpeed = 600;
	};
};
class manual;	// External class reference
class close;	// External class reference
class Single;	// External class reference
class FullAuto;	// External class reference
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference

class cfgWeapons {
	class AK_BASE;	// External class reference
	
	class KPFS_MP44 : AK_BASE {
		scope = 2;
		value = 0;
		model = "\kpfs_weapons\stg44";
		displayName = $STR_KPFS_STG44;
		picture = "\kpfs_weapons\data\icons\w_stg_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		optics = 1;
		drySound[] = {"\ca\Weapons\Data\Sound\AK47_dry_v1", 0.000316228, 1};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\AK47_fill_v3", 0.00562341, 1};
		modes[] = {"Single", "AI_single", "FullAuto"};
		magazines[] = {"KPFS_30Rnd_762x43_STG44"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\kpfs_weapons\sound\stg.wav", 10, 1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_6outof10";
			recoilProne = "recoil_single_primary_prone_6outof10";
			dispersion = 0.003;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.04;
		};
		
		class AI_Single : Mode_SemiAuto {
			sound[] = {"\kpfs_weapons\sound\stg.wav", 10, 1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_6outof10";
			recoilProne = "recoil_single_primary_prone_6outof10";
			dispersion = 0.007;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\kpfs_weapons\sound\stg.wav", 10, 1};
			reloadTime = 0.09;
			ffCount = 30;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_6outof10";
			dispersion = 0.0085;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 60;
			maxRangeProbab = 0.05;
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_STG44;
		};
		
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
};
