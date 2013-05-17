class CfgPatches {
	class KPFS_MG4 {
		units[] = {};
		weapons[] = {KPFS_MG4};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E", "CAWeapons_E_fnfal", "CAWeapons_Colt1911"};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgMagazines {
	class 200Rnd_556x45_M249;	// External class reference
	
	class KPFS_200Rnd_556x45_MG4 : 200Rnd_556x45_M249 {
		scope = 2;
		displayName = "MG4 Box";
		picture = "\kpfs_weapons\Data\Icons\m_mg4_ca.paa";
		ammo = "B_556x45_Ball";
		count = 200;
		type = 2*		256;
		initSpeed = 915;
		sound[] = {"\ca\Weapons\Data\Sound\M249_1_SS", 17.7828, 1, 1300};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\FAL_reload", 0.01, 1, 20};
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = $STR_DSS_200RND_M249;
	};
};

class CfgWeapons {
	class M249;	// External class reference
	
	class KPFS_MG4 : M249 {
		scope = 2;
		model = "\kpfs_weapons\mg4\mg4";
		displayName = $STR_KPFS_MG4;
		picture = "\kpfs_weapons\data\icons\w_mg4_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		magazines[] = {"KPFS_200Rnd_556x45_MG4", "200Rnd_556x45_M249"};
		
		class animationsources {
			class revolving {
				source = "revolving";
				weapon = "mg1";
			};
		};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_MG4;
		};
	};
};
