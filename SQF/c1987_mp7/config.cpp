
class CfgPatches {
	class C1987_Mp7 {
		Units[] = {"C1987_Mp7_Box"};
		weapons[] = {C1987_MP7, "C1987_MP7_sd", "C1987_MP7_su", "C1987_MP7_su_sd", "C1987_MP7_zp", "C1987_MP7_zp_sd", "C1987_MP7_eot", "C1987_MP7_eot_sd", "C1987_MP7_aim", "C1987_Mp7_aim_sd", "C1987_MP7_acog", "C1987_MP7_acog_sd", "C1987_MP7_t", "C1987_MP7_sd_t", "C1987_MP7_su_t", "C1987_MP7_su_sd_t", "C1987_MP7_zp_t", "C1987_MP7_zp_sd_t", "C1987_MP7_eot_t", "C1987_MP7_eot_sd_t", "C1987_MP7_aim_sd", "C1987_Mp7_aim_sd_t", "C1987_MP7_acog_t", "C1987_MP7_acog_sd_t"};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};

class cfgRecoils {
	C1987_subMachineGunBase[] = {0, 0.005, 0.005, 0.005, 0.007, 0.006, 0.09, 0.002, -0.0015, 0.1, 0, 0};
};

class CfgAmmo {
	class Default;	// External class reference
	class BulletBase;	// External class reference
	
	class C1987_B_46x30_Ball : BulletBase {
		cartridge = "FxCartridge_Mp7";
		cost = 5;
		typicalSpeed = 700;
		airFriction = -0.001425;
		hit = 8.5;
	};
	
	class C1987_B_46x30_sd_Ball : BulletBase {
		cartridge = "FxCartridge_Mp7";
		visibleFire = 0.065;
		audibleFire = 0.065;
		cost = 5;
		typicalSpeed = 650;
		airFriction = -0.0012;
		hit = 7.0;
	};
};

class CfgMagazines {
	class Default;	// External class reference
	class CA_Magazine;	// External class reference
	
	class 40Rnd_46x30_mp7 : CA_Magazine {
		scope = 2;
		displayName = "40Rnd. MP7 Mag";
		picture = "\C1987_Mp7\equip\gui_mp7_40_mag.paa";
		model = "\C1987_Mp7\mp7_40_mag.p3d";
		ammo = "C1987_B_46x30_Ball";
		count = 40;
		initSpeed = 735;
		descriptionShort = "40Rnd. 4,6x30mm";
	};
	
	class 40Rnd_46x30_sd_mp7 : CA_Magazine {
		scope = 2;
		displayName = "40Rnd. MP7 SD Mag";
		picture = "\C1987_Mp7\equip\gui_mp7_40_mag.paa";
		model = "\C1987_Mp7\mp7_40_mag.p3d";
		ammo = "C1987_B_46x30_sd_Ball";
		count = 40;
		initSpeed = 700;
		descriptionShort = "40Rnd. 4,6x30mm SD";
	};
	
	class 20Rnd_46x30_mp7 : CA_Magazine {
		scope = 2;
		displayName = "20Rnd. MP7 Mag";
		picture = "\C1987_Mp7\equip\gui_mp7_20_mag.paa";
		model = "\C1987_Mp7\mp7_20_mag.p3d";
		ammo = "C1987_B_46x30_Ball";
		count = 20;
		initSpeed = 735;
		descriptionShort = "20Rnd. 4,6x30mm";
	};
	
	class 20Rnd_46x30_sd_mp7 : CA_Magazine {
		scope = 2;
		displayName = "20Rnd. MP7 SD Mag";
		picture = "\C1987_Mp7\equip\gui_mp7_20_mag.paa";
		model = "\C1987_Mp7\mp7_20_mag.p3d";
		ammo = "C1987_B_46x30_sd_Ball";
		count = 20;
		initSpeed = 700;
		descriptionShort = "20Rnd. 4,6x30mm SD";
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons {
	class MP5A5;	// External class reference
	
	class C1987_MP7_base : MP5A5 {
		scope = 2;
		displayName = MP7;
		model = "\C1987_Mp7\mp7.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7.paa";
		optics = 0;
		value = 1000;
		dexterity = 1.75;
		handAnim[] = {"OFP2_ManSkeleton", "\C1987_Mp7\anim\mp7.rtm"};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_s1.wss", 2, 1, 750};
			begin2[] = {"\C1987_Mp7\sound\mp7_s2.wss", 2, 1, 750};
			begin3[] = {"\C1987_Mp7\sound\mp7_s3.wss", 2, 1, 750};
			begin4[] = {"\C1987_Mp7\sound\mp7_s4.wss", 2, 1, 750};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.004;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_s1.wss", 2, 1, 750};
			begin2[] = {"\C1987_Mp7\sound\mp7_s2.wss", 2, 1, 750};
			begin3[] = {"\C1987_Mp7\sound\mp7_s3.wss", 2, 1, 750};
			begin4[] = {"\C1987_Mp7\sound\mp7_s4.wss", 2, 1, 750};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		reloadMagazineSound[] = {"\C1987_Mp7\sound\mp7_reload.wss", 1, 1, 20};
		drySound[] = {"\C1987_Mp7\sound\mp7_dry.wss", 1, 1, 20};
		magazines[] = {"40Rnd_46x30_mp7", "20Rnd_46x30_mp7"};
		descriptionShort = "HK MP7A1";
		
		class Library {
			libTextDesc = "The MP7 is a German Submachine Gun Manufactured by Heckler and Koch (HK) and Chambered for the HK 4.6×30mm Cartridge. It was Designed with the new Cartridge to Meet NATO Requirements Published in 1989, as these Requirements call for a Personal Defense Weapon (PDW) Class Firearm, with a greater ability to defeat body armor than current Weapons limited to conventional Pistol Cartridges. The MP7 went into Production in 2001. It is a direct Rival to the FN P90, also Developed in Response to NATO's Requirement. The Weapon has been revised since its Introduction and the current Production Version is the MP7A1.";
		};
	};
	
	class C1987_MP7 : C1987_MP7_base {
		displayName = MP7;
		model = "\C1987_Mp7\mp7.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7.paa";
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_sd : C1987_MP7_base {
		displayName = "MP7 SD";
		model = "\C1987_Mp7\mp7_sd.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_sd.paa";
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_su : C1987_MP7_base {
		displayName = "MP7 SU";
		model = "\C1987_Mp7\mp7_su.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_su.paa";
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_su_sd : C1987_MP7_base {
		displayName = "MP7 SU SD";
		model = "\C1987_Mp7\mp7_su_sd.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_su_sd.paa";
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_zp : C1987_MP7_base {
		displayName = "MP7 Z-Point";
		model = "\C1987_Mp7\mp7_zp.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_zp.paa";
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_zp_sd : C1987_MP7_base {
		displayName = "MP7 Z-Point SD";
		model = "\C1987_Mp7\mp7_zp_sd.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_zp_sd.paa";
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_eot : C1987_MP7_base {
		displayName = "MP7 EoTech";
		model = "\C1987_Mp7\mp7_eot.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_eot.paa";
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_eot_sd : C1987_MP7_base {
		displayName = "MP7 EoTech SD";
		model = "\C1987_Mp7\mp7_eot_sd.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_eot_sd.paa";
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_aim : C1987_MP7_base {
		displayName = "MP7 AimPoint";
		model = "\C1987_Mp7\mp7_aim.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_aim.paa";
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_aim_sd : C1987_MP7_base {
		displayName = "MP7 AimPoint SD";
		model = "\C1987_Mp7\mp7_aim_sd.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_aim_sd.paa";
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_acog : C1987_MP7_base {
		displayName = "MP7 Acog";
		model = "\C1987_Mp7\mp7_acog.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_acog.paa";
		
		class OpticsModes {
			class ACOG {
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				opticsZoomMin = 0.0623;
				opticsZoomInit = 0.0023;
				opticsZoomMax = 0.0623;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = "false";
				opticsDisablePeripherialVision = "false";
				cameraDir = "";
			};
			
			class Kolimator : ACOG {
				opticsID = 2;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye2";
				visionMode[] = {};
			};
		};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_acog_sd : C1987_MP7_base {
		displayName = "MP7 Acog SD";
		model = "\C1987_Mp7\mp7_acog_sd.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_acog_sd.paa";
		
		class OpticsModes {
			class ACOG {
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				opticsZoomMin = 0.0623;
				opticsZoomInit = 0.0023;
				opticsZoomMax = 0.0623;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = "false";
				opticsDisablePeripherialVision = "false";
				cameraDir = "";
			};
			
			class Kolimator : ACOG {
				opticsID = 2;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye2";
				visionMode[] = {};
			};
		};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_t : C1987_MP7_base {
		displayName = "MP7 Tac.";
		model = "\C1987_Mp7\mp7_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_sd_t : C1987_MP7_base {
		displayName = "MP7 Tac. SD";
		model = "\C1987_Mp7\mp7_sd_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_sd.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_su_t : C1987_MP7_base {
		displayName = "MP7 SU Tac.";
		model = "\C1987_Mp7\mp7_su_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_su.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_su_sd_t : C1987_MP7_base {
		displayName = "MP7 SU Tac. SD";
		model = "\C1987_Mp7\mp7_su_sd_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_su_sd.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_zp_t : C1987_MP7_base {
		displayName = "MP7 ZP Tac.";
		model = "\C1987_Mp7\mp7_zp_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_zp.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_zp_sd_t : C1987_MP7_base {
		displayName = "MP7 ZP Tac. SD";
		model = "\C1987_Mp7\mp7_zp_sd_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_zp_sd.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_eot_t : C1987_MP7_base {
		displayName = "MP7 EoTech Tac.";
		model = "\C1987_Mp7\mp7_eot_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_eot.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_eot_sd_t : C1987_MP7_base {
		displayName = "MP7 EoTech Tac. SD";
		model = "\C1987_Mp7\mp7_eot_sd_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_eot_sd.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_aim_t : C1987_MP7_base {
		displayName = "MP7 AimPoint Tac.";
		model = "\C1987_Mp7\mp7_aim_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_aim.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_aim_sd_t : C1987_MP7_base {
		displayName = "MP7 AimPoint Tac. SD";
		model = "\C1987_Mp7\mp7_aim_sd_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_aim_sd.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_acog_t : C1987_MP7_base {
		displayName = "MP7 Acog Tac.";
		model = "\C1987_Mp7\mp7_acog_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_acog.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		
		class OpticsModes {
			class ACOG {
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				opticsZoomMin = 0.0623;
				opticsZoomInit = 0.0023;
				opticsZoomMax = 0.0623;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = "false";
				opticsDisablePeripherialVision = "false";
				cameraDir = "";
			};
			
			class Kolimator : ACOG {
				opticsID = 2;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye2";
				visionMode[] = {};
			};
		};
		descriptionShort = "HK MP7A1";
	};
	
	class C1987_MP7_acog_sd_t : C1987_MP7_base {
		displayName = "MP7 Acog Tac. SD";
		model = "\C1987_Mp7\mp7_acog_sd_t.p3d";
		picture = "\C1987_Mp7\equip\gui_mp7_acog_sd.paa";
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
		
		class OpticsModes {
			class ACOG {
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				opticsZoomMin = 0.0623;
				opticsZoomInit = 0.0023;
				opticsZoomMax = 0.0623;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = "false";
				opticsDisablePeripherialVision = "false";
				cameraDir = "";
			};
			
			class Kolimator : ACOG {
				opticsID = 2;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye2";
				visionMode[] = {};
			};
		};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss", 1, 1, 200};
			soundBegin[] = {"begin1", 1};
			soundContinuous = 0;
			ffCount = 1;
			recoil = "C1987_subMachineGunBase";
			recoilProne = "C1987_subMachineGunBase";
			aiRateOfFire = 0.001;
			dispersion = 0.0035;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		magazines[] = {"40Rnd_46x30_sd_mp7", "20Rnd_46x30_sd_mp7"};
		descriptionShort = "HK MP7A1";
	};
};

class cfgVehicles {
	class ThingEffect;	// External class reference
	class ReammoBox;	// External class reference
	
	class FxCartridge_Mp7 : ThingEffect {
		model = "\C1987_Mp7\cartridge\46_30.p3d";
		displayName = "4.6x30mm Cartridge";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.0;
	};
	
	class C1987_Mp7_Box : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "C1987 MP7 Weapon-Box";
		model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		
		class TransportMagazines {
			class 40Rnd_46x30_mp7 {
				magazine = "40Rnd_46x30_mp7";
				count = 200;
			};
			
			class 40Rnd_46x30_sd_mp7 {
				magazine = "40Rnd_46x30_sd_mp7";
				count = 200;
			};
			
			class 20Rnd_46x30_mp7 {
				magazine = "20Rnd_46x30_mp7";
				count = 200;
			};
			
			class 20Rnd_46x30_sd_mp7 {
				magazine = "20Rnd_46x30_sd_mp7";
				count = 200;
			};
		};
		
		class TransportWeapons {
			class C1987_MP7 {
				weapon = C1987_MP7;
				count = 24;
			};
			
			class C1987_MP7_sd {
				weapon = "C1987_MP7_sd";
				count = 24;
			};
			
			class C1987_MP7_su {
				weapon = "C1987_MP7_su";
				count = 24;
			};
			
			class C1987_MP7_su_sd {
				weapon = "C1987_MP7_su_sd";
				count = 24;
			};
			
			class C1987_MP7_zp {
				weapon = "C1987_MP7_zp";
				count = 24;
			};
			
			class C1987_MP7_zp_sd {
				weapon = "C1987_MP7_zp_sd";
				count = 24;
			};
			
			class C1987_MP7_eot {
				weapon = "C1987_MP7_eot";
				count = 24;
			};
			
			class C1987_MP7_eot_sd {
				weapon = "C1987_MP7_eot_sd";
				count = 24;
			};
			
			class C1987_MP7_aim {
				weapon = "C1987_MP7_aim";
				count = 24;
			};
			
			class C1987_MP7_aim_sd {
				weapon = "C1987_MP7_aim_sd";
				count = 24;
			};
			
			class C1987_MP7_acog {
				weapon = "C1987_MP7_acog";
				count = 24;
			};
			
			class C1987_MP7_acog_sd {
				weapon = "C1987_MP7_acog_sd";
				count = 24;
			};
			
			class C1987_MP7_t {
				weapon = "C1987_MP7_t";
				count = 24;
			};
			
			class C1987_MP7_sd_t {
				weapon = "C1987_MP7_sd_t";
				count = 24;
			};
			
			class C1987_MP7_su_t {
				weapon = "C1987_MP7_su_t";
				count = 24;
			};
			
			class C1987_MP7_su_sd_t {
				weapon = "C1987_MP7_su_sd_t";
				count = 24;
			};
			
			class C1987_MP7_zp_t {
				weapon = "C1987_MP7_zp_t";
				count = 24;
			};
			
			class C1987_MP7_zp_sd_t {
				weapon = "C1987_MP7_zp_sd_t";
				count = 24;
			};
			
			class C1987_MP7_eot_t {
				weapon = "C1987_MP7_eot_t";
				count = 24;
			};
			
			class C1987_MP7_eot_sd_t {
				weapon = "C1987_MP7_eot_sd_t";
				count = 24;
			};
			
			class C1987_MP7_aim_t {
				weapon = "C1987_MP7_aim_t";
				count = 24;
			};
			
			class C1987_MP7_aim_sd_t {
				weapon = "C1987_MP7_aim_sd_t";
				count = 24;
			};
			
			class C1987_MP7_acog_t {
				weapon = "C1987_MP7_acog_t";
				count = 24;
			};
			
			class C1987_MP7_acog_sd_t {
				weapon = "C1987_MP7_acog_sd_t";
				count = 24;
			};
		};
	};
};
