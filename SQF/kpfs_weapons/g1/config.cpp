class CfgPatches {
	class KPFS_G1 {
		units[] = {};
		weapons[] = {KPFS_G1};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E", "CAWeapons_E_fnfal"};
	};
};

class CfgWeapons {
	class FN_FAL;	// External class reference
	
	class KPFS_G1 : FN_FAL {
		scope = 2;
		opticsZoomInit = 0.375;
		value = 0;
		model = "\kpfs_weapons\g1\g1.p3d";
		optics = 1;
		displayName = $STR_KPFS_G1;
		magazines[] = {"20Rnd_762x51_FNFAL"};
		picture = "\kpfs_weapons\data\icons\w_g1_ca.paa";
		
		class Library {
			libTextDesc = "German version of the FN FAL who was used between 1951 - 1959 in the BGS and the Bundeswehr.";
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
};
