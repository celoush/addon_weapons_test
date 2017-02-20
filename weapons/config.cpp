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
		author = "Celoush";
		baseWeapon = "celoush_arifle_MX_RCO_pointer_snds_F";
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer"};
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_digi_co.paa","\A3\weapons_f\ammoboxes\bags\data\backpack_compact_digi_co.paa"};		

		class FullAuto: FullAuto
		{
			reloadTime = 0.076;
			dispersion = 0.00099;
		}
	};

}
