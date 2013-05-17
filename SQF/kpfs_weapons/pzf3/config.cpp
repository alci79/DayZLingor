class CfgPatches {
	class KPFS_Pzf3 {
		units[] = {};
		weapons[] = {"KPFS_Pzf3"};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};

class CfgAmmo {
	class R_SMAW_HEAA;	// External class reference
	
	class KPFS_PZF3G_S_HEAT : R_SMAW_HEAA {
		hit = 400;
		indirectHit = 10;
		indirectHitRange = 1;
		model = "\ca\weapons\PG7_Rocket";
		maxSpeed = 918;
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
	
	class KPFS_PZF3G_T_HEAT : R_SMAW_HEAA {
		hit = 520;
		indirectHit = 10;
		indirectHitRange = 1;
		model = "\ca\weapons\PG7_Rocket";
		maxSpeed = 918;
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
	
	class KPFS_PZF3G_B_HEDP : R_SMAW_HEAA {
		hit = 120;
		indirectHit = 20;
		indirectHitRange = 10;
		model = "\ca\weapons\PG7_Rocket";
		maxSpeed = 918;
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
	
	class KPFS_PZF3G_S_HEAT : PG7V {
		model = "\KPFS_weapons\pzf3\pzf3_e";
		type = 2 * 		256;
		modelSpecial = "\KPFS_weapons\pzf3\pzf3_l";
		displayName = HEAT;
		displayNameShort = HEAT;
		ammo = KPFS_PZF3G_S_HEAT;
		picture = "\ca\weapons\data\equip\m_og7v_ca.paa";
		initSpeed = 255;
		descriptionShort = HEAT;
	};
	
	class KPFS_PZF3G_T_HEAT : PG7V {
		model = "\KPFS_weapons\pzf3\pzf3_e";
		type = 2 * 		256;
		modelSpecial = "\KPFS_weapons\pzf3\pzf3_t";
		displayName = T600;
		displayNameShort = T600;
		ammo = KPFS_PZF3G_T_HEAT;
		picture = "\ca\weapons\data\equip\m_pg7vr_ca.paa";
		initSpeed = 255;
		descriptionShort = "T600 HEAT";
	};
	
	class KPFS_PZF3G_B_HEDP : PG7V {
		model = "\KPFS_weapons\pzf3\pzf3_e";
		type = 2 * 		256;
		modelSpecial = "\KPFS_weapons\pzf3\pzf3_b";
		displayName = "Bunkerfaust";
		displayNameShort = "Bunkerfaust";
		ammo = KPFS_PZF3G_B_HEDP;
		picture = "\ca\weapons\data\equip\m_pg7vr_ca.paa";
		initSpeed = 255;
		descriptionShort = "Bunkerfaust";
	};
};

class cfgWeapons {
	class MAAWS;	// External class reference
	
	class KPFS_Pzf3 : MAAWS {
		scope = 2;
		displayName = $STR_KPFS_PZF3;
		model = "\KPFS_weapons\pzf3\pzf3_e";
		handAnim[] = {"OFP2_ManSkeleton", "\KPFS_weapons\pzf3\anim_pzf3.rtm"};
		modelOptics = "\KPFS_weapons\pzf3\optika_pzf";
		opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
		visionMode[] = {"Normal", NVG};
		opticsZoomMin = 0.0625;
		opticsZoomMax = 0.0625;
		distanceZoomMin = 150;
		distanceZoomMax = 150;
		magazines[] = {KPFS_PZF3G_S_HEAT, KPFS_PZF3G_T_HEAT, KPFS_PZF3G_B_HEDP};
		magazineReloadTime = 3;
		sound[] = {"\KPFS_weapons\sounds\carlGustav", 10.0, 1, 1400};
		picture = "\KPFS_weapons\data\icons\w_pzf3_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		aiRateOfFireDistance = 400;
		minRangeProbab = 0.3;
		midRangeProbab = 0.8;
		maxRangeProbab = 0.1;
		
		class Library {
			libTextDesc = $STR_LIB_PZF3;
		};
		weaponInfoType = "RscWeaponEmpty";
	};
};
