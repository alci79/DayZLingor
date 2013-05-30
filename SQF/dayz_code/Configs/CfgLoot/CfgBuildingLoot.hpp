#include "CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			"SMAW",
			"Javelin",
			"G36C",
			"Stinger"
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"ItemSodaMdew","magazine"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"Makarov","weapon"},
			{"Colt1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
			
			{"DZ_Assault_Pack_EP1","object"}, // 12
			{"DZ_Czech_Vest_Puch","object"}, // 12-0
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemTent","object"},
			{"","military"},
			{"","trash"},
			{"Crossbow_DZ","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"WeaponHolder_ItemCrowbar","object"},
			{"MR43","weapon"}
		};
		itemChance[] =	{
			0.01,
			0.15,
			0.05,
			0.03,
			0.13,
			0.05,
			0.03,
			0.08,
			0.06,
			2,
			0.06,
			0.04,
			0.05, //12
			0.04, // 12-0

			0.02, //16
			0.02, //16
			0.01, //18
			0.01,
			0.01,
			0.03,
			0.5,
			0.01,
			0.06,
			0.06,
			0.01,
			0.01,
			0.08,
			0.03
		};		
	};
	class Office: Residential {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","generic"},
			{"","trash"},
			{"","military"},
			{"WeaponHolder_PartGeneric","object"},
			{"WeaponHolder_PartWheel","object"},
			{"WeaponHolder_PartFueltank","object"},
			{"WeaponHolder_PartEngine","object"},
			{"WeaponHolder_PartGlass","object"},
			{"WeaponHolder_PartVRotor","object"},
			{"WeaponHolder_ItemJerrycan","object"},
			{"WeaponHolder_ItemHatchet","object"},
			{"ItemKnife","military"},
			{"ItemToolbox","weapon"},
			{"ItemWire","magazine"},
			{"ItemTankTrap","magazine"}
		};
		itemChance[] =	{
			0.18,
			0.15,
			0.04,
			0.04,
			0.05,
			0.02,
			0.02,
			0.04,
			0.01,
			0.04,
			0.11,
			0.07,
			0.06,
			0.01,
			0.04
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"WeaponHolder_ItemJerrycan","object"},
			{"","generic"},
			{"huntingrifle","weapon"},
			{"LeeEnfield","weapon"},
			{"Winchester1866","weapon"},
			{"","trash"},
			{"Crossbow_DZ","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_ItemHatchet","object"},
			{"MR43","weapon"},
			{"WeaponHolder_ItemMachete","magazine"}
		};
		itemChance[] =	{
			0.06,
			0.28,
			0.01,
			0.04,
			0.03,
			0.22,
			0.03,
			0.11,
			0.17,
			0.06,
			0.03
		};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"Makarov","weapon"},
			{"Colt1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
					
			{"DZ_Assault_Pack_EP1","object"}, // 12
			{"DZ_Czech_Vest_Puch","object"}, // 12-0
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemTent","object"},
			{"","food"},
			{"","trash"},
			{"Crossbow_DZ","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"MR43","weapon"}
		};
		itemChance[] =	{
			0.15,
			0.01,
			0.05,
			0.02,
			0.02,
			0.05,
			0.02,
			0.05,
			0.05,
			0.01,
			0.01,
			0.05, //12
			0.04, // 12-0

			0.02, //16
			0.02, //16
			0.01, //18
			0.01,
			0.01,
			0.3,
			0.15,
			0.01,
			0.05,
			0.02,
			0.01
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"FN_FAL","weapon"},
			{"bizon_silenced","weapon"},
			{"M14_EP1","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			//{"M107_DZ","weapon"},
			//{"BAF_AS50_scoped","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M249_DZ","weapon"},
			{"BAF_L85A2_RIS_SUSAT","weapon"},
			{"DMR","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"G36C","weapon"},
			{"G36C_camo","weapon"},
			//{"G36_C_SD_camo","weapon"},
			{"G36A_camo","weapon"},
			{"G36K_camo","weapon"},
			{"100Rnd_762x54_PK","magazine"}
		};
		itemChance[] =	{
			0.02,		//{"FN_FAL","weapon"},
			0.05,		//{"bizon_silenced","weapon"},
			0.05,		//{"M14_EP1","weapon"},
			0.02,		//{"FN_FAL_ANPVS4","weapon"},
			//0.02,		//{"m107","weapon"},
			//0.01,		//{"BAF_AS50_scoped","weapon"},
			0.03,		//{"Mk_48_DZ","weapon"},
			0.05,		//{"M249_DZ","weapon"},
			0.01,		//BAF_L85A2_RIS_SUSAT
			0.06,		//{"DMR","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.08,	//Skin_Camo1_DZ
			0.05,	//Skin_Sniper1_DZ
			0.03,	//G36C"
			0.02,	//G36C_camo
			//0.01,	//G36_C_SD_camo
			0.02,	//G36A_camo
			0.02,	//G36K_camo
			0.01	//("100Rnd_762x54_PK","magazine"}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","hospital"},
			{"MedBox0","object"}
		};
		itemChance[] =	{
			0.5,
			0.5,
			0.1
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"M9","weapon"},
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M9SD","weapon"},
			{"AK_74","weapon"},
			{"M4A1_Aim","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AK_47_M","weapon"},
			{"M24","weapon"},
			{"M1014","weapon"},
			{"DMR","weapon"},
			{"M4A1","weapon"},
			{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"MP5A5","weapon"},
			{"MP5SD","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 24
			
			//Normal
			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"Body","object"},
			{"ItemEtool","weapon"},
			{"ItemSandbag","magazine"},
			{"Sa58P_EP1","weapon"},
			{"Sa58V_EP1","weapon"},
			{"RPK_74","weapon"},
			{"MakarovSD","weapon"},
			{"BAF_L85A2_RIS_Holo","weapon"}
		};
		itemChance[] =	{
			0.05,
			0.05,
			0.01,
			0.02,
			0.15,
			0.01,
			0.08,
			0.05,
			0.05,
			0.01,
			0.10,
			0.01,
			0.02,
			0.01,
			0.05,
			0.08,
			0.10,
			0.04,
			0.02,
			0.01,
			0.06,
			0.10,
			0.10,
			0.01,
			0.05,
			//Bags
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //DZ_Backpack_EP1 24
			0.10, 
			1.00,
			2.50,
			//0.20,
			0.05,
			0.02,
			0.03,
			0.03,
			0.04, //RPK_74
			0.02, //MakarovSD
			0.01
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M249_DZ","weapon"},
			{"M9SD","weapon"},
			//{"M136","weapon"},
			{"AK_74","weapon"},
			{"M4A1_Aim","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AK_47_M","weapon"},
			{"M24","weapon"},
			{"SVD_CAMO","weapon"},
			{"M1014","weapon"},
			{"M107_DZ","weapon"},
			{"DMR","weapon"},
			{"M4A1","weapon"},
			{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"M240_DZ","weapon"},
			{"M4A1_AIM_SD_camo","weapon"},
			{"M16A4_ACG","weapon"},
			{"M4A1_HWS_GL_camo","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			//Ammo
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},

			//{"NVGoggles","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			{"Binocular_Vector","military"},

			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 24		

			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"Body","object"},
			{"PipeBomb","magazine"},
			{"Sa58V_RCO_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			//{"G36_C_SD_camo","weapon"},
			{"M40A3","weapon"},
			{"100Rnd_762x54_PK","magazine"},
			{"MG36","weapon"},
			{"MakarovSD","weapon"}
		};
		itemChance[] =	{
			0.10,
			0.05,
			0.01,
			0.02,
			//0.01, //m136
			0.10,
			0.02,
			0.10,
			0.10,
			0.10,
			0.01,
			0.01,
			0.20,
			0.01,
			0.02,
			0.10,
			0.03,
			0.20,
			0.10,
			0.20,
			0.01,
			0.04,
			0.05,
			0.02,
			0.01,
			0.08,
			0.04,
			0.02,
			//0.01, //NVGoggles
			0.10,
			0.05,
			0.15,
			0.01, //ItemGPS
			0.03,
			0.01,
			//Bags
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //DZ_Backpack_EP1 24
			0.30,
			1.00,
			5.00, //military
			//0.20,
			0.01, //PipeBomb
			0.01, //Sa58V_RCO_EP1
			0.01, //Sa58V_CCO_EP1
			//0.01, //{"G36_C_SD_camo","weapon"},
			0.02, // M40A3
			0.01,	//("100Rnd_762x54_PK","magazine"}
			0.05, //MG36
			0.02 //MakarovSD
		};
	};
	class Hunting: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"ItemMap","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"Crossbow_DZ","weapon"},
			{"","military"},
			{"WeaponHolder_ItemMachete", "object"},
			{"huntingrifle","weapon"},
			{"","hunter"}
		};
		itemChance[] =	{
			0.08,
			0.05,
			0.04,
			0.06,
			0.03,
			2.00,
			0.03,
			0.04,
			3.00
		};
	};
#include "CfgBuildingPos.hpp"
#include "CfgBuildingPosLingor.hpp"
};