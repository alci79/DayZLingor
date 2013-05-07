class Mode_SemiAuto {};
class Mode_Burst : Mode_SemiAuto {};
class Mode_FullAuto : Mode_SemiAuto {};

class CfgPatches {
	class C1987_P99 {
		Units[] = {};
		weapons[] = {"C1987_P99_black", "C1987_P99_black_laser", "C1987_P99_black_sd", "C1987_P99_black_laser_sd", "C1987_P99_green", "C1987_P99_green_laser", "C1987_P99_green_sd", "C1987_P99_green_laser_sd", "C1987_P99_silver", "C1987_P99_silver_laser", "C1987_P99_silver_sd", "C1987_P99_silver_laser_sd"};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};

class CfgAmmo {
	class Default;	// External class reference
	class BulletBase;	// External class reference
	
	class C1987_B_9x19_Ball : BulletBase {
		cartridge = "FxCartridge_Small";
		cost = 5;
		typicalSpeed = 344;
		airFriction = -0.0017;
		hit = 7.5;
	};
	
	class C1987_B_9x19_sd : BulletBase {
		cartridge = "FxCartridge_Small";
		visibleFire = 0.035;
		audibleFire = 0.035;
		visibleFireTime = 2;
		cost = 1;
		typicalSpeed = 265;
		airFriction = -0.000955;
		hit = 7.5;
	};
};

class CfgMagazines {
	class Default;	// External class reference
	class CA_Magazine;	// External class reference
	
	class 15Rnd_9x19_p99 : CA_Magazine {
		scope = 2;
		displayName = "15Rnd. P99 Mag";
		picture = "\C1987_P99\equip\mag.paa";
		model = "\C1987_P99\mag.p3d";
		type = 16;
		ammo = "C1987_B_9x19_Ball";
		count = 15;
		initSpeed = 408;
		descriptionShort = "15Rnd. 9x19 9mm. Magazine for the Walther P99 Series";
	};
	
	class 10Rnd_9x19_p99 : CA_Magazine {
		scope = 2;
		displayName = "10Rnd. P99 Mag";
		picture = "\C1987_P99\equip\mag.paa";
		model = "\C1987_P99\mag.p3d";
		type = 16;
		ammo = "C1987_B_9x19_Ball";
		count = 10;
		initSpeed = 408;
		descriptionShort = "10Rnd. 9x19 9mm. Magazine for the Walther P99 Series";
	};
	
	class 15Rnd_9x19_p99_sd : CA_Magazine {
		scope = 2;
		displayName = "15Rnd. P99 Mag SD";
		picture = "\C1987_P99\equip\mag_sd.paa";
		model = "\C1987_P99\mag.p3d";
		type = 16;
		ammo = "C1987_B_9x19_sd";
		count = 15;
		initSpeed = 408;
		descriptionShort = "15Rnd. 9x19 9mm. SD Magazine for the Walther P99 Series";
	};
	
	class 10Rnd_9x19_p99_sd : CA_Magazine {
		scope = 2;
		displayName = "10Rnd. P99 Mag SD";
		picture = "\C1987_P99\equip\mag_sd.paa";
		model = "\C1987_P99\mag.p3d";
		type = 16;
		ammo = "C1987_B_9x19_sd";
		count = 10;
		initSpeed = 408;
		descriptionShort = "10Rnd. 9x19 9mm. SD Magazine for the Walther P99 Series";
	};
};

class CfgWeapons {
	class M9;	// External class reference
	
	class C1987_P99_black : M9 {
		displayName = "P99 (Black)";
		model = "\C1987_P99\P99_black.p3d";
		picture = "\C1987_P99\equip\p99_black.paa";
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99", "10Rnd_9x19_p99"};
		descriptionShort = "Walther P99 (Black)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_black_laser : M9 {
		displayName = "P99 Laser (Black)";
		model = "\C1987_P99\P99_black_laser.p3d";
		picture = "\C1987_P99\equip\p99_black_laser.paa";
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99", "10Rnd_9x19_p99"};
		descriptionShort = "Walther P99 Laser (Black)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_black_sd : M9 {
		displayName = "P99 SD (Black)";
		model = "\C1987_P99\P99_black_sd.p3d";
		picture = "\C1987_P99\equip\p99_black_sd.paa";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99_sd.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99_sd", "10Rnd_9x19_p99_sd"};
		descriptionShort = "Walther P99 SD (Black)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_black_laser_sd : M9 {
		displayName = "P99 Laser SD (Black)";
		model = "\C1987_P99\P99_black_laser_sd.p3d";
		picture = "\C1987_P99\equip\p99_black_laser_sd.paa";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99_sd.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99_sd", "10Rnd_9x19_p99_sd"};
		descriptionShort = "Walther P99 Laser SD (Black)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_green : M9 {
		displayName = "P99 (Green)";
		model = "\C1987_P99\P99_green.p3d";
		picture = "\C1987_P99\equip\p99_green.paa";
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99", "10Rnd_9x19_p99"};
		descriptionShort = "Walther P99 (Green)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_green_laser : M9 {
		displayName = "P99 Laser (Green)";
		model = "\C1987_P99\P99_green_laser.p3d";
		picture = "\C1987_P99\equip\p99_green_laser.paa";
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99", "10Rnd_9x19_p99"};
		descriptionShort = "Walther P99 Laser (Green)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_green_sd : M9 {
		displayName = "P99 SD (Green)";
		model = "\C1987_P99\P99_green_sd.p3d";
		picture = "\C1987_P99\equip\p99_green_sd.paa";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99_sd.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99_sd", "10Rnd_9x19_p99_sd"};
		descriptionShort = "Walther P99 SD (Green)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_green_laser_sd : M9 {
		displayName = "P99 Laser SD (Green)";
		model = "\C1987_P99\P99_green_laser_sd.p3d";
		picture = "\C1987_P99\equip\p99_green_laser_sd.paa";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99_sd.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99_sd", "10Rnd_9x19_p99_sd"};
		descriptionShort = "Walther P99 Laser SD (Green)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_silver : M9 {
		displayName = "P99 (Silver)";
		model = "\C1987_P99\P99_silver.p3d";
		picture = "\C1987_P99\equip\p99_silver.paa";
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99", "10Rnd_9x19_p99"};
		descriptionShort = "Walther P99 (Silver)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_silver_laser : M9 {
		displayName = "P99 Laser (Silver)";
		model = "\C1987_P99\P99_silver_laser.p3d";
		picture = "\C1987_P99\equip\p99_silver_laser.paa";
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99", "10Rnd_9x19_p99"};
		descriptionShort = "Walther P99 Laser (Silver)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_silver_sd : M9 {
		displayName = "P99 SD (Silver)";
		model = "\C1987_P99\P99_silver_sd.p3d";
		picture = "\C1987_P99\equip\p99_silver_sd.paa";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99_sd.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99_sd", "10Rnd_9x19_p99_sd"};
		descriptionShort = "Walther P99 SD (Silver)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
	
	class C1987_P99_silver_laser_sd : M9 {
		displayName = "P99 Laser SD (Silver)";
		model = "\C1987_P99\P99_silver_laser_sd.p3d";
		picture = "\C1987_P99\equip\p99_silver_laser_sd.paa";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		soundBegin[] = {"begin1", 1};
		begin1[] = {"\C1987_P99\sound\p99_sd.wss", 1.0, 1};
		reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss", 0.1, 1, 20};
		magazines[] = {"15Rnd_9x19_p99_sd", "10Rnd_9x19_p99_sd"};
		descriptionShort = "Walther P99 Laser SD (Silver)";
		
		class Library {
			libTextDesc = "The Walther P99 is a semi-automatic pistol developed by the German Company Carl Walther GmbH Sportwaffen of Ulm for law enforcement, security forces and the civilian shooting market as a replacement for the Walther P5 and the P88. The P99 and its variants are also made under license by Fabryka Broni Radom.";
		};
	};
};

class cfgVehicles {
	class ReammoBox;	// External class reference
	
	class C1987WeaponBox : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "C1987 P99 Weapons";
		model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		
		class TransportMagazines {
			class 15Rnd_9x19_p99 {
				magazine = "15Rnd_9x19_p99";
				count = 250;
			};
			
			class 10Rnd_9x19_p99 {
				magazine = "10Rnd_9x19_p99";
				count = 250;
			};
			
			class 15Rnd_9x19_p99_sd {
				magazine = "15Rnd_9x19_p99_sd";
				count = 250;
			};
			
			class 10Rnd_9x19_p99_sd {
				magazine = "10Rnd_9x19_p99_sd";
				count = 250;
			};
		};
		
		class TransportWeapons {
			class C1987_P99_black {
				weapon = "C1987_P99_black";
				count = 12;
			};
			
			class C1987_P99_black_laser {
				weapon = "C1987_P99_black_laser";
				count = 12;
			};
			
			class C1987_P99_black_sd {
				weapon = "C1987_P99_black_sd";
				count = 12;
			};
			
			class C1987_P99_black_laser_sd {
				weapon = "C1987_P99_black_laser_sd";
				count = 12;
			};
			
			class C1987_P99_green {
				weapon = "C1987_P99_green";
				count = 12;
			};
			
			class C1987_P99_green_laser {
				weapon = "C1987_P99_green_laser";
				count = 12;
			};
			
			class C1987_P99_green_sd {
				weapon = "C1987_P99_green_sd";
				count = 12;
			};
			
			class C1987_P99_green_laser_sd {
				weapon = "C1987_P99_green_laser_sd";
				count = 12;
			};
			
			class C1987_P99_silver {
				weapon = "C1987_P99_silver";
				count = 12;
			};
			
			class C1987_P99_silver_laser {
				weapon = "C1987_P99_silver_laser";
				count = 12;
			};
			
			class C1987_P99_silver_sd {
				weapon = "C1987_P99_silver_sd";
				count = 12;
			};
			
			class C1987_P99_silver_laser_sd {
				weapon = "C1987_P99_silver_laser_sd";
				count = 12;
			};
		};
	};
};
