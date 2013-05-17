class CfgPatches {
	class KPFS_PM63 {
		units[] = {};
		weapons[] = {KPFS_PM63};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons_E", "CAWeapons"};
	};
};

class CfgAmmo {
	class Default;	// External class reference
	class BulletBase;	// External class reference
	
	class KPFS_PMM_Ball : BulletBase {
		cartridge = "FxCartridge_Small";
		hit = 6;
		cost = 5;
		deflecting = 20;
		typicalspeed = 320;
	};
};

class CfgMagazines {
	class CA_Magazine;	// External class reference
	
	class KPFS_25Rnd_pm : CA_Magazine {
		scope = 2;
		initSpeed = 350;
		count = 25;
		displayName = $STR_KPFS_PM63_MAG;
		ammo = "KPFS_PMM_Ball";
		picture = "\Ca\weapons\Data\Equip\m_HKM5_CA.paa";
	};
};

class cfgWeapons {
	class MP5A5;	// External class reference
	
	class KPFS_PM63 : MP5A5 {
		scope = 2;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		picture = "\kpfs_weapons\data\icons\w_pm63_ca.paa";
		model = "\kpfs_weapons\pm63";
		displayName = $STR_KPFS_PM63;
		magazines[] = {"KPFS_25Rnd_pm"};
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
		modes[] = {"FullAuto"};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_PM63;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
};
