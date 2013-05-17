class CfgPatches {
	class KPFS_MBB_Armbrust {
		units[] = {};
		weapons[] = {"KPFS_MBB_Armbrust"};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};

class CfgAmmo {
	class R_SMAW_HEAA;	// External class reference
	
	class KPFS_MBB_HEAT : R_SMAW_HEAA {
		hit = 300;
		indirectHit = 10;
		indirectHitRange = 1;
		model = "\KPFS_weapons\mbb\mbb";
		maxSpeed = 220;
		initTime = 0.0;
		fuseDistance = 10;
		thrust = 910;
		timeToLive = 6;
		thrustTime = 0.4;
		cost = 600;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
	};
};

class CfgMagazines {
	class PG7V;	// External class reference
	
	class KPFS_MBB_HEAT : PG7V {
		type = 2*256;
		model = "\KPFS_weapons\mbb\mbb";
		modelSpecial = "\KPFS_weapons\mbb\mbb_armbrust";
		displayName = HEAT;
		displayNameShort = HEAT;
		ammo = KPFS_MBB_HEAT;
		picture = "\KPFS_weapons\data\icons\m_mbb_ca.paa";
		initSpeed = 255;
		descriptionShort = HEAT;
	};
};

class cfgWeapons {
	class MAAWS;	// External class reference
	
	class KPFS_MBB_Armbrust : MAAWS {
		scope = 2;
		displayName = $STR_KPFS_MBB_ARMBRUST;
		model = "\KPFS_weapons\mbb\mbb_armbrust";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\RPG7.rtm"};
		modelOptics = "\ca\weapons\2Dscope_Metis";
		opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
		visionMode[] = {"Normal", NVG};
		opticsZoomMin = 0.0625;
		opticsZoomMax = 0.0625;
		distanceZoomMin = 150;
		distanceZoomMax = 150;
		magazines[] = {KPFS_MBB_HEAT};
		magazineReloadTime = 3;
		sound[] = {"\KPFS_weapons\sounds\carlGustav", 10.0, 1, 1400};
		picture = "\KPFS_weapons\data\icons\w_mbb_armbrust_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		aiRateOfFireDistance = 400;
		minRangeProbab = 0.3;
		midRangeProbab = 0.8;
		maxRangeProbab = 0.1;
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_MBB;
		};
		weaponInfoType = "RscWeaponEmpty";
	};
};
