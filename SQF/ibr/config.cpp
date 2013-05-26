#define _ARMA_

class CfgPatches
{
 class ibr_plants
 {
  units[] = {"Aljazev_stolp","Land_benzina_schnell","Land_fuelstation","Land_fuelstation_army","land_garaz","land_jezekbeton","land_cihlovej_dum_mini","land_strazni_vez","land_ryb_domek","land_heli_h_civil","land_camo_box","land_hut01","land_hut02","land_hut03","land_hut04","bouda_garaz"};
  weapons[] = {};
  requiredVersion = 0.1;
  requiredAddons[] = {"CAData","CABuildings","CAMisc3"};
 };
};
class CfgVehicleClasses
{
 class SBP_Objects
 {
  displayName = "Slovenia";
 };
};
class CfgVehicles
{
 class Thing;
 class HouseBase;
 class House: HouseBase
 {
  class DestructionEffects;
 };
 class Strategic;
 class Ruins;

 class Land_benzina_schnell: Strategic
 {
  model = "\ibr\ibr_plants\benzina_schnell";
  transportFuel = 5;
  nameSound = "fuelstation";
  class DestructionEffects
  {
   class FuelStationExp
   {
    simulation = "particles";
    type = "FuelStationExp";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class FuelStationSmk1
   {
    simulation = "particles";
    type = "FuelStationSmk1";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class Light1
   {
    simulation = "light";
    type = "ObjectDestructionLight";
    position = "DestructionFire";
    intensity = 0.001;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelFire1
   {
    simulation = "particles";
    type = "FuelFire1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 1;
   };
   class FuelSmoke1
   {
    simulation = "particles";
    type = "FuelSmoke1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 5;
   };
   class FuelSmoke2
   {
    simulation = "particles";
    type = "FuelSmoke2";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 5;
   };
   class FuelDestr
   {
    simulation = "destroy";
    type = "FuelStationDestr";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 3;
   };
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\benzina_schnell_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };

 class Land_fuelstation: Strategic
 {
  model = "\ibr\ibr_plants\fuelstation";
  transportFuel = 5;
  nameSound = "fuelstation";
  class DestructionEffects
  {
   class FuelStationExp
   {
    simulation = "particles";
    type = "FuelStationExp";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class FuelStationSmk1
   {
    simulation = "particles";
    type = "FuelStationSmk1";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class Light1
   {
    simulation = "light";
    type = "ObjectDestructionLight";
    position = "DestructionFire";
    intensity = 0.001;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelFire1
   {
    simulation = "particles";
    type = "FuelFire1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 1;
   };
   class FuelSmoke1
   {
    simulation = "particles";
    type = "FuelSmoke1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 10;
   };
   class FuelSmoke2
   {
    simulation = "particles";
    type = "FuelSmoke2";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 10;
   };
   class FuelDestr
   {
    simulation = "destroy";
    type = "FuelStationDestr";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 3;
   };
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\benzina_schnell_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };

 class Land_fuelstation_army: Strategic
 {
  model = "\ibr\ibr_plants\fuelstation_army";
  transportFuel = 5;
  nameSound = "fuelstation";
  class DestructionEffects
  {
   class FuelStationExp
   {
    simulation = "particles";
    type = "FuelStationExp";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class FuelStationSmk1
   {
    simulation = "particles";
    type = "FuelStationSmk1";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class Light1
   {
    simulation = "light";
    type = "ObjectDestructionLight";
    position = "DestructionFire";
    intensity = 0.001;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelFire1
   {
    simulation = "particles";
    type = "FuelFire1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 1;
   };
   class FuelSmoke1
   {
    simulation = "particles";
    type = "FuelSmoke1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 10;
   };
   class FuelSmoke2
   {
    simulation = "particles";
    type = "FuelSmoke2";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 10;
   };
   class FuelDestr
   {
    simulation = "destroy";
    type = "FuelStationDestr";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 3;
   };
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\benzina_schnell_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };

	class land_garaz: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\garaz.p3d";
		destrType="DestructBuilding";
		armor = 200;
	};

	class land_jezekbeton: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\jezekbeton.p3d";
		destrType="DestructBuilding";
		armor = 400;
	};

	class land_posed: House 
	{
		scope = 1;
		model = "\ca\buildings\posed.p3d";
		destrType="DestructBuilding";
		armor = 100;
	};

	class land_cihlovej_dum_mini: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\cihlovej_dum_mini.p3d";
		destrType="DestructBuilding";
		armor = 200;
	};

	class land_ryb_domek: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\ryb_domek.p3d";
		destrType="DestructBuilding";
		armor = 200;
	};

	class land_strazni_vez: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\strazni_vez.p3d";
		destrType="DestructBuilding";
		armor = 100;
	};

	class land_heli_h_civil: House 
	{
		scope = 1;
		model = "ca\misc\heli_h_civil.p3d";
		destrType="DestructNo";
	};

	class land_camo_box: House 
	{
		scope = 1;
		model = "ca\buildings\tents\camo_box.p3d";
		destrType="DestructBuilding";
		armor = 50;
	};

	class land_bouda_garaz: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\bouda_garaz.p3d";
		destrType="DestructBuilding";
		armor = 100;
	};

 class Land_hut01_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ibr\ibr_plants\ruins\hut01_ruins";
  displayName = "hut01_ruins";
 };
 class Land_hut02_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ibr\ibr_plants\ruins\hut02_ruins";
  displayName = "hut02_ruins";
 };
 class Land_hut03_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ibr\ibr_plants\ruins\hut03_ruins";
  displayName = "hut03_ruins";
 };
 class Land_hut04_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ibr\ibr_plants\ruins\hut04_ruins";
  displayName = "hut04_ruins";
 };

	class land_hut01: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\hut01.p3d";
		armor = 200;
		destrType="DestructBuilding";
	  class DestructionEffects: DestructionEffects
		  {
		   class Ruin1
			   {
			    simulation = "ruin";
			    type = "\ibr\ibr_plants\ruins\hut01_ruins.p3d";
			    position = "";
			    intensity = 1;
			    interval = 1;
			    lifeTime = 1;
			   };
		  };
	};
	class land_hut02: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\hut02.p3d";
		destrType="DestructBuilding";
		armor = 200;
	  class DestructionEffects: DestructionEffects
		  {
		   class Ruin1
			   {
			    simulation = "ruin";
			    type = "\ibr\ibr_plants\ruins\hut02_ruins.p3d";
			    position = "";
			    intensity = 1;
			    interval = 1;
			    lifeTime = 1;
			   };
		  };
	};
	class land_hut03: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\hut03.p3d";
		destrType="DestructBuilding";
		armor = 200;
	  class DestructionEffects: DestructionEffects
		  {
		   class Ruin1
			   {
			    simulation = "ruin";
			    type = "\ibr\ibr_plants\ruins\hut03_ruins.p3d";
			    position = "";
			    intensity = 1;
			    interval = 1;
			    lifeTime = 1;
			   };
		  };
	};

	class land_hut04: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\hut04.p3d";
		destrType="DestructBuilding";
		armor = 200;
	  class DestructionEffects: DestructionEffects
		  {
		   class Ruin1
			   {
			    simulation = "ruin";
			    type = "\ibr\ibr_plants\ruins\hut04_ruins.p3d";
			    position = "";
			    intensity = 1;
			    interval = 1;
			    lifeTime = 1;
			   };
		  };
	};

 class Land_army_hut_storrage_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ibr\ibr_plants\ruins\army_hut_storrage_ruins";
  displayName = "army_hut_storrage_ruins";
 };

 class Land_army_hut_storrage: House
 {
  scope = 1;
  armor = 500;
  model = "\ibr\ibr_plants\army_hut_storrage.p3d";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\ibr\ibr_plants\ruins\army_hut_storrage_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };

 class Land_tovarna1: House
 {
  scope = 1;
  model = "\ibr\ibr_plants\tovarna1";
  ladders[] = {
   {"start","end" }};
  destrType = "DestructNo";
 };

 class Land_garaz_bez_tanku: House
 {
  scope = 1;
  model = "\ibr\ibr_plants\garaz_bez_tanku";
  ladders[] = {
   { "start","end"},
   { "start1","end1"},
   { "start2","end2"}};
  destrType = "DestructNo";
 };

 class Land_army_hut3_long_int_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ibr\ibr_plants\ruins\army_hut3_long_int_ruins";
  displayName = "army_hut3_long_int_ruins";
 };

 class Land_army_hut3_long_int: House
 {
  scope = 1;
  armor = 500;
  model = "\ibr\ibr_plants\army_hut3_long_int.p3d";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\ibr\ibr_plants\ruins\army_hut3_long_int_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };

	class ClutterCutter: Thing
	{
		model="\ibr\ibr_plants\ClutterCutter.p3d";
		displayName="Grass Cutter";
		vehicleClass="Misc";
		icon="\ca\data\data\Unknown_object.paa";
		scope=2;
		simulation="thing";
		nameSound="";
		transportFuel=0;
		mapSize=0.700000;
		accuracy=0.200000;
		cost=0;
		armor=200000;
	};

 class Land_kostelik: House
 {
  scope = 1;
  model = "\ibr\ibr_plants\kostelik.p3d";
  destrType = "DestructNo";
  };

 class Land_army_hut_int_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ibr\ibr_plants\ruins\army_hut_int_ruins";
  displayName = "army_hut_int_ruins";
 };

	class land_army_hut_int: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\army_hut_int.p3d";
		destrType="DestructBuilding";
		armor = 500;
	  class DestructionEffects: DestructionEffects
		  {
		   class Ruin1
			   {
			    simulation = "ruin";
			    type = "\ibr\ibr_plants\ruins\army_hut_int_ruins.p3d";
			    position = "";
			    intensity = 1;
			    interval = 1;
			    lifeTime = 1;
			   };
		  };
	};

	class land_army_hut2_int: House 
	{
		scope = 1;
		model = "\ibr\ibr_plants\army_hut2_int.p3d";
		destrType="DestructBuilding";
		armor = 500;
	  class DestructionEffects: DestructionEffects
		  {
		   class Ruin1
			   {
			    simulation = "ruin";
			    type = "\ibr\ibr_plants\ruins\army_hut_int_ruins.p3d";
			    position = "";
			    intensity = 1;
			    interval = 1;
			    lifeTime = 1;
			   };
		  };
	};

 class Aljazev_stolp: House
 {
  scope = 2;
  skeletonName = "Aljazev_stolp";
  model = "\ibr\ibr_plants\Aljazev_stolp";
  mapSize = 2;
  displayName = "Aljazev stolp";
  vehicleClass = "SBP_Objects";
  nameSound = "Building";
  accuracy = 0.2;
  animated = 0;
  class AnimationSources
  {
   class OpenDoorD
   {
    animPeriod = 2;
   };
   class OpenDoorL
   {
    animPeriod = 2;
   };
  };
  ladders[] = {};
  destrType = "DestructNo";
  cost = 0;
  armor = 10;
  class UserActions
  {
   class OpenDoors
   {
    displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
    displayName = "$STR_DN_OUT_O_DOOR";
    position = "poz_odpri";
    radius = 2.5;
    onlyForPlayer = 1;
    condition = "this animationPhase ""OpenDoorD"" < 0.5";
    statement = "this animate [""OpenDoorD"", 1], this animate [""OpenDoorL"", 1]";
   };
   class CloseDoors
   {
    displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
    displayName = "$STR_DN_OUT_C_DOOR";
    position = "poz_odpri";
    radius = 2.5;
    onlyForPlayer = 1;
    condition = "this animationPhase ""OpenDoorD"" >= 0.5";
    statement = "this animate [""OpenDoorD"", 0], this animate [""OpenDoorL"", 0]";
   };
  };
  actionBegin1 = "OpenDoors";
  actionEnd1 = "OpenDoors";
 };
 class Land_benzina_schnell_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ibr\ibr_plants\benzina_schnell_ruins";
  displayName = "benzina_schnell_ruins";
 };

};
//};
