class CfgPatches {
	class KPFS_TT33 {
		units[] = {};
		weapons[] = {KPFS_TT33};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};

class CfgAmmo {
	class BulletBase;	// External class reference
	
	class KPFS_762x25_Ball : BulletBase {
		cartridge = "FxCartridge_Small";
		hit = 8;
		cost = 5;
		typicalspeed = 410;
	};
};

class CfgMagazines {
	class CA_Magazine;	// External class reference
	
	class KPFS_8Rnd_762x25_TT33 : CA_Magazine {
		scope = 2;
		type = 16;
		ammo = "KPFS_762x25_Ball";
		count = 8;
		initSpeed = 420;
		picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
		displayName = $STR_KPFS_TT33_MAG;
		descriptionShort = $STR_KPFSS_TT33_MAG;
	};
};

class cfgWeapons {
	class Makarov;	// External class reference
	
	class KPFS_TT33 : Makarov {
		scope = 2;
		model = "\kpfs_weapons\tt33\tt33";
		picture = "\kpfs_weapons\data\icons\w_tt33_ca.paa";
		displayName = $STR_KPFS_TT33;
		dispersion = 0.015;
		magazines[] = {"KPFS_8Rnd_762x25_TT33"};
		begin1[] = {"\kpfs_weapons\sound\tt33_fire1", 0.794328, 1, 700};
		begin2[] = {"\kpfs_weapons\sound\tt33_fire1", 0.794328, 1, 700};
		soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_TT33;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
};
