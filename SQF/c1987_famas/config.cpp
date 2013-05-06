
class Mode_SemiAuto {};

class Mode_Burst : Mode_SemiAuto {};

class Mode_FullAuto : Mode_SemiAuto {};

class CfgPatches {
	class C1987_Famas {
		Units[] = {};
		weapons[] = {"C1987_Famas_f1", "C1987_Famas_f1_aim", "C1987_Famas_f1_eot", "C1987_Famas_f1_sd", "C1987_Famas_f1_aim_sd", "C1987_Famas_f1_eot_sd", "C1987_Famas_g2", "C1987_Famas_g2_aim", "C1987_Famas_g2_eot", "C1987_Famas_g2_sd", "C1987_Famas_g2_aim_sd", "C1987_Famas_g2_eot_sd"};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};

class CfgWeapons {
	class M16a4;	// External class reference
	
	class C1987_Famas_f1 : M16a4 {
		displayName = "FAMAS F1";
		model = "\C1987_Famas\Famas_f1.p3d";
		picture = "\C1987_Famas\equip\famas_f1.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS F1 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_f1_aim : M16a4 {
		displayName = "FAMAS F1 AimPoint";
		model = "\C1987_Famas\Famas_f1_aim.p3d";
		picture = "\C1987_Famas\equip\famas_f1_aim.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS F1 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_f1_eot : M16a4 {
		displayName = "FAMAS F1 EoTech";
		model = "\C1987_Famas\Famas_f1_eot.p3d";
		picture = "\C1987_Famas\equip\famas_f1_eot.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS F1 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_f1_sd : M16a4 {
		displayName = "FAMAS F1 SD";
		model = "\C1987_Famas\Famas_f1_sd.p3d";
		picture = "\C1987_Famas\equip\famas_f1_sd.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS F1 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_f1_aim_sd : M16a4 {
		displayName = "FAMAS F1 AimPoint SD";
		model = "\C1987_Famas\Famas_f1_aim_sd.p3d";
		picture = "\C1987_Famas\equip\famas_f1_aim_sd.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS F1 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_f1_eot_sd : M16a4 {
		displayName = "FAMAS F1 EoTech SD";
		model = "\C1987_Famas\Famas_f1_eot_sd.p3d";
		picture = "\C1987_Famas\equip\famas_f1_eot_sd.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS F1 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_g2 : M16a4 {
		displayName = "FAMAS G2";
		model = "\C1987_Famas\Famas_g2.p3d";
		picture = "\C1987_Famas\equip\famas_g2.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_g2_aim : M16a4 {
		displayName = "FAMAS G2 AimPoint";
		model = "\C1987_Famas\Famas_g2_aim.p3d";
		picture = "\C1987_Famas\equip\famas_g2_aim.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_g2_eot : M16a4 {
		displayName = "FAMAS G2 EoTech";
		model = "\C1987_Famas\Famas_g2_eot.p3d";
		picture = "\C1987_Famas\equip\famas_g2_eot.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_g2_sd : M16a4 {
		displayName = "FAMAS G2 SD";
		model = "\C1987_Famas\Famas_g2_sd.p3d";
		picture = "\C1987_Famas\equip\famas_g2_sd.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_g2_aim_sd : M16a4 {
		displayName = "FAMAS G2 AimPoint SD";
		model = "\C1987_Famas\Famas_g2_aim_sd.p3d";
		picture = "\C1987_Famas\equip\famas_g2_aim_sd.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
	
	class C1987_Famas_g2_eot_sd : M16a4 {
		displayName = "FAMAS G2 EoTech SD";
		model = "\C1987_Famas\Famas_g2_eot_sd.p3d";
		picture = "\C1987_Famas\equip\famas_g2_eot_sd.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
		reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		modes[] = {"Single", "Fullauto"};
		
		class Single : Mode_SemiAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		
		class FullAuto : Mode_FullAuto {
			sound[] = {"\C1987_famas\sound\Famas_sd.wss", 1.0, 1, 300};
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
		};
		descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
	};
};

class cfgVehicles {
	class ReammoBox;	// External class reference
	
	class C1987WeaponBox : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "C1987 FAMAS Weapons";
		model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		
		class TransportMagazines {
			class 30Rnd_556x45_stanag {
				magazine = "30Rnd_556x45_stanag";
				count = 350;
			};
		};
		
		class TransportWeapons {
			class C1987_Famas_f1 {
				weapon = "C1987_Famas_f1";
				count = 12;
			};
			
			class C1987_Famas_f1_aim {
				weapon = "C1987_Famas_f1_aim";
				count = 12;
			};
			
			class C1987_Famas_f1_eot {
				weapon = "C1987_Famas_f1_eot";
				count = 12;
			};
			
			class C1987_Famas_f1_sd {
				weapon = "C1987_Famas_f1_sd";
				count = 12;
			};
			
			class C1987_Famas_f1_aim_sd {
				weapon = "C1987_Famas_f1_aim_sd";
				count = 12;
			};
			
			class C1987_Famas_f1_eot_sd {
				weapon = "C1987_Famas_f1_eot_sd";
				count = 12;
			};
			
			class C1987_Famas_g2 {
				weapon = "C1987_Famas_g2";
				count = 12;
			};
			
			class C1987_Famas_g2_aim {
				weapon = "C1987_Famas_g2_aim";
				count = 12;
			};
			
			class C1987_Famas_g2_eot {
				weapon = "C1987_Famas_g2_eot";
				count = 12;
			};
			
			class C1987_Famas_g2_sd {
				weapon = "C1987_Famas_g2_sd";
				count = 12;
			};
			
			class C1987_Famas_g2_aim_sd {
				weapon = "C1987_Famas_g2_aim_sd";
				count = 12;
			};
			
			class C1987_Famas_g2_eot_sd {
				weapon = "C1987_Famas_g2_eot_sd";
				count = 12;
			};
		};
	};
};
