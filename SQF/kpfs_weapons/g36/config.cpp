class CfgPatches {
	class KPFS_G36 {
		units[] = {};
		weapons[] = {KPFS_G36A1, KPFS_G36A2};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E", "CAWeapons_E_fnfal"};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class cfgWeapons {
	class G36a;	// External class reference
	class MuzzleFar;	// External class reference
	
	class KPFS_G36A1 : G36a {
		scope = 2;
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		model = "\ca\weapons\G36\G36";
		picture = "\ca\weapons\G36\Data\Equip\w_g36_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName = $STR_KPFS_G36A1;
		descriptionShort = $STR_KPFS_G36A1_SHORT;
		modes[] = {"Single", "Fullauto"};
		muzzles[] = {"MuzzleFar", "MuzzleClose"};
		
		class MuzzleFar : MuzzleFar {
			displayName = $STR_DN_G36;
			
			class OpticsModes {
				class Scope {
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
				
				class Kolimator : Scope {
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.7;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.7;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
			modes[] = {"Single"};
		};
		
		class MuzzleClose : MuzzleFar {
			class OpticsModes {
				class Kolimator {
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.7;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.7;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
				
				class Scope : Kolimator {
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
			modes[] = {"Fullauto"};
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_G36A1;
		};
	};
	
	class KPFS_G36k : KPFS_G36A1 {
		scope = 2;
		model = "\ca\weapons\G36\G36_K";
		displayName = $STR_KPFS_G36K;
		picture = "\ca\weapons\G36\Data\Equip\w_g36k_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class KPFS_G36A2 : KPFS_G36A1 {
		scope = 2;
		value = 8;
		model = "kpfs_weapons\g36\g36a2.p3d";
		picture = "\kpfs_weapons\data\icons\w_g36a2_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName = $STR_KPFS_G36A2;
		descriptionShort = $STR_KPFS_G36A2_SHORT;
		
		class animationsources {
			class revolving {
				source = "revolving";
				weapon = "g36a2";
			};
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_G36A2;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
	
	class KPFS_G36A4 : KPFS_G36A1 {
		scope = 2;
		value = 8;
		modelOptics = "-";
		model = "kpfs_weapons\g36\g36a4.p3d";
		picture = "\kpfs_weapons\data\icons\w_g36a4_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName = $STR_KPFS_G36A4;
		descriptionShort = $STR_KPFS_G36A2_SHORT;
		
		class animationsources {
			class revolving {
				source = "revolving";
				weapon = "g36a4";
			};
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_G36A2;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
	
	class KPFS_G36KSK : KPFS_G36A1 {
		scope = 2;
		model = "kpfs_weapons\g36\g36ksk_dr";
		displayName = $STR_KPFS_G36KSK;
		picture = "\kpfs_weapons\data\icons\w_g36kv_spec_ca.paa";
		modelOptics = "\Ca\weapons_E\SCAR\SpecterDR_556_optic_4x.p3d";
		
		class OpticsModes {
			class Specter {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomMin = 0.071945;
				opticsZoomInit = 0.071945;
				opticsZoomMax = 0.31945;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
			
			class Ironsights : Specter {
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
		};
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash";
			direction = "flash dir";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		
		class animationsources {
			class revolving {
				source = "revolving";
				weapon = "g36a2";
			};
		};
	};
};
