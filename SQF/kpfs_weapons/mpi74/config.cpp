class CfgPatches {
	class KPFS_MPi74 {
		units[] = {};
		weapons[] = {"KPFS_MPi_KMKIX"};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons_E", "CAWeapons", "CAWeapons_E_AK"};
	};
};

class cfgWeapons {
	class AK_47_M;	// External class reference
	
	class KPFS_MPi_KM_72 : AK_47_M {
		scope = 2;
		model = "\kpfs_weapons\mpi74\mpi72";
		picture = "\kpfs_weapons\data\icons\w_mpi72_ca.paa";
		displayName = $STR_KPFS_MPI_KM72;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
	};
	
	class KPFS_MPi_KMS_72 : AK_47_M {
		scope = 2;
		model = "\kpfs_weapons\mpi74\mpi72s";
		displayName = $STR_KPFS_MPI_KMS72;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
	};
	class AK_74;	// External class reference
	
	class KPFS_MPi_AK_74 : AK_74 {
		scope = 2;
		model = "\kpfs_weapons\mpi74\mpi74";
		displayName = $STR_KPFS_MPI_AK74;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
	};
	
	class KPFS_MPi_AKS_74 : AK_74 {
		scope = 2;
		model = "\kpfs_weapons\mpi74\mpi74s";
		picture = "\kpfs_weapons\data\icons\w_mpi74s_ca.paa";
		displayName = $STR_KPFS_MPI_AKS74;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
	};
	class AKS_74_U;	// External class reference
	
	class KPFS_MPi_AKS_74K : AKS_74_U {
		scope = 2;
		model = "\kpfs_weapons\mpi74\mpi74k";
		picture = "\kpfs_weapons\data\icons\w_mpi74k_ca.paa";
		displayName = $STR_KPFS_MPI_AKS74K;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
	};
	
	class KPFS_MPi_KMKIX : AKS_74_U {
		scope = 2;
		model = "\kpfs_weapons\mpi74\mpikmk";
		modelOptics = "\ca\weapons\AK\pso_optics";
		picture = "\kpfs_weapons\data\icons\w_mpikmk_ca.paa";
		displayName = $STR_KPFS_MPIKMK;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_MPIKMK;
		};
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
