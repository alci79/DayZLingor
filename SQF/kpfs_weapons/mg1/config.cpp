class CfgPatches {
	class KPFS_MG1 {
		units[] = {};
		weapons[] = {KPFS_MG1};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E", "CAWeapons_E_fnfal", "CAWeapons_Colt1911"};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgAmmo {
	class B_762x51_Ball;	// External class reference
	
	class KPFS_NATO_762x51_Ball : B_762x51_Ball {
		hit = 11;
		typicalspeed = 750;
		airFriction = -0.00105;
	};
};

class CfgMagazines {
	class CA_Magazine;	// External class reference
	
	class KPFS_120Rnd_MG1 : CA_Magazine {
		scope = 2;
		displayName = $STR_KPFS_MG1_MAG;
		picture = "\kpfs_weapons\data\icons\m_mg1_ca.paa";
		count = 120;
		type = 2* 256;
		ammo = "KPFS_NATO_762x51_Ball";
		initSpeed = 840;
	};
};

class CfgWeapons {
	class M240;	// External class reference
	
	class KPFS_MG1 : M240 {
		magazines[] = {"KPFS_120Rnd_MG1"};
		scope = 2;
		displayName = $STR_KPFS_MG1;
		model = "\kpfs_weapons\mg1\mg1.p3d";
		picture = "\kpfs_weapons\data\icons\w_mg1_ca.paa";
		reloadMagazineSound[] = {"\kpfs_weapons\sound\mgunreload.wav", 0.005, 1};
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
		cursor = "MGCursor";
		cursoraim = "\ca\Weapons\Data\w_lock";
		reloadTime = 0.0725;
		recoil = "recoil_auto_machinegun_8outof10";
		recoilProne = "recoil_auto_machinegun_prone_5outof10";
		dispersion = 0.0038;
		sound[] = {"\kpfs_weapons\sound\mg3.wav", 10, 1};
		soundContinuous = 0;
		soundBurst = 0;
		minRange = 1;
		minRangeProbab = 0.3;
		midRange = 5;
		midRangeProbab = 0.58;
		maxRange = 10;
		maxRangeProbab = 0.04;
		showToPlayer = 1;
		modes[] = {"manual", "close", "short", "medium", "far"};
		
		class animationsources {
			class revolving {
				source = "revolving";
				weapon = "mg1";
			};
		};
		
		class manual : Mode_FullAuto {
			reloadTime = 0.06;
			recoil = "recoil_auto_machinegun_8outof10";
			recoilProne = "recoil_auto_machinegun_prone_5outof10";
			dispersion = 0.0038;
			sound[] = {"\kpfs_weapons\sound\mg3.wav", 10, 1};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		
		class close : manual {
			burst = 3;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			dispersion = 0.0045;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		
		class short : close {
			burst = 4;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		
		class medium : close {
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 400;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		
		class far : close {
			burst = 3;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 600;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 600;
			maxRangeProbab = 0.01;
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_MG1;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
	
	class KPFS_MG3 : KPFS_MG1 {
		displayName = $STR_KPFS_MG3;
		model = "\kpfs_weapons\mg1\mg3.p3d";
		picture = "\kpfs_weapons\data\icons\w_mg3_ca.paa";
		
		class animationsources {
			class revolving {
				source = "revolving";
				weapon = "mg3";
			};
		};
	};
	
	class KPFS_MG3_eot : KPFS_MG1 {
		displayName = $STR_KPFS_MG3_EOT;
		model = "\kpfs_weapons\mg1\mg3_eot.p3d";
		picture = "\kpfs_weapons\data\icons\w_mg3eot_ca.paa";
		
		class animationsources {
			class revolving {
				source = "revolving";
				weapon = "mg3eot";
			};
		};
	};
};
