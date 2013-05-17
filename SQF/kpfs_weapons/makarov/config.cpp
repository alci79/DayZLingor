class CfgPatches {
	class KPFS_Makarov {
		units[] = {};
		weapons[] = {"KPFS_Makarov"};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons_E", "CAWeapons", "CAWeapons_E_AK"};
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

class cfgWeapons {
	class Makarov;	// External class reference
	
	class KPFS_Makarov : Makarov {
		scope = 2;
		model = "\kpfs_weapons\makarov\makarov";
		picture = "\kpfs_weapons\data\icons\w_makarov_ca.paa";
		displayName = $STR_KPFS_MAKAROV;
		descriptionShort = $STR_KPFSS_MAKAROV;
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_MAKAROV;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
