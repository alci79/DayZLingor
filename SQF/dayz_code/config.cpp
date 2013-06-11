#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define EAST 0 // (Russian)

#include "Configs\basicDefines.hpp"

//#include "Configs\CfgWorlds.hpp"
#include "Configs\rscTitles.hpp"
#include "Configs\CfgMoves.hpp"
#include "Configs\CfgVehicles.hpp"
#include "Configs\CfgWeapons.hpp"
#include "Configs\CfgMagazines.hpp"
#include "Configs\CfgLoot\CfgBuildingLoot.hpp"
#include "Configs\CfgMarkers.hpp"
#include "Configs\CfgAmmo.hpp"
#include "Configs\CfgObjectCompositions.hpp"
#include "Configs\CfgTownGenerator\CfgTownGeneratorLingor.hpp"

class CfgPatches {
	class dayz_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_equip","dayz_weapons","CAMisc3","CABuildingParts","CABuildingParts_Signs","CAStructuresHouse","CAStructuresLand_Ind_Stack_Big","CAStructures_Misc_Powerlines","CAStructures","CABuildings","CABuildings2","Ind_MalyKomin","CAStructures_A_CraneCon","CAStructures_Mil","CAStructures_Nav","CAStructures_Rail","A_Crane_02","A_TVTower","CAStructures_Railway","CAStructuresHouse","CAStructuresHouse_HouseBT"};
	};
	class DZ_DebriefingRemoved	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAUI"};
	};
};

class CfgMods
{
	class DayZ
	{
		dir = "DayZLingor";
		name = "DayZLingor";
		picture = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "http://www.Skaronator.com";
		version = "2.3";
		hiveVersion = 0.96;
	};
	class DZ_InitWorld
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Lingor"};
	};
};

class CfgMissions
{
	 class Cutscenes
	 {
	  class LingorIntro1
		  {
			directory = "z\addons\dayz_code\Configs\CfgWorlds\intro.lingor";
		  };
	 };
};

class CfgWorlds
{
        initWorld = "Lingor";
        demoWorld = "Lingor";
};

class CfgAddons
{
	access = 1;
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class dayz
		{
			list[] = {"GNT_C185","dayz_code","dayz","dayz_equip","dayz_weapons","dayz_sfx","ibr_as350lingor","JetSkiYanahuiAddon","KPFS_MG1","KPFS_Panzerfaust","KPFS_MP2","KPFS_RPD","KPFS_SKS","KPFS_STG"};
		};
	};
};

class CfgActions {
	class None; // External class reference

	class Rearm : None {
		show = 0;
	};
	
	class TakeBag : None {
		show = 0;
	};
	
};

class CfgAISkill {
	aimingaccuracy[] = {0, 0, 1, 1};
	aimingshake[] = {0, 0, 1, 1};
	aimingspeed[] = {0, 0, 1, 1};
	commanding[] = {0, 0, 1, 1};
	courage[] = {0, 1, 1, 1};
	endurance[] = {0, 0, 1, 1};
	general[] = {0, 0, 1, 1};
	reloadspeed[] = {0, 0, 1, 1};
	spotdistance[] = {0, 0, 1, 0.6};
	spottime[] = {0, 0, 1, 1};
};

class CfgInGameUI
{
    class PeripheralVision
    {
        cueColor[] = {0,0,0,0};
        cueFriendlyColor[] = {0,0,0,0};
        cueEnemyColor[] = {0,0,0,0};
    };
};

class CfgVoice {
	class NoVoice {
		protocol = "RadioProtocolBase";
		variants[] = {1};
		directories[] = {"", ""};
		identityTypes[] = {"Default", "Zombie1", "Zombie2", "Zombie3"};
	};
};

class CfgIdentities {
	class Zombie1 {
		name = "Zombie";
		face = "Zombie1";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	
	class Zombie2 {
		name = "Zombie";
		face = "Zombie2";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	
	class Zombie3 {
		name = "Zombie";
		face = "Zombie3";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
};

class CfgFaces {
	class Default;	// External class reference
	
	class Man : Default {
		class Default;	// External class reference
		class Zombie1 : Default {
			name = "Zombie 1";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"Zombie1"};
			disabled = 0;
		};
		
		class Zombie2 : Default {
			name = "Zombie 2";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"Zombie2"};
			disabled = 0;
		};
		
		class Zombie3 : Default {
			name = "Zombie 3";
			texture = "z\addons\dayz_communityassets\faces\zombie_03_co.paa";
			material = "z\addons\dayz_communityassets\faces\zombie_03.rvmat";
			identityTypes[] = {"Zombie3"};
			disabled = 0;
		};
	};
};

class CfgSurvival {
	class Inventory {
		class Default {
			RandomMagazines = 3;
			//weapons[] = {"Makarov"}; //8Rnd_9x18_Makarov
			GuaranteedMagazines[] = {"ItemBandage","HandRoadFlare"};
			RandomPossibilitieMagazines[] = {"ItemBandage","ItemPainkiller"};
			//weapons[] = {"HandRoadFlare"};
			backpackWeapon = "";
			//backpack = "DZ_Patrol_Pack_EP1";
		};
	};
	class Meat {
		class Default {
			yield = 2;
			rawfoodtype = "FoodmeatRaw";
		};
		class Cow: Default {
			yield = 6;
			rawfoodtype = "FoodbeefRaw";
		};
		class Cow01: Cow {};
		class Cow02: Cow {};
		class Cow03: Cow {};
		class Cow04: Cow {};
		class Goat: Default {
			yield = 4;
			rawfoodtype = "FoodgoatRaw";
		};
		class Sheep: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class WildBoar: Default {
			yield = 4;
			rawfoodtype = "FoodbaconRaw";
		};
		class Hen: Default {
			yield = 2;
			rawfoodtype = "FoodchickenRaw";
		};
		class Rabbit: Default {
			yield = 2;
			rawfoodtype = "FoodrabbitRaw";
		};
	};
};