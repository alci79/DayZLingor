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

//#include "Ammobox.hpp"
