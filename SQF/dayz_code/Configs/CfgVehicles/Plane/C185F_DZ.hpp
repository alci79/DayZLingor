class C185F_DZ: GNT_C185
	{
		displayName = "Cessna 185 Amphibian";
		displaynameshort = "C185F_DZ";
		scope = 2;
		model = "\GNT_C185\GNT_C185F";
		wheelSteeringSensitivity = 0.5;
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInMedium"};
		cargoGetOutAction[] = {"GetOutMedium"};
		hiddenselections[] = {"texFuse", "texWing", "texMisc", "RPod"};
		hiddenSelectionsTextures[] = {"\gnt_c185\tex\c185fuse4.paa", "\gnt_c185\tex\c185wings4.paa", "\gnt_c185\tex\c185misc.paa", ""};
		side = 2;
		crew = "";
		typicalCargo[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[] = {};
		magazines[] = {};
		gunnerHasFlares = false;
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 10;
		transportMaxMagazines = 40;
		transportmaxbackpacks = 15;
		
		class EventHandlers {
			init = "_sxr = _this execvm ""\GNT_C185\scr\C185FInit.sqf"";_scr = _this execVM ""\ca\Data\ParticleEffects\SCRIPTS\init.sqf"";";
			engine = "_this execVM ""\GNT_C185\scr\C185F_Exhaust.sqf"";[_this select 0] execvm ""\GNT_C185\scr\G_CheckEngine.sqf"";";
			killed = "_this call BIS_Effects_EH_Killed;";
		};
	};