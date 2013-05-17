class CfgPatches {
	class KPFS_Weapons {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons"};
	};
};

class CfgRecoils {
	p22x[] = {0.04, 0.006*( (5/7)), 0.05*.5*( (5/7)), 0.01, 0.009*( (5/7)), 0, 0.045, 0, -0.025*.5*( (5/7))};
	p226[] = {0.04, 0.006*( (5/7)), 0.05*.5*( (5/7)), 0.01, 0.009*( (5/7)), 0, 0.045, 0, -0.025*.5*( (5/7))};
};
class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons {
	class Default;	// External class reference
	class glock17_EP1;	// External class reference
	
	class kpfs_glock17 : glock17_EP1 {
		model = "\kpfs_weapons\glock\glock.p3d";
		picture = "\kpfs_weapons\data\icons\w_glock_ca.paa";
		displayName = $STR_KPFS_GLOCK;
		
		class Armory {
			author = $STR_AUTHOR_KPFS_UPD;
		};
	};
	class Colt1911;	// External class reference
	
	class KPFS_P52 : Colt1911 {
		scope = 2;
		displayName = $STR_KPFS_P52;
		
		class Library {
			libTextDesc = $STR_KPFS_LIB_P52;
		};
	};
};

class cfgVehicles {
	class ReammoBox;	// External class reference
	
	class KPFS_WeaponBox_E : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = $STR_KPFS_WEAPONBOX_E;
		model = "\kpfs_weapons\ammo\ammocrates.p3d";
		
		class TransportMagazines {
			class _xx_8Rnd_9x18_Makarov {
				magazine = "8Rnd_9x18_Makarov";
				count = 20;
			};
			
			class _xx_KPFS_30Rnd_762x43_STG44 {
				magazine = "KPFS_30Rnd_762x43_STG44";
				count = 20;
			};
			
			class _xx_30Rnd_762x39_AK47 {
				magazine = "30Rnd_762x39_AK47";
				count = 20;
			};
			
			class _xx_30Rnd_545x39_AK {
				magazine = "30Rnd_545x39_AK";
				count = 20;
			};
			
			class _xx_KPFS_25Rnd_pm {
				magazine = "KPFS_25Rnd_pm";
				count = 20;
			};
			
			class _xx_KPFS_10Rnd_PSL {
				magazine = "KPFS_10Rnd_PSL";
				count = 20;
			};
			
			class _xx_KPFS_100Rnd_762x39_RPD {
				magazine = "KPFS_100Rnd_762x39_RPD";
				count = 50;
			};
			
			class _xx_KPFS_10Rnd_762x39_SKS {
				magazine = "KPFS_10Rnd_762x39_SKS";
				count = 20;
			};
		};
		
		class TransportWeapons {
			class _xx_KPFS_Makarov {
				weapon = "KPFS_Makarov";
				count = 1;
			};
			
			class _xx_KPFS_MPi_KM_72 {
				weapon = "KPFS_MPi_KM_72";
				count = 1;
			};
			
			class _xx_KPFS_MPi_KMS_72 {
				weapon = "KPFS_MPi_KMS_72";
				count = 1;
			};
			
			class _xx_KPFS_MPi_AK_74 {
				weapon = "KPFS_MPi_AK_74";
				count = 1;
			};
			
			class _xx_KPFS_MPi_AKS_74 {
				weapon = "KPFS_MPi_AKS_74";
				count = 1;
			};
			
			class _xx_KPFS_MPi_AKS_74K {
				weapon = "KPFS_MPi_AKS_74K";
				count = 1;
			};
			
			class _xx_KPFS_MPi_KMKIX {
				weapon = "KPFS_MPi_KMKIX";
				count = 1;
			};
			
			class _xx_KPFS_PM63 {
				weapon = KPFS_PM63;
				count = 1;
			};
			
			class _xx_KPFS_PSL {
				weapon = KPFS_PSL;
				count = 1;
			};
			
			class _xx_KPFS_KarS {
				weapon = "KPFS_KarS";
				count = 1;
			};
		};
	};
	
	class KPFS_WeaponBox_W : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = $STR_KPFS_WEAPONBOX_W;
		model = "\kpfs_weapons\ammo\ammocrates.p3d";
		
		class TransportMagazines {
			class _xx_KPFS_8Rnd_9x19_P1 {
				magazine = "KPFS_8Rnd_9x19_P1";
				count = 20;
			};
			
			class _xx_KPFS_12Rnd_45ACP_P12 {
				magazine = "KPFS_12Rnd_45ACP_P12";
				count = 20;
			};
			
			class _xx_KPFS_12Rnd_45ACP_P12SD {
				magazine = "KPFS_12Rnd_45ACP_P12SD";
				count = 20;
			};
			
			class _xx_30Rnd_556x45_G36 {
				magazine = "30Rnd_556x45_G36";
				count = 20;
			};
			
			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 400;
			};
			
			class _xx_KPFS_KPFS_120Rnd_MG1 {
				magazine = "KPFS_120Rnd_MG1";
				count = 50;
			};
			
			class _xx_KPFS_32Rnd_MP2 {
				magazine = "KPFS_32Rnd_MP2";
				count = 20;
			};
			
			class _xx_30Rnd_9x19_MP5 {
				magazine = "30Rnd_9x19_MP5";
				count = 20;
			};
			
			class _xx_30Rnd_9x19_MP5SD {
				magazine = "30Rnd_9x19_MP5SD";
				count = 20;
			};
		};
		
		class TransportWeapons {
			class _xx_KPFS_P1 {
				weapon = KPFS_P1;
				count = 1;
			};
			
			class _xx_KPFS_P8 {
				weapon = KPFS_P8;
				count = 1;
			};
			
			class _xx_KPFS_P12 {
				weapon = KPFS_P12;
				count = 1;
			};
			
			class _xx_KPFS_P12SD {
				weapon = KPFS_P12SD;
				count = 1;
			};
			
			class _xx_kpfs_G3a3 {
				weapon = "kpfs_G3a3";
				count = 1;
			};
			
			class _xx_kpfs_g3a2 {
				weapon = "kpfs_g3a2";
				count = 1;
			};
			
			class _xx_kpfs_g3a4 {
				weapon = "kpfs_g3a4";
				count = 1;
			};
			
			class _xx_kpfs_g3a3zf {
				weapon = "kpfs_g3a3zf";
				count = 1;
			};
			
			class _xx_kpfs_g3dmr {
				weapon = "kpfs_g3dmr";
				count = 1;
			};
			
			class _xx_kpfs_hk32 {
				weapon = "kpfs_hk32";
				count = 1;
			};
			
			class _xx_kpfs_g36a1 {
				weapon = "kpfs_g36a1";
				count = 1;
			};
			
			class _xx_kpfs_g36a2 {
				weapon = "kpfs_g36a2";
				count = 1;
			};
			
			class _xx_kpfs_g36a4 {
				weapon = "kpfs_g36a4";
				count = 1;
			};
			
			class _xx_kpfs_g36k {
				weapon = "kpfs_g36k";
				count = 1;
			};
			
			class _xx_kpfs_g36ksk {
				weapon = "kpfs_g36ksk";
				count = 1;
			};
			
			class _xx_KPFS_HK416_Aim {
				weapon = "KPFS_HK416_Aim";
				count = 1;
			};
			
			class _xx_kpfs_KPFS_MG3 {
				weapon = KPFS_MG3;
				count = 1;
			};
			
			class _xx_kpfs_KPFS_MG3_eot {
				weapon = "KPFS_MG3_eot";
				count = 1;
			};
			
			class _xx_KPFS_MP2A1 {
				weapon = KPFS_MP2A1;
				count = 1;
			};
			
			class _xx_KPFS_MP5A3SD {
				weapon = KPFS_MP2A1;
				count = 1;
			};
			
			class _xx_KPFS_MP5A3 {
				weapon = KPFS_MP5A3;
				count = 1;
			};
		};
	};
	
	class KPFS_WeaponBox_WP : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = $STR_KPFS_WEAPONBOX_WP;
		model = "\kpfs_weapons\ammo\ammocrates.p3d";
		
		class TransportMagazines {
			class _xx_kpfs_8Rnd_9x17 {
				magazine = "kpfs_8Rnd_9x17";
				count = 20;
			};
			
			class _xx_kpfs_8Rnd_9x19 {
				magazine = "kpfs_8Rnd_9x19";
				count = 20;
			};
			
			class _xx_KPFS_8Rnd_9x19_P5 {
				magazine = "KPFS_8Rnd_9x19_P5";
				count = 20;
			};
			
			class _xx_kpfs_9Rnd_9x19 {
				magazine = "kpfs_9Rnd_9x19";
				count = 20;
			};
			
			class _xx_kpfs_15Rnd_9x19 {
				magazine = "kpfs_15Rnd_9x19";
				count = 20;
			};
			
			class _xx_KPFS_15Rnd_9x19_M9 {
				magazine = "15Rnd_9x19_M9";
				count = 20;
			};
			
			class _xx_KPFS_16Rnd_9x19_para {
				magazine = "KPFS_16Rnd_9x19_para";
				count = 20;
			};
			
			class _xx_KPFS_13Rnd_9x19_P2000 {
				magazine = "KPFS_13Rnd_9x19_P2000";
				count = 20;
			};
			
			class _xx_17Rnd_9x19_glock17 {
				magazine = "17Rnd_9x19_glock17";
				count = 20;
			};
			
			class _xx_30Rnd_9x19_MP5 {
				magazine = "30Rnd_9x19_MP5";
				count = 20;
			};
			
			class _xx_30Rnd_9x19_MP5SD {
				magazine = "30Rnd_9x19_MP5SD";
				count = 20;
			};
		};
		
		class TransportWeapons {
			class _xx_KPFS_HK4 {
				weapon = KPFS_HK4;
				count = 1;
			};
			
			class _xx_KPFS_P5 {
				weapon = KPFS_P5;
				count = 1;
			};
			
			class _xx_KPFS_HKP7 {
				weapon = KPFS_HKP7;
				count = 1;
			};
			
			class _xx_KPFS_P220 {
				weapon = KPFS_P220;
				count = 1;
			};
			
			class _xx_KPFS_P225 {
				weapon = KPFS_P225;
				count = 1;
			};
			
			class _xx_KPFS_P226 {
				weapon = KPFS_P226;
				count = 1;
			};
			
			class _xx_kpfs_glock17 {
				weapon = "kpfs_glock17";
				count = 1;
			};
			
			class _xx_KPFS_P88 {
				weapon = KPFS_P88;
				count = 1;
			};
			
			class _xx_KPFS_P99QA {
				weapon = KPFS_P99QA;
				count = 1;
			};
			
			class _xx_KPFS_HKP30 {
				weapon = KPFS_HKP30;
				count = 1;
			};
			
			class _xx_KPFS_P2000 {
				weapon = KPFS_P2000;
				count = 1;
			};
			
			class _xx_KPFS_MP5A3SD {
				weapon = KPFS_MP5A3SD;
				count = 1;
			};
			
			class _xx_KPFS_MP5A3 {
				weapon = KPFS_MP5A3;
				count = 1;
			};
		};
	};
	
	class KPFS_HeavyWeaponBox : KPFS_WeaponBox_W {
		displayName = $STR_KPFS_HEAVYWEAPONBOX;
		model = "\ca\weapons\ammocrates\USOrdnance.p3d";
		
		class TransportMagazines {
			class _xx_Mine_DM11 {
				magazine = "Mine_DM11";
				count = 10;
			};
			
			class _xx_HandGrenade_dm41 {
				magazine = "HandGrenade_dm41";
				count = 50;
			};
			
			class _xx_KPFS_MBB_HEAT {
				magazine = KPFS_MBB_HEAT;
				count = 50;
			};
			
			class _xx_KPFS_PZF3G_S_HEAT {
				magazine = KPFS_PZF3G_S_HEAT;
				count = 50;
			};
			
			class _xx_KPFS_PZF3G_T_HEAT {
				magazine = KPFS_PZF3G_T_HEAT;
				count = 50;
			};
			
			class _xx_KPFS_PZF3G_B_HEDP {
				magazine = KPFS_PZF3G_B_HEDP;
				count = 50;
			};
		};
		
		class TransportWeapons {
			class _xx_KPFS_MBB_Armbrust {
				weapon = "MBB_Armbrust";
				count = 1;
			};
			
			class _xx_kpfs_pzf3 {
				weapon = "kpfs_pzf3";
				count = 1;
			};
		};
	};
	
	class KPFS_WeaponBox_WW2 : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = $STR_KPFS_WEAPONBOX_WW2;
		model = "\kpfs_weapons\ammo\ammocrates.p3d";
		
		class TransportMagazines {
			class _xx_KPFS_8Rnd_9x19_P1 {
				magazine = "KPFS_8Rnd_9x19_P1";
				count = 20;
			};
			
			class _xx_KPFS_30Rnd_762x43_STG44 {
				magazine = "KPFS_30Rnd_762x43_STG44";
				count = 20;
			};
			
			class _xx_20Rnd_762x51_FNFAL {
				magazine = "20Rnd_762x51_FNFAL";
				count = 20;
			};
			
			class _xx_KPFS_32Rnd_MP2 {
				magazine = "KPFS_32Rnd_MP2";
				count = 20;
			};
			
			class _xx_20Rnd_762x51_DMR {
				magazine = "20Rnd_762x51_DMR";
				count = 20;
			};
			
			class _xx_30Rnd_762x39_AK47 {
				magazine = "30Rnd_762x39_AK47";
				count = 20;
			};
			
			class _xx_KPFS_KPFS_120Rnd_MG1 {
				magazine = "KPFS_120Rnd_MG1";
				count = 50;
			};
			
			class _xx_KPFS_100Rnd_762x39_RPD {
				magazine = "KPFS_100Rnd_762x39_RPD";
				count = 50;
			};
			
			class _xx_KPFS_10Rnd_762x39_SKS {
				magazine = "KPFS_10Rnd_762x39_SKS";
				count = 20;
			};
			
			class _xx_KPFS_PZF60_Heat {
				magazine = "KPFS_PZF60_Heat";
				count = 20;
			};
			
			class _xx_KPFS_8Rnd_762x25_TT33 {
				magazine = "KPFS_8Rnd_762x25_TT33";
				count = 10;
			};
		};
		
		class TransportWeapons {
			class _xx_KPFS_P38 {
				weapon = KPFS_P38;
				count = 1;
			};
			
			class _xx_KPFS_P38k {
				weapon = "KPFS_P38k";
				count = 1;
			};
			
			class _xx_KPFS_TT33 {
				weapon = KPFS_TT33;
				count = 1;
			};
			
			class _xx_kpfs_KPFS_MG1 {
				weapon = KPFS_MG1;
				count = 1;
			};
			
			class _xx_KPFS_MP2 {
				weapon = KPFS_MP2;
				count = 1;
			};
			
			class _xx_KPFS_KarS {
				weapon = "KPFS_KarS";
				count = 1;
			};
			
			class _xx_KPFS_MP44 {
				weapon = KPFS_MP44;
				count = 1;
			};
			
			class _xx_KPFS_PZF60 {
				weapon = KPFS_PZF60;
				count = 1;
			};
		};
	};
};
