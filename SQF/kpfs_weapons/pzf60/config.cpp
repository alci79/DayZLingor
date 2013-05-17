class CfgPatches {
	class KPFS_Panzerfaust {
		units[] = {};
		weapons[] = {"KPFS_Pzf60"};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};

class CfgAmmo {
	class R_RPG18_AT;	// External class reference
	
	class KPFS_Pzf60_HEAT : R_RPG18_AT {
		hit = 200;
		indirectHit = 5;
		indirectHitRange = 1;
		model = "\KPFS_weapons\pzf60\Rocket";
		maxSpeed = 45;
		initTime = 0;
		fuseDistance = 5;
		thrust = 210;
		timeToLive = 6;
		thrustTime = 2;
		cost = 100;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
		sideAirFriction = 0.5;
	};
};

class CfgMagazines {
	class RPG18;	// External class reference
	
	class KPFS_PZF60_HEAT : RPG18 {
		scope = 2;
		displayName = $STR_KPFS_PZF60;
		ammo = "KPFS_Pzf60_HEAT";
		type = 6 * 256;
		model = "\KPFS_weapons\pzf60\panzerfaust60_e";
		modelSpecial = "\KPFS_weapons\pzf60\panzerfaust60";
		picture = "\KPFS_weapons\data\icons\m_pzf60_ca.paa";
		initSpeed = 45;
		descriptionShort = HEAT;
	};
};

class CfgWeapons {
	class Launcher;	// External class reference
	
	class KPFS_PZF60 : Launcher {
		scope = 2;
		displayName = $STR_KPFS_PZF60;
		model = "\KPFS_weapons\pzf60\panzerfaust60_e";
		modelSpecial = "\KPFS_weapons\pzf60\panzerfaust60";
		modelOptics = "-";
		magazines[] = {KPFS_PZF60_HEAT};
		sound[] = {"Ca\sounds\Weapons\cannon\RocketLauncher_Shot04_A", 10.0, 1, 1400};
		drySound[] = {"Ca\sounds\Weapons\cannon\Javelin_dry_v1", 0.0001, 1, 10};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\cannon\flare_reload", 0.000316228, 1, 20};
		soundFly[] = {"Ca\sounds\Weapons\cannon\rocket_fly1", 10.0, 1.8, 600};
		picture = "\KPFS_weapons\data\icons\w_pzf60_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		recoil = "launcherBase";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 100;
		minRange = 10;
		midRange = 100;
		maxRange = 200;
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_PZF60;
		};
		descriptionShort = $STR_DSS_RPG18;
	};
};
