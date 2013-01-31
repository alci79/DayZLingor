class CfgPatches {
	class at_gui_compass {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAData", CAUI};
	};
};
class RscObject;

class RscCompass : RscObject {
	scale = 0.64;
};

class RscDisplayMainMap {
	class objects {
		class Compass : RscObject {
			scale = 0.5;
		};
	};
};
