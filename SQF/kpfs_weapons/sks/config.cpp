class CfgPatches {
	class KPFS_SKS {
		units[] = {};
		weapons[] = {KPFS_SKS};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};

class CfgMagazines {
	class 30Rnd_762x39_AK47;	// External class reference
	
	class KPFS_10Rnd_762x39_SKS : 30Rnd_762x39_AK47 {
		scope = 2;
		ammo = "B_762x39_Ball";
		count = 10;
		initSpeed = 710;
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		displayName = $STR_KPFS_SKS_MAG;
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
	
	class KPFS_KarS : AK_BASE {
		scope = 2;
		model = "\kpfs_weapons\sks";
		picture = "\kpfs_weapons\data\icons\w_sks_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"KPFS_10Rnd_762x39_SKS"};
		displayName = $STR_KPFS_SKS;
		dexterity = 1.57;
		reloadMagazineSound[] = {"\kpfs_weapons\sound\sks_reload", 0.0562341, 1, 10};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
		modes[] = {"Single"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		
		class Single : Single {
			displayName = "";
			begin1[] = {"\kpfs_weapons\sound\sks_fire1", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0018;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 500;
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_SKS;
		};
		
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
};
