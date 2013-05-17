class CfgPatches {
	class KPFS_DM {
		units[] = {};
		weapons[] = {"ThrowDM"};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons", "CAWeapons_E"};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgAmmo {
	class GrenadeHand;	// External class reference
	
	class DM62CompB : GrenadeHand {
		model = "\kpfs_weapons\dm\dm41.p3d";
		deflecting = 90;
		explosionTime = 4;
	};
	class Mine;	// External class reference
	
	class DM11 : Mine {
		hit = 1200;
		indirectHit = 1100;
		indirectHitRange = 2;
		model = "\kpfs_weapons\dm\dm11.p3d";
		defaultMagazine = "Mine";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08", 56.2341, 1, 1500};
		explosionEffects = "ATRocketExplosion";
		CraterEffects = "HERocketCrater";
		whistleDist = 4;
	};
};

class CfgMagazines {
	class HandGrenade;	// External class reference
	
	class HandGrenade_dm41 : HandGrenade {
		displayName = $STR_KPFS_DM41_HANDGRENADE;
		model = "\kpfs_weapons\dm\dm41_box.p3d";
		picture = "\kpfs_weapons\data\icons\m_dm41_CA.paa";
		ammo = "DM62CompB";
		descriptionShort = "$STR_DSS_HandGrenade_West";
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
	class TimeBomb;	// External class reference
	
	class Mine_DM11 : TimeBomb {
		scope = 2;
		displayName = $STR_KPFS_MINE_DM11;
		picture = "\kpfs_weapons\data\icons\m_dm11_ca.paa";
		ammo = DM11;
		nameSoundWeapon = "mine";
		nameSound = "mine";
		descriptionShort = $STR_DSS_MINE;
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};
class ThrowMuzzle;	// External class reference
class MineMuzzle;	// External class reference

class CfgWeapons {
	class Throw;	// External class reference
	
	class ThrowDM : Throw {
		muzzles[] = {"HandGrenade_dm41", "HandGrenade_Stone", "HandGrenadeMuzzle", "SmokeShellMuzzle"};
		
		class HandGrenade_dm41 : ThrowMuzzle {
			magazines[] = {"HandGrenade_dm41"};
		};
	};
	class Put;	// External class reference
	
	class PutDM : Put {
		muzzles[] = {"MineDMMuzzle"};
		
		class MineDMMuzzle : MineMuzzle {
			displayName = $STR_KPFS_MINE_DM11;
			magazines[] = {"Mine_DM11"};
		};
	};
};

class CfgVehicles {
	class MineGeneric;	// External class reference
	
	class MineMineDM11 : MineGeneric {
		scope = 2;
		displayName = $STR_KPFS_MINE_DM11;
		ammo = DM11;
	};
	class ReammoBox;	// External class reference
	
	class DM41Box : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = $STR_KPFS_DM41BOX;
		model = "\ca\weapons\AmmoBoxes\USBasicAmmo.p3d";
		
		class TransportMagazines {
			class _xx_HandGrenade_dm41 {
				magazine = "HandGrenade_dm41";
				count = 100;
			};
		};
		
		class TransportWeapons {
			class _xx_ThrowDM {
				weapon = "ThrowDM";
				count = 1;
			};
		};
	};
	
	class DM11Box : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = $STR_KPFS_DM11BOX;
		model = "\ca\weapons\AmmoBoxes\USBasicAmmo.p3d";
		
		class TransportMagazines {
			class _xx_Mine_DM11 {
				magazine = "Mine_DM11";
				count = 5;
			};
		};
		
		class TransportWeapons {
			class _xx_PutDM {
				weapon = "PutDM";
				count = 1;
			};
		};
	};
};
