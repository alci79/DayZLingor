
class CfgPatches {
	class MIDF_Weapons {
		Units[] = {};
		weapons[] = {"MIDF_Aug_a3", "MIDF_Aug_a3_black", "MIDF_Aug_a3_blue", "MIDF_Aug_a3_acog", "MIDF_Aug_a3_acog_black", "MIDF_Aug_a3_acog_blue", "MIDF_Aug_a3_eotech", "MIDF_Aug_a3_eotech_black", "MIDF_Aug_a3_eotech_blue", "MIDF_Aug_A3_GL", "MIDF_Aug_A3_GL_black", "MIDF_Aug_A3_GL_blue", "MIDF_Aug_a3_acog_gl", "MIDF_Aug_a3_acog_gl_black", "MIDF_Aug_a3_acog_gl_blue", "MIDF_Aug_a3_eotech_gl", "MIDF_Aug_a3_eotech_gl_black", "MIDF_Aug_a3_eotech_gl_blue"};
		requiredVersion = 1.05;
		requiredAddons[] = {"CAWeapons", "CA_Anims_Char"};
		version = 1.1;
		fileName = "MIDF_Weapons.pbo";
		author = "";
		mail = "";
	};
};

class CfgRecoils {
	assaultRifleBase[] = {0, 0, 0, 0.06, 0.01, 0.01, 0.1, 0, -0.02, 0.1, -0.01, 0.01, 0.05, 0, 0};
	M4Recoil[] = {0, 0, 0, 0.06, 0.01, 0.01, 0.1, 0, -0.018, 0.1, -0.01, 0.01, 0.05, 0, 0};
	recoil_single_primary_3outof10[] = {0.04, 0.006*(  (3/7)), 0.05*.5*(  (3/7)), 0.01, 0.009*(  (3/7)), 0, 0.045, 0, -0.025*.5*(  (3/7))};
	recoil_single_primary_prone_2outof10[] = {0.035, 0.004*(  (2/7)), 0.035*.5*(  (2/7)), 0.01, 0.006*(  (2/7)), 0, 0.045, 0, -0.025*.25*(  (2/7)), 0.01, 0, -0.025*.25*(  (2/7))};
	recoil_auto_primary_2outof10[] = {0, 0.006*(  (2/7)), 0.035*.5*(  (2/7)), 0.04, 0.009*(  (2/7)), 0.015*(  (2/7)), 0.025, 0, 0.0125*(  (2/7))};
	recoil_auto_primary_prone_2outof10[] = {0, 0.004*(  (2/7)), 0.035*.25*(  (2/7)), 0.035, 0.006*(  (2/7)), 0.035*(  (2/7)), 0.01, 0.006*(  (2/7)), 0, 0.012, 0, -0.0125*(  (2/7)), 0.01, 0, -0.0025*(  (2/7))};
	recoil_auto_primary_prone_3outof10[] = {0, 0.004*(  (3/7)), 0.035*.25*(  (3/7)), 0.035, 0.006*(  (3/7)), 0.035*(  (3/7)), 0.01, 0.006*(  (3/7)), 0, 0.012, 0, -0.0125*(  (3/7)), 0.01, 0, -0.0025*(  (3/7))};
	recoil_auto_primary_3outof10[] = {0, 0.006*(  (3/7)), 0.035*.5*(  (3/7)), 0.04, 0.009*(  (3/7)), 0.015*(  (3/7)), 0.025, 0, 0.0125*(  (3/7))};
};

class CfgAmmo {
	class Default;	// External class reference
	class TimeBombCore;	// External class reference
	class MineCore;	// External class reference
	class BulletCore;	// External class reference
	class BulletBase;	// External class reference
	class RocketCore;	// External class reference
	class BombCore;	// External class reference
	
	class B_556x45_AugA3_Ball : BulletBase {
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 2;
		airFriction = -0.001425;
	};
};

class CfgMagazines {
	class Default;	// External class reference
	class CA_Magazine;	// External class reference
	class 20Rnd_556x45_Stanag;	// External class reference
	
	class 30Rnd_556x45_Aug : 20Rnd_556x45_Stanag {
		displayName = "5,56x45 Aug 30Rnd`s Mag.";
		ammo = "B_556x45_AugA3_Ball";
		count = 30;
		tracersEvery = 0;
		picture = "\MIDF_Weapons\aug_a3\pictures\aug_a3_mag.paa";
		model = "\MIDF_Weapons\aug_a3\aug_a3_mag.p3d";
		descriptionShort = " 30Rnds 5,56x45 Stanag AUG Magazine for the AUG Series";
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference
class Mode_Burst;	// External class reference

class CfgWeapons {
	class Default;	// External class reference
	class RifleCore;	// External class reference
	class Rifle;	// External class reference
	class Grenadelauncher;	// External class reference
	class GrenadeCore;	// External class reference
	class Launcher;	// External class reference
	class LauncherCore;	// External class reference
	class CannonCore;	// External class reference
	
	class MIDF_Aug_a3_base : Rifle {
		scope = 0;
		displayName = "";
		model = "\MIDF_Weapons\Aug_a3\Aug_a3.p3d";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_green.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		cursoraim = "Foresight";
		value = 2;
		optics = 0;
		dexterity = 1.8;
		opticsDisablePeripherialVision = 0;
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
		reloadMagazineSound[] = {"\MIDF_Weapons\sound\auga3_reload.wss", 1.77828, 1, 20};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\MIDF_Weapons\Sound\auga3.wss", 1.77828, 1, 1000};
			begin2[] = {"\MIDF_Weapons\Sound\auga3.wss", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
			reloadTime = 0.075;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.05;
		};
		
		class Burst : Mode_Burst {
			begin1[] = {"\MIDF_Weapons\Sound\auga3.wss", 1.77828, 1, 1000};
			begin2[] = {"\MIDF_Weapons\Sound\auga3.wss", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
			soundBurst = 0;
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 90;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
			dispersion = 0.001;
			reloadTime = 0.075;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\MIDF_Weapons\Sound\auga3.wss", 1.77828, 1, 1000};
			begin2[] = {"\MIDF_Weapons\Sound\auga3.wss", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00175;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
	};
	
	class MIDF_Aug_A3 : MIDF_Aug_a3_base {
		scope = 2;
		displayName = "AUG A3 (Green)";
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
		modelOptics = "\MIDF_Weapons\optic\leupold_cqt.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomInit = 0.5;
		opticsZoomMin = 0.12787;
		opticsZoomMax = 0.383612;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.01, 1};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		descriptionShort = "STEYR AUG A3 (Green) equipt with a Leupold CQ T 1-3x scope";
		
		class Library {
			libTextDesc = "The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	
	class MIDF_Aug_A3_Black : MIDF_Aug_a3_base {
		scope = 2;
		displayName = "AUG A3 (Black)";
		model = "\MIDF_Weapons\Aug_a3\Aug_a3_black.p3d";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_black.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
		modelOptics = "\MIDF_Weapons\optic\leupold_cqt.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomInit = 0.5;
		opticsZoomMin = 0.12787;
		opticsZoomMax = 0.383612;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.01, 1};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		descriptionShort = "STEYR AUG A3 (Black) equipt with a Leupold CQ T 1-3x scope";
		
		class Library {
			libTextDesc = "The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	
	class MIDF_Aug_A3_Blue : MIDF_Aug_a3_base {
		scope = 2;
		displayName = "AUG A3 (Blue)";
		model = "\MIDF_Weapons\Aug_a3\Aug_a3_blue.p3d";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_blue.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
		modelOptics = "\MIDF_Weapons\optic\leupold_cqt.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomInit = 0.5;
		opticsZoomMin = 0.12787;
		opticsZoomMax = 0.383612;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.01, 1};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		descriptionShort = "STEYR AUG A3 (Blue) equipt with a Leupold CQ T 1-3x scope";
		
		class Library {
			libTextDesc = "The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	
	class MIDF_Aug_A3_acog : MIDF_Aug_a3_base {
		scope = 2;
		displayName = "AUG A3 ACOG (Green)";
		model = "\MIDF_Weapons\Aug_a3\Aug_a3_acog.p3d";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_green.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
		modelOptics = "\MIDF_Weapons\optic\acog_cqt.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		dexterity = 1.51;
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.01, 1};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		descriptionShort = "STEYR AUG A3 (Green) equipt with a ACOG 3.5x Scope";
		
		class Library {
			libTextDesc = "The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	
	class MIDF_Aug_A3_acog_black : MIDF_Aug_a3_base {
		scope = 2;
		displayName = "AUG A3 ACOG (Black)";
		model = "\MIDF_Weapons\Aug_a3\Aug_a3_acog_black.p3d";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_black.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
		modelOptics = "\MIDF_Weapons\optic\acog_cqt.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		pticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		dexterity = 1.51;
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.01, 1};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		descriptionShort = "STEYR AUG A3 (Black) equipt with a ACOG 3.5x Scope";
		
		class Library {
			libTextDesc = "The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	
	class MIDF_Aug_A3_acog_blue : MIDF_Aug_a3_base {
		scope = 2;
		displayName = "AUG A3 ACOG (Blue)";
		model = "\MIDF_Weapons\Aug_a3\Aug_a3_acog_blue.p3d";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_blue.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
		modelOptics = "\MIDF_Weapons\optic\acog_cqt.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		pticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		dexterity = 1.51;
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.01, 1};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		descriptionShort = "STEYR AUG A3 (Blue) equipt with a ACOG 3.5x Scope";
		
		class Library {
			libTextDesc = "The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	
	class MIDF_Aug_A3_eotech : MIDF_Aug_a3_base {
		scope = 2;
		displayName = "AUG A3 EOTECH (Green)";
		model = "\MIDF_Weapons\Aug_a3\Aug_a3_eotech.p3d";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_green.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.01, 1};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		descriptionShort = "STEYR AUG A3 (Green) equipt with a EoTech Scope";
		
		class Library {
			libTextDesc = "The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	
	class MIDF_Aug_A3_eotech_black : MIDF_Aug_a3_base {
		scope = 2;
		displayName = "AUG A3 EOTECH (Black)";
		model = "\MIDF_Weapons\Aug_a3\Aug_a3_eotech_black.p3d";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_black.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.01, 1};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		descriptionShort = "STEYR AUG A3 (Black) equipt with a EoTech Scope";
		
		class Library {
			libTextDesc = "The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	
	class MIDF_Aug_A3_eotech_blue : MIDF_Aug_a3_base {
		scope = 2;
		displayName = "AUG A3 EOTECH (Blue)";
		model = "\MIDF_Weapons\Aug_a3\Aug_a3_eotech_blue.p3d";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_blue.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.01, 1};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		descriptionShort = "STEYR AUG A3 (Blue) equipt with a EoTech Scope";
		
		class Library {
			libTextDesc = "The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	
	class MIDF_Aug_A3_GL : MIDF_Aug_A3 {
		displayName = "AUG A3 GL (Green)";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_gl_green.paa";
		model = "\MIDF_Weapons\Aug_a3\aug_a3_gl.p3d";
		muzzles[] = {"AUGmuzzle", "GLmuzzle"};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_GL.rtm"};
		dexterity = 1.68;
		descriptionShort = "STEYR AUG A3 (Green) equipt with a Leupold CQ T 1-3x scope and a 40mm Granade launcher";
		
		class AUGmuzzle : MIDF_Aug_A3 {};
		
		class GLmuzzle : Grenadelauncher {
			displayName = "Grenade Launcher";
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\MIDF_Weapons\sound\M203.wss", 0.562341, 1};
			reloadMagazineSound[] = {"\MIDF_Weapons\sound\M203_Reload.wss", 0.056234, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			minRange = 60;
			minRangeProbab = 0.1;
			opticsZoomMin = 0.45;
			opticsZoomMax = 0.45;
			opticsZoomInit = 0.45;
		};
	};
	
	class MIDF_Aug_A3_GL_black : MIDF_Aug_A3 {
		displayName = "AUG A3 GL (Black)";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_gl_black.paa";
		model = "\MIDF_Weapons\Aug_a3\aug_a3_gl_black.p3d";
		muzzles[] = {"AUGmuzzle", "GLmuzzle"};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_GL.rtm"};
		dexterity = 1.68;
		descriptionShort = "STEYR AUG A3 (Black) equipt with a Leupold CQ T 1-3x scope and a 40mm Granade launcher";
		
		class AUGmuzzle : MIDF_Aug_A3 {};
		
		class GLmuzzle : Grenadelauncher {
			displayName = "Grenade Launcher";
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\MIDF_Weapons\sound\M203.wss", 0.562341, 1};
			reloadMagazineSound[] = {"\MIDF_Weapons\sound\M203_Reload.wss", 0.056234, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			minRange = 60;
			minRangeProbab = 0.1;
			opticsZoomMin = 0.45;
			opticsZoomMax = 0.45;
			opticsZoomInit = 0.45;
		};
	};
	
	class MIDF_Aug_A3_GL_blue : MIDF_Aug_A3 {
		displayName = "AUG A3 GL (Blue)";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_gl_blue.paa";
		model = "\MIDF_Weapons\Aug_a3\aug_a3_gl_blue.p3d";
		muzzles[] = {"AUGmuzzle", "GLmuzzle"};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_GL.rtm"};
		dexterity = 1.68;
		descriptionShort = "STEYR AUG A3 (Blue) equipt with a Leupold CQ T 1-3x scope and a 40mm Granade launcher";
		
		class AUGmuzzle : MIDF_Aug_A3 {};
		
		class GLmuzzle : Grenadelauncher {
			displayName = "Grenade Launcher";
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\MIDF_Weapons\sound\M203.wss", 0.562341, 1};
			reloadMagazineSound[] = {"\MIDF_Weapons\sound\M203_Reload.wss", 0.056234, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			minRange = 60;
			minRangeProbab = 0.1;
			opticsZoomMin = 0.45;
			opticsZoomMax = 0.45;
			opticsZoomInit = 0.45;
		};
	};
	
	class MIDF_Aug_A3_ACOG_GL : MIDF_Aug_A3 {
		displayName = "AUG A3 ACOG GL (Green)";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_gl_green.paa";
		model = "\MIDF_Weapons\Aug_a3\aug_a3_acog_gl.p3d";
		muzzles[] = {"AUGmuzzle", "GLmuzzle"};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_GL.rtm"};
		dexterity = 1.68;
		descriptionShort = "STEYR AUG A3 (Green) equipt with a ACOG 3.5x Scope and a 40mm Granade launcher";
		
		class AUGmuzzle : MIDF_Aug_A3_acog {};
		
		class GLmuzzle : Grenadelauncher {
			displayName = "Grenade Launcher";
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\MIDF_Weapons\sound\M203.wss", 0.562341, 1};
			reloadMagazineSound[] = {"\MIDF_Weapons\sound\M203_Reload.wss", 0.056234, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			minRange = 60;
			minRangeProbab = 0.1;
			opticsZoomMin = 0.45;
			opticsZoomMax = 0.45;
			opticsZoomInit = 0.45;
		};
	};
	
	class MIDF_Aug_A3_ACOG_GL_BLACK : MIDF_Aug_A3 {
		displayName = "AUG A3 ACOG GL (Black)";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_gl_black.paa";
		model = "\MIDF_Weapons\Aug_a3\aug_a3_acog_gl_black.p3d";
		muzzles[] = {"AUGmuzzle", "GLmuzzle"};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_GL.rtm"};
		dexterity = 1.68;
		descriptionShort = "STEYR AUG A3 (Black) equipt with a ACOG 3.5x Scope and a 40mm Granade launcher";
		
		class AUGmuzzle : MIDF_Aug_A3_acog {};
		
		class GLmuzzle : Grenadelauncher {
			displayName = "Grenade Launcher";
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\MIDF_Weapons\sound\M203.wss", 0.562341, 1};
			reloadMagazineSound[] = {"\MIDF_Weapons\sound\M203_Reload.wss", 0.056234, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			minRange = 60;
			minRangeProbab = 0.1;
			opticsZoomMin = 0.45;
			opticsZoomMax = 0.45;
			opticsZoomInit = 0.45;
		};
	};
	
	class MIDF_Aug_A3_ACOG_GL_BLUE : MIDF_Aug_A3 {
		displayName = "AUG A3 ACOG GL (Blue)";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_gl_blue.paa";
		model = "\MIDF_Weapons\Aug_a3\aug_a3_acog_gl_blue.p3d";
		muzzles[] = {"AUGmuzzle", "GLmuzzle"};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_GL.rtm"};
		dexterity = 1.68;
		descriptionShort = "STEYR AUG A3 (Blue) equipt with a ACOG 3.5x Scope and a 40mm Granade launcher";
		
		class AUGmuzzle : MIDF_Aug_A3_acog {};
		
		class GLmuzzle : Grenadelauncher {
			displayName = "Grenade Launcher";
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\MIDF_Weapons\sound\M203.wss", 0.562341, 1};
			reloadMagazineSound[] = {"\MIDF_Weapons\sound\M203_Reload.wss", 0.056234, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			minRange = 60;
			minRangeProbab = 0.1;
			opticsZoomMin = 0.45;
			opticsZoomMax = 0.45;
			opticsZoomInit = 0.45;
		};
	};
	
	class MIDF_Aug_A3_EOTECH_GL : MIDF_Aug_A3 {
		displayName = "AUG A3 EOTECH GL (Green)";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_gl_green.paa";
		model = "\MIDF_Weapons\Aug_a3\aug_a3_eotech_gl.p3d";
		muzzles[] = {"AUGmuzzle", "GLmuzzle"};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_GL.rtm"};
		dexterity = 1.68;
		descriptionShort = "STEYR AUG A3 (Green) equipt with a EoTech Scope and a 40mm Granade launcher";
		
		class AUGmuzzle : MIDF_Aug_A3_eotech {};
		
		class GLmuzzle : Grenadelauncher {
			displayName = "Grenade Launcher";
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\MIDF_Weapons\sound\M203.wss", 0.562341, 1};
			reloadMagazineSound[] = {"\MIDF_Weapons\sound\M203_Reload.wss", 0.056234, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			minRange = 60;
			minRangeProbab = 0.1;
			opticsZoomMin = 0.45;
			opticsZoomMax = 0.45;
			opticsZoomInit = 0.45;
		};
	};
	
	class MIDF_Aug_A3_EOTECH_GL_BLACK : MIDF_Aug_A3 {
		displayName = "AUG A3 EOTECH GL (Black)";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_gl_black.paa";
		model = "\MIDF_Weapons\Aug_a3\aug_a3_eotech_gl_black.p3d";
		muzzles[] = {"AUGmuzzle", "GLmuzzle"};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_GL.rtm"};
		dexterity = 1.68;
		descriptionShort = "STEYR AUG A3 (Black) equipt with a EoTech Scope and a 40mm Granade launcher";
		
		class AUGmuzzle : MIDF_Aug_A3_eotech {};
		
		class GLmuzzle : Grenadelauncher {
			displayName = "Grenade Launcher";
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\MIDF_Weapons\sound\M203.wss", 0.562341, 1};
			reloadMagazineSound[] = {"\MIDF_Weapons\sound\M203_Reload.wss", 0.056234, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			minRange = 60;
			minRangeProbab = 0.1;
			opticsZoomMin = 0.45;
			opticsZoomMax = 0.45;
			opticsZoomInit = 0.45;
		};
	};
	
	class MIDF_Aug_A3_EOTECH_GL_BLUE : MIDF_Aug_A3 {
		displayName = "AUG A3 EOTECH GL (Blue)";
		picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_gl_blue.paa";
		model = "\MIDF_Weapons\Aug_a3\aug_a3_eotech_gl_blue.p3d";
		muzzles[] = {"AUGmuzzle", "GLmuzzle"};
		magazines[] = {"30Rnd_556x45_Aug"};
		modes[] = {"Single", "FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton", "\MIDF_Weapons\data\anim\A3_GL.rtm"};
		dexterity = 1.68;
		descriptionShort = "STEYR AUG A3 (Green) equipt with a EoTech Scope and a 40mm Granade launcher";
		
		class AUGmuzzle : MIDF_Aug_A3_eotech {};
		
		class GLmuzzle : Grenadelauncher {
			displayName = "Grenade Launcher";
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\MIDF_Weapons\sound\M203.wss", 0.562341, 1};
			reloadMagazineSound[] = {"\MIDF_Weapons\sound\M203_Reload.wss", 0.056234, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			minRange = 60;
			minRangeProbab = 0.1;
			opticsZoomMin = 0.45;
			opticsZoomMax = 0.45;
			opticsZoomInit = 0.45;
		};
	};
};

class CfgVehicleClasses {
	class MIDF_Weapons {
		displayName = "MIDF Weapons";
	};
};

class CfgVehicles {
	class ReammoBox;	// External class reference
	
	class MIDFAmmoBox : ReammoBox {
		vehicleClass = "MIDF_Weapons";
		scope = 2;
		accuracy = 1000;
		model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		displayName = "MIDF Rifle AmmoBox";
		
		class TransportMagazines {
			class _xx_30Rnd_566x45_AUG {
				magazine = "30Rnd_556x45_Aug";
				count = 400;
			};
			
			class _xx_1Rnd_HE_M203 {
				magazine = "1Rnd_HE_M203";
				count = 100;
			};
			
			class _xx_FlareWhite_M203 {
				magazine = "FlareWhite_M203";
				count = 50;
			};
			
			class _xx_FlareGreen_M203 {
				magazine = "FlareGreen_M203";
				count = 50;
			};
			
			class _xx_FlareRed_M203 {
				magazine = "FlareRed_M203";
				count = 50;
			};
			
			class _xx_FlareYellow_M203 {
				magazine = "FlareYellow_M203";
				count = 50;
			};
			
			class _xx_HandGrenade_West {
				magazine = "HandGrenade_West";
				count = 100;
			};
			
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 50;
			};
			
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 50;
			};
			
			class _xx_SmokeShellYellow {
				magazine = "SmokeShellYellow";
				count = 50;
			};
			
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 50;
			};
			
			class _xx_1Rnd_SmokeRed_M203 {
				magazine = "1Rnd_SmokeRed_M203";
				count = 50;
			};
			
			class _xx_1Rnd_SmokeGreen_M203 {
				magazine = "1Rnd_SmokeGreen_M203";
				count = 50;
			};
			
			class _xx_1Rnd_SmokeYellow_M203 {
				magazine = "1Rnd_SmokeYellow_M203";
				count = 50;
			};
			
			class _xx_1Rnd_Smoke_M203 {
				magazine = "1Rnd_Smoke_M203";
				count = 50;
			};
		};
		
		class TransportWeapons {
			class _xx_AUGA3 {
				weapon = "MIDF_Aug_a3";
				count = 12;
			};
			
			class _xx_AUGA3_black {
				weapon = "MIDF_Aug_a3_black";
				count = 12;
			};
			
			class _xx_AUGA3_blue {
				weapon = "MIDF_Aug_a3_blue";
				count = 12;
			};
			
			class _xx_AUGA3_acog {
				weapon = "MIDF_Aug_a3_acog";
				count = 12;
			};
			
			class _xx_AUGA3_acog_black {
				weapon = "MIDF_Aug_a3_acog_black";
				count = 12;
			};
			
			class _xx_AUGA3_acog_blue {
				weapon = "MIDF_Aug_a3_acog_blue";
				count = 12;
			};
			
			class _xx_AUGA3_eotech {
				weapon = "MIDF_Aug_a3_eotech";
				count = 12;
			};
			
			class _xx_AUGA3_eotech_black {
				weapon = "MIDF_Aug_a3_eotech_black";
				count = 12;
			};
			
			class _xx_AUGA3_eotech_blue {
				weapon = "MIDF_Aug_a3_eotech_blue";
				count = 12;
			};
			
			class _xx_AUGA3_gl {
				weapon = "MIDF_Aug_a3_gl";
				count = 12;
			};
			
			class _xx_AUGA3_gl_black {
				weapon = "MIDF_Aug_a3_gl_black";
				count = 12;
			};
			
			class _xx_AUGA3_gl_blue {
				weapon = "MIDF_Aug_a3_gl_blue";
				count = 12;
			};
			
			class _xx_AUGA3_acog_gl {
				weapon = "MIDF_Aug_a3_acog_gl";
				count = 12;
			};
			
			class _xx_AUGA3_acog_gl_black {
				weapon = "MIDF_Aug_a3_acog_gl_black";
				count = 12;
			};
			
			class _xx_AUGA3_acog_gl_blue {
				weapon = "MIDF_Aug_a3_acog_gl_blue";
				count = 12;
			};
			
			class _xx_AUGA3_eotech_gl {
				weapon = "MIDF_Aug_a3_eotech_gl";
				count = 12;
			};
			
			class _xx_AUGA3_eotech_gl_black {
				weapon = "MIDF_Aug_a3_eotech_gl_black";
				count = 12;
			};
			
			class _xx_AUGA3_eotech_gl_blue {
				weapon = "MIDF_Aug_a3_eotech_gl_blue";
				count = 12;
			};
		};
	};
};
