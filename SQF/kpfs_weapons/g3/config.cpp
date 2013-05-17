class CfgPatches {
	class KPFS_G3 {
		units[] = {};
		weapons[] = {KPFS_G3SG1, KPFS_G3A2, KPFS_G3A3, KPFS_G3A4, KPFS_HK32};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E", "CAWeapons_E_fnfal"};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference

class cfgWeapons {
	class FN_FAL;	// External class reference
	
	class KPFS_G3SG1 : FN_FAL {
		scope = 2;
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		model = "\kpfs_weapons\g3\g3sg1.p3d";
		value = 0;
		optics = 1;
		dexterity = 1.64;
		displayName = $STR_KPFS_G3SG1;
		picture = "\kpfs_weapons\data\icons\w_g3sg1_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"20Rnd_762x51_DMR"};
		modelOptics = "\kpfs_weapons\optika_zfg3";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		modes[] = {"Single", "FullAuto"};
		
		class OpticsModes {
			class G3SB {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomMin = 0.05;
				opticsZoomMax = 0.1;
				opticsZoomInit = 0.0625;
				memoryPointCamera = "Konec hlavne";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 400;
				distanceZoomMax = 150;
				cameraDir = "";
				visionMode[] = {"Normal"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
			};
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_G3SG1;
		};
		
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class kpfs_G3a3 : FN_FAL {
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		value = 0;
		model = "\kpfs_weapons\g3\g3a3";
		optics = 1;
		dexterity = 1.64;
		displayName = $STR_KPFS_G3A3;
		picture = "\kpfs_weapons\data\icons\w_g3a3_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"20Rnd_762x51_DMR"};
		modes[] = {"Single", "FullAuto"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		class M203Muzzle;	// External class reference
		
		class Single : Mode_SemiAuto {
			begin1[] = {"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_1", 1.77828, 1, 1500};
			begin2[] = {"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_2", 1.77828, 1, 1500};
			soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
			reloadTime = 0.09;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0011;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.75;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_1", 1.77828, 1, 1500};
			begin2[] = {"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_2", 1.77828, 1, 1500};
			soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_6outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.004;
			aiRateOfFire = 12;
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_G3;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
	
	class kpfs_g3a2 : kpfs_G3a3 {
		scope = 2;
		model = "\kpfs_weapons\g3\g3a2";
		displayName = $STR_KPFS_G3A2;
		picture = "\kpfs_weapons\data\icons\w_g3a2_ca.paa";
		
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class kpfs_g3a4 : kpfs_G3a3 {
		scope = 2;
		model = "\kpfs_weapons\g3\g3a4";
		displayName = $STR_KPFS_G3A4;
		
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		picture = "\kpfs_weapons\data\icons\w_g3a4_ca.paa";
	};
	
	class kpfs_hk32 : kpfs_G3a3 {
		scope = 2;
		model = "\kpfs_weapons\g3\hk32";
		displayName = $STR_KPFS_HK32;
		magazines[] = {"30Rnd_762x39_AK47"};
		picture = "\kpfs_weapons\data\icons\w_hk32_ca.paa";
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_HK32;
		};
	};
	
	class KPFS_G3A3ZF : kpfs_G3a3 {
		scope = 2;
		model = "\kpfs_weapons\g3\g3zf.p3d";
		displayName = $STR_KPFS_G3A3ZF;
		picture = "\kpfs_weapons\data\icons\w_g3a3zf_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"20Rnd_762x51_DMR"};
		modelOptics = "\kpfs_weapons\optika_zfg3";
		visionMode[] = {"Normal"};
		
		class OpticsModes {
			class G3Leu {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomMin = 0.07;
				opticsZoomMax = 0.07;
				opticsZoomInit = 0.07;
				memoryPointCamera = "Konec hlavne";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
				visionMode[] = {"Normal"};
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
			};
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_G3A3ZF;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
	
	class KPFS_G3DMR : KPFS_G3SG1 {
		model = "\kpfs_weapons\g3\g3dmr.p3d";
		displayName = $STR_KPFS_G3DMR;
		picture = "\kpfs_weapons\data\icons\w_g3dmr_ca.paa";
		magazines[] = {"20Rnd_762x51_DMR"};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_G3DMR;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
	
	class KPFS_G3DMR2 : kpfs_G3a3 {
		model = "\kpfs_weapons\g3\g3dmr2.p3d";
		displayName = $STR_KPFS_G3DMR2;
		picture = "\kpfs_weapons\data\icons\w_g3dmr2_ca.paa";
		magazines[] = {"20Rnd_762x51_DMR"};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_G3DMR;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
