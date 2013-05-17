class CfgPatches {
	class KPFS_RPD {
		units[] = {};
		weapons[] = {KPFS_RPD};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};

class CfgMagazines {
	class 30Rnd_762x39_AK47;	// External class reference
	
	class KPFS_100Rnd_762x39_RPD : 30Rnd_762x39_AK47 {
		scope = 2;
		type = 2*256;
		ammo = "B_762x39_Ball";
		count = 100;
		initSpeed = 710;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		picture = "\kpfs_weapons\data\icons\m_rpd_ca.paa";
		displayName = $STR_KPFS_RPD_BOX;
		magazineReloadTime = 8;
	};
};
class manual;	// External class reference
class close;	// External class reference
class Single;	// External class reference
class FullAuto;	// External class reference
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference

class cfgWeapons {
	class RPK_74;	// External class reference
	
	class KPFS_RPD : RPK_74 {
		scope = 2;
		model = "\kpfs_weapons\rpd\rpd";
		displayName = $STR_KPFS_RPD;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		dexterity = 1.21;
		picture = "\kpfs_weapons\data\icons\w_rpd_ca.paa";
		reloadMagazineSound[] = {"\kpfs_weapons\sound\rpd_reload", 0.0562341, 1, 25};
		magazines[] = {"KPFS_100Rnd_762x39_RPD"};
		magazineReloadTime = 8;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
		modes[] = {"manual", "close", "short", "medium"};
		
		class manual : manual {
			begin1[] = {"\kpfs_weapons\sound\rpd.wss", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_machinegun_prone_3outof10";
			dispersion = 0.00125;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		
		class close : manual {
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		
		class short : close {
			burst = 8;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		
		class medium : close {
			burst = 12;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 620;
			maxRangeProbab = 0.04;
		};
		
		class animationsources {
			class revolving {
				source = "revolving";
				weapon = "rpd";
			};
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_RPD;
		};
		
		class Armory {
			author = $STR_AUTHOR_VILAS_UPD;
		};
	};
};
