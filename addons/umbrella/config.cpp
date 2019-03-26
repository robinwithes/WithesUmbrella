class CfgPatches {
    class Withes_Umbrella_Patch {
        units[] = {
            "Withes_Umbrella"
        };
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {
            "A3_Air_F"
        };
    };
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Withes_Umbrella_Pilot = "Withes_Umbrella_Pilot";
	};
	class Actions
	{
		class RifleBaseLowStandActions;
		class para_actions: RifleBaseLowStandActions
		{
			Die = "KIA_Para_Pilot";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		class PreciseCrew: Crew
		{
			head = "headNo";
		};
		class Withes_Umbrella_Pilot: Crew
		{
			file = "\umbrella\anim\pilot_anim.rtm";
		};
	};
};

class CfgVehicles {
    class Heli_Light_01_base_F;
    class ViewPilot;
    class Withes_Umbrella: Heli_Light_01_base_F {
        armor = 100;
        altFullForce = 100; /// in what height do the engines still have full thrust
        altNoForce = 5; /// thrust of the engines interpolates to zero between altFullForce and altNoForce
        maxSpeed = 80; /// what is the maximum speed of the vehicle
        maxFordingDepth = 99; /// how deep could the vehicle be in water without getting some damage
        hasDriver = true;	// default
        hasGunner = false;	// default
        hasCommander = false;	// default
        hasCoPilot = false;
        mainBladeRadius = 0; /// describes the radius of main rotor - used for collision detection	
        //multiplier of body friction
        bodyFrictionCoef = 0.1;
        //multiplier of dive force
        cyclicForwardForceCoef = 1.0;
        //multiplier of back rotor force
        backRotorForceCoef = 1.0;
        transportSoldier = 0;
        startDuration = 2;
        cargoCanEject = 1; /// cargo should be able to grab a chute and drop out of the vehicle
        driverCanEject = 1; /// pilot shouldn't be able to do so as he doesn't have eject seat
        precisegetinout = 0;
        helmetMountedDisplay = 0;
        getInRadius = 5;
        driverAction = "Withes_Umbrella_Pilot";
		driverInAction = "Withes_Umbrella_Pilot";
        maximumLoad = 0;
        accuracy = 1000; //Makes the heli hart to detect by AI, because it flies and stuff
        scope = 2;
        author = "Robin Withes";
        _generalMacro = "Withes_Umbrella";
        displayname = "Umbrella";
        model = "\umbrella\model\Umbrella.p3d";
        class Library {
            libTextDesc = "A umbrella, that can fly.. Kind of.";
        };
        class MFD{};
		class TransportBackpacks{};
		class TransportItems{};
        class TransportWeapons{};
        class Turrets{};
        class ViewPilot: ViewPilot
		{
			initFov=1.4;
			minFov=0.60000002;
			maxFov=1;
            initAngleX = 0;
            minAngleX = -30;
            maxAngleX = 30;
            initAngleY = 180;
            minAngleY = 0;
            maxAngleY = 360;
		};
    };
};