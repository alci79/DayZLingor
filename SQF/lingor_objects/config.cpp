class CfgPatches
{
	class lingor_objects
	{
		units[]={
"riddlerock1",
"riddlerock2",
"riddlerock3",
"riddlerock4",
"riddlerock5",
"riddlerock6",
"Bilboard_icebdona",
"Bilboard_linkpark",
"Bilboard_lovingit",
"Bilboard_perfumes",
"Bilboard_presidente",
"Bilboard_venators",
"Bilboard_welcling",
"Bilboard_rs1.p3d",
"Bilboard_rs2.p3d",
"Bilboard_rs3.p3d",
"Bilboard_rs4.p3d",
"Bilboard_rs5.p3d",
"ibr_AlienEgg",
"majlRamp",
"Land_MBG_Stands",
"Land_ibrPanelak",
"Land_ibrPanelak2",
"Land_ibrPanelak3",
"ibrmost1l",
"ibrmost2l",
"Land_ibrconslab",
"Land_ibrhotel",
"Land_MBG_AirportLogo"};
		weapons[]={};
		requiredVersion=0.100000;
		requiredAddons[]=
		{
      "CA_E",
			"CA_Modules",
			"CAData"
		};
	};
};

class CfgVehicleClasses {
	class ibr_linflags {
		displayName = "Flags of Lingor";
	};
};

class CfgVehicles
{
	class House
	{
		class DestructionEffects;
	};

class FlagCarrier;

class flag_gal: FlagCarrier {
		scope = 2;
		accuracy = 10000;
		displayName = "Republic of Lingor";
		vehicleClass = "ibr_linflags";
		nameSound = "flag";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture ""\ibr\lingor_objects\flags\flag_gal.paa""";
		};
	};

class flag_arl: FlagCarrier {
		scope = 2;
		accuracy = 10000;
		displayName = "Armadas Revolucionarias Lingor";
		vehicleClass = "ibr_linflags";
		nameSound = "flag";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture ""\ibr\lingor_objects\flags\flag_arl.paa""";
		};
	};

class flag_ven: FlagCarrier {
		scope = 2;
		accuracy = 10000;
		displayName = "Venator PMC Group";
		vehicleClass = "ibr_linflags";
		nameSound = "flag";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture ""\ibr\lingor_objects\flags\flag_ven.paa""";
		};
	};

class NonStrategic;

class riddlerock1: House 
{
scope = 1;
model = "\ibr\lingor_objects\riddlerock1.p3d";
destrType="NoDestruct";
};

class riddlerock2: House 
{
scope = 1;
model = "\ibr\lingor_objects\riddlerock2.p3d";
destrType="NoDestruct";
};

class riddlerock3: House 
{
scope = 1;
model = "\ibr\lingor_objects\riddlerock2.p3d";
destrType="NoDestruct";
};

class riddlerock4: House 
{
scope = 1;
model = "\ibr\lingor_objects\riddlerock2.p3d";
destrType="NoDestruct";
};

class riddlerock5: House 
{
scope = 1;
model = "\ibr\lingor_objects\riddlerock2.p3d";
destrType="NoDestruct";
};

class riddlerock6: House 
{
scope = 1;
model = "\ibr\lingor_objects\riddlerock2.p3d";
destrType="NoDestruct";
};

class Bilboard_icebdona: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_icebdona.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_linkpark: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_linkpark.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_lovingit: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_lovingit.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_perfumes: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_perfumes.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_presidente: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_presidente.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_venators: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_venators.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_welcling: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_welcling.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_rs1: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_rs1.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_rs2: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_rs2.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_rs3: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_rs3.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_rs4: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_rs4.p3d";
destrType="DestructTree";
armor = 50;
};

class Bilboard_rs5: House 
{
scope = 1;
model = "\ibr\lingor_objects\Bilboard_rs5.p3d";
destrType="DestructTree";
armor = 50;
};

class ibr_AlienEgg: House 
{
scope = 1;
model = "\ibr\lingor_objects\AlienEgg.p3d";
destrType="DestructBuilding";
armor = 50;
};


class majlRamp: NonStrategic
 {
  animated = false;
  vehicleClass="Objects";
  typicalCargo[]={};
  transportAmmo = 0;
  transportRepair = 0;
  transportFuel = 0;
  displayName="Ramp (Wooden)";
  model = "ibr\lingor_objects\rampa.p3d";
  icon="\ca\data\library\data\icons\ramp_concrete_CA.paa";
  scope = public;
  nameSound="";
  accuracy=0.2;
  armor=2000;
  destrType=DestructBuilding;
 };

	class Land_ibrhotel: House
	{
		scope=2;
		model="\ibr\lingor_objects\ibrhotel.p3d";
		armor=1000;
		destrtype="destructbuilding";
		ladders[]=
		{
			
			{
				"start1",
				"end1"
			},
			
			{
				"start2",
				"end2"
			},
			
			{
				"start3",
				"end3"
			},
			
			{
				"start4",
				"end4"
			}
		};
		animated=0;
		class destructioneffects: destructioneffects
		{
			class ruin1
			{
				simulation="ruin";
				type="\lingor_objects\ruins\dum_istan3_hromada2_ruins.p3d";
				position="";
				intensity=3;
				interval=1;
				lifetime=1;
			};
		};
	};

	class Land_MBG_Stands: House
	{
		scope=1;
		vehicleClass="Objects";
		displayName="Lingor Crowdstand";
		destrType="DestructBuilding";
		armor=1000;
		model="\ibr\lingor_objects\MBG_Stands.p3d";
		ladders[]={};
		class DestructionEffects: DestructionEffects
		{
		};
	};

 class Land_ibrPanelak: House
 {
  ladders[] = {
   { "start","end" }};
  model = "\ibr\lingor_objects\ibrPanelak";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\panelak_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  armor = 1000;
 };

 class Land_ibrPanelak2: House
 {
  ladders[] = {
   { "start","end" }};
  model = "\ibr\lingor_objects\ibrPanelak2";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\Panelak2_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  armor = 1000;
 };
 class Land_ibrPanelak3: House
 {
  ladders[] = {
   { "start2","end2" },
   { "start1","end1" }};
  model = "\ibr\lingor_objects\ibrPanelak3";
  animated = 1;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\panelak3_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  armor = 1000;
  class AnimationSources
  {
   class Dvere1
   {
    animPeriod = 1;
   };
   class Dvere2: Dvere1{};
  };
  class UserActions
  {
   class OpenDoors1
   {
    displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
    displayName = "$STR_DN_OUT_O_DOOR";
    position = "osa_dvere1";
    radius = 2.5;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Dvere1"" < 0.5";
    statement = "this animate [""Dvere1"", 1]";
   };
   class CloseDoors1
   {
    displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
    displayName = "$STR_DN_OUT_C_DOOR";
    position = "osa_dvere1";
    radius = 2.5;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Dvere1"" >= 0.5";
    statement = "this animate [""Dvere1"", 0]";
   };
   class OpenDoors2
   {
    displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
    displayName = "$STR_DN_OUT_O_DOOR";
    position = "osa_dvere2";
    radius = 2.5;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Dvere2"" < 0.5";
    statement = "this animate [""Dvere2"", 1]";
   };
   class CloseDoors2
   {
    displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
    displayName = "$STR_DN_OUT_C_DOOR";
    position = "osa_dvere2";
    radius = 2.5;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Dvere2"" >= 0.5";
    statement = "this animate [""Dvere2"", 0]";
   };
  };
  actionBegin1 = "OpenDoors1";
  actionEnd1 = "OpenDoors1";
  actionBegin2 = "OpenDoors2";
  actionEnd2 = "OpenDoors2";
 };

	class Land_ibrconslab: House
	{
		scope=1;
		vehicleClass="Objects";
		model="\ibr\lingor_objects\conslab.p3d";
		destrType="DestructBuilding";
		displayName="Concrete T-Wall";
		armor=1200;
	};
};
class CfgNonAIVehicles
{
  class ibrmost1l
  {
    model = "\ibr\lingor_objects\ibrmost1.p3d";
    simulation = "road";
    armor = 50;
    class Destruction
    {
      animations[]=
      {
        {"ibr\lingor_objects\Rtm\most_pad_01.rtm",0.2,17},
        {"ibr\lingor_objects\Rtm\most_pad_02.rtm",0.2,17},
        {"ibr\lingor_objects\Rtm\most_pad_03.rtm",0.2,17},
        {"ibr\lingor_objects\Rtm\most_pad_04.rtm",0.2,17},
        {"ibr\lingor_objects\Rtm\most_pad_05.rtm",0.2,17}
      };
    };
  };
  class ibrmost2l : ibrmost1l
  {
    model = \ibr\lingor_objects\ibrmost2;
    class Destruction : Destruction {};
  };

	class StreetLamp
	{
		class Reflectors
		{
			class LampLight;
		};
	};
	class Land_MBG_AirportLogo: StreetLamp
	{
		model="\ibr\lingor_objects\MBG_AirportLogo.p3d";
		class Reflectors
		{
		};
		class HitPoints
		{
			class HitBulb
			{
				armor=1;
				material=-1;
				name="lampa";
				passThrough=0;
			};
		};
		class AnimationSources
		{
			class HitBulb
			{
				source="Hit";
				hitpoint="HitBulb";
				raw=1;
			};
		};
	};
};
