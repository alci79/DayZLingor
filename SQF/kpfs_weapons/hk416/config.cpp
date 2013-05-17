class CfgPatches {
	class KPFS_HK416 {
		units[] = {};
		weapons[] = {KPFS_HK416};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E", "CAWeapons_E_fnfal"};
	};
};

class cfgWeapons {
	class M4A1_Aim;	// External class reference
	
	class KPFS_HK416_Aim : M4A1_Aim {
		displayName = $STR_KPFS_HK416;
		weaponInfoType = "RscWeaponEmpty";
		handAnim[] = {"OFP2_ManSkeleton", "\ca\weapons\data\anim\Mk48.rtm"};
		model = "\kpfs_weapons\hk416\hk416aim.p3d";
		modelOptics = "\kpfs_weapons\optika_elcan";
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		picture = "\kpfs_weapons\data\icons\w_416aim_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modes[] = {"Single", "Burst", "FullAuto"};
		
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
};
