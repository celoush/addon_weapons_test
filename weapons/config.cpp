class CfgPatches
{
	class Celoush_Weapon
	{
		author = "celoush";
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
    	authorUrl = "https://github.com/celoush/";
	};
};


class CfgWeapons
{
	class arifle_MX_RCO_pointer_snds_F;

	class celoush_arifle_MX_RCO_pointer_snds_F: arifle_MX_RCO_pointer_snds_F
	{
		displayName = "Celoush's MX";
		accuracy = 0.19;
		armor = 190;
		maxRecoilSway = 0.01;
		swayDecaySpeed = 1.15;		
	}

}