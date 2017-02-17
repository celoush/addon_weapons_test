class CfgPatches
{
	class Celoush_Weapons
	{
		author = "celoush";
		requiredAddons[] = {"A3_Weapons_F_Rifles_MX"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
    		authorUrl = "https://github.com/celoush/";
	};
};


class CfgWeapons
{
	class arifle_MX_RCO_pointer_snds_F;

	class celoush_arifle_MX_RCO_pointer_snds_F_base: arifle_MX_RCO_pointer_snds_F
	{
		class FullAuto;
	};

	class celoush_arifle_MX_RCO_pointer_snds_F: celoush_arifle_MX_RCO_pointer_snds_F_base
	{
		
		displayName = "Celoush's MX";
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer"};

		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00089;
		}
	};

}
