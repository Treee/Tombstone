class CfgPatches
{
	class Tombstone_World
	{
		requiredAddons[] = { "DZ_Data","DZ_Surfaces" };
		author = "ItsATreee";
		name = "Tombstone World";
	};
};
class CfgWorlds
{
	class DefaultWorld;
	class CAWorld : DefaultWorld
	{
		class Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
				class Weather7;
				class Weather8;
			};
		};
	};
	class Tombstone : CAWorld
	{
		cutscenes[] = { };
		description = "Tombstone";
		worldName = "Tombstone\world\Tombstone.wrp";
		ceFiles = "Tombstone\ce";
		class Navmesh
		{
			navmeshName = "Tombstone\navmesh\navmesh.nm";
			filterIsolatedIslandsOnLoad = 1;
			visualiseOffset = 0.0;
			class GenParams
			{
				tileWidth = 50.0;
				cellSize1 = 0.25;
				cellSize2 = 0.1;
				cellSize3 = 0.1;
				filterIsolatedIslands = 1;
				seedPosition[] = { 7680,0,7680 };
				class Agent
				{
					diameter = 0.6;
					standHeight = 1.5;
					crouchHeight = 1.0;
					proneHeight = 0.5;
					maxStepHeight = 0.45;
					maxSlope = 60.0;
				};
				class Links
				{
					class ZedJump387_050
					{
						jumpLength = 1.5;
						jumpHeight = 0.5;
						minCenterHeight = 0.3;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump0";
						flags[] = { "jumpOver" };
						color = 1727987712;
					};
					class ZedJump388_050
					{
						jumpLength = 1.5;
						jumpHeight = 0.5;
						minCenterHeight = -0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump0";
						flags[] = { "jumpOver" };
						color = 1725781248;
					};
					class ZedJump387_110
					{
						jumpLength = 3.9;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump0";
						flags[] = { "jumpOver" };
						color = 1711308800;
					};
					class ZedJump420_160
					{
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump0";
						flags[] = { "jumpOver" };
						color = 1711276287;
					};
					class ZedJump265_210
					{
						jumpLength = 2.45;
						jumpHeight = 2.5;
						minCenterHeight = 1.8;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump0";
						flags[] = { "climb" };
						color = 1720975571;
					};
					class Fence50_110deer
					{
						typeId = 100;
						jumpLength = 8.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType = "jump2";
						flags[] = { "jumpOver" };
						color = 1722460927;
					};
					class Fence110_160deer
					{
						typeId = 101;
						jumpLength = 8.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType = "jump3";
						flags[] = { "jumpOver" };
						color = 1713700856;
					};
					class Fence50_110hen
					{
						typeId = 110;
						jumpLength = 4.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump4";
						flags[] = { "jumpOver" };
						color = -22016;
					};
					class Fence110_160hen
					{
						typeId = 111;
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump4";
						flags[] = { "jumpOver" };
						color = -22016;
					};
				};
			};
		};
		longitude = -3;
		latitude = 54;
		mapDisplayNameKey = "#STR_CfgVehicles_TombstoneMap0";
		mapDescriptionKey = "#STR_CfgVehicles_TombstoneMap1";
		mapTextureClosed = "Tombstone\data\map_tombstone_co.paa";
		mapTextureOpened = "Tombstone\data\map_tombstone_topo_co.paa";
		mapTextureLegend = "Tombstone\data\map_tombstone_topo_legend_co.paa";
		userMapPath = "dz\gear\navigation\data\usermap";
		class OutsideTerrain
		{
			satellite = "DZ\worlds\chernarusplus\data\outside_sat_co.paa";
			enableTerrainSynth = 0;
			class Layers
			{
				class Layer0
				{
					nopx = "DZ\surfaces\data\terrain\cp_grass_nopx.paa";
					texture = "DZ\surfaces\data\terrain\cp_grass_ca.paa";
				};
			};
		};
		class Grid
		{
			offsetX = 0;
			offsetY = 0;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = 100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = 1000;
			};
			class Zoom3
			{
				zoomMax = 1e+30;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = 10000;
			};
		};
		startTime = "9:00";
		startDate = "5/10/2015";
		centerPosition[] = { 7680,7680,300 };
		ilsPosition[] = { };
		ilsDirection[] = { };
		ilsTaxiIn[] = { };
		ilsTaxiOff[] = { };
		drawTaxiway = 0;
		class SecondaryAirports {};
		minTreesInForestSquare = 10;
		minRocksInRockSquare = 5;
		soundMapAttenCoef = 0.01;
		class SoundMapValues
		{
			treehard = 0.03;
			treesoft = 0.03;
			bushhard = 0.0;
			bushsoft = 0.0;
			forest = 1.0;
			house = 0.3;
			church = 0.5;
		};
		class Sounds
		{
			sounds[] = {};
		};
		clutterGrid = 1.0;
		clutterDist = 125;
		noDetailDist = 65;
		fullDetailDist = 15;
		midDetailTexture = "DZ\worlds\chernarusplus\data\middle_sat_mco.paa";
		terrainNormalTexture = "DZ\worlds\chernarusplus\data\global_nohq.paa";
		class UsedTerrainMaterials
		{
			material0 = "DZ\surfaces\data\terrain\cp_broadleaf_dense1.rvmat";
			material1 = "DZ\surfaces\data\terrain\cp_broadleaf_dense2.rvmat";
			material2 = "DZ\surfaces\data\terrain\cp_broadleaf_sparse1.rvmat";
			material3 = "DZ\surfaces\data\terrain\cp_broadleaf_sparse2.rvmat";
			material4 = "DZ\surfaces\data\terrain\cp_concrete1.rvmat";
			material5 = "DZ\surfaces\data\terrain\cp_concrete2.rvmat";
			material6 = "DZ\surfaces\data\terrain\cp_conifer_common1.rvmat";
			material7 = "DZ\surfaces\data\terrain\cp_conifer_common2.rvmat";
			material8 = "DZ\surfaces\data\terrain\cp_conifer_moss1.rvmat";
			material9 = "DZ\surfaces\data\terrain\cp_conifer_moss2.rvmat";
			material10 = "DZ\surfaces\data\terrain\cp_dirt.rvmat";
			material11 = "DZ\surfaces\data\terrain\cp_grass.rvmat";
			material12 = "DZ\surfaces\data\terrain\cp_grass_tall.rvmat";
			material13 = "DZ\surfaces\data\terrain\cp_gravel.rvmat";
			material14 = "DZ\surfaces\data\terrain\cp_rock.rvmat";
		};
		class Weather : Weather
		{
			class Overcast : Overcast
			{
				class Weather1 : Weather1
				{
					overcast = 0.13;
					lightingOvercast = 0;
					sky = "#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR = "DZ\data\data\sky_clear_lco.paa";
					farCloud = "DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloud = "DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip = 0.8;
					horizon = "DZ\worlds\chernarusplus\data\Horizont_Stage01_ClearHills_sky.paa";
					horizonClip = 0.8;
					alpha = 0;
					bright = 0;
					speed = 0;
					size = 0;
					height = 0;
					through = 1.0;
					godrayStrength = 0.05;
					diffuse = 0;
					cloudDiffuse = 0;
					waves = 0;
				};
				class Weather2 : Weather2
				{
					overcast = 0.3;
					lightingOvercast = 0.15;
					sky = "#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR = "DZ\data\data\sky_clear_lco.paa";
					farCloud = "DZ\worlds\chernarusplus\data\Sky_Stage10_JetStream_ch_sky.paa";
					cloud = "DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip = 0.8;
					horizon = "DZ\worlds\chernarusplus\data\Horizont_Stage01_ClearHills_sky.paa";
					horizonClip = 0.8;
					alpha = 0;
					bright = 0;
					speed = 0;
					size = 0;
					height = 0;
					through = 0.65;
					godrayStrength = 0.05;
					diffuse = 0;
					cloudDiffuse = 0;
					waves = 0;
				};
				class Weather3 : Weather3
				{
					overcast = 0.42;
					lightingOvercast = 0.35;
					sky = "#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR = "DZ\data\data\sky_clear_lco.paa";
					farCloud = "DZ\worlds\chernarusplus\data\Sky_Stage11_JetStream_ch_sky.paa";
					cloud = "DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip = 0.8;
					horizon = "DZ\worlds\chernarusplus\data\Horizont_Stage02_FoggyHills_sky.paa";
					horizonClip = 0.8;
					alpha = 0;
					bright = 0;
					speed = 0;
					size = 0;
					height = 0;
					through = 0.45;
					godrayStrength = 0.1;
					diffuse = 0;
					cloudDiffuse = 0;
					waves = 0;
				};
				class Weather4 : Weather4
				{
					overcast = 0.54;
					lightingOvercast = 0.58;
					sky = "#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR = "DZ\data\data\sky_semicloudy_lco.paa";
					farCloud = "DZ\worlds\chernarusplus\data\Cloud_Stage20_Altostratus_sky.paa";
					cloud = "DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip = 0.0;
					horizon = "DZ\worlds\chernarusplus\data\Horizont_Stage02_FoggyHills_sky.paa";
					horizonClip = 0.0;
					alpha = 0;
					bright = 0;
					speed = 0;
					size = 0;
					height = 0;
					through = 0.3;
					godrayStrength = 0;
					diffuse = 0;
					cloudDiffuse = 0;
					waves = 0;
				};
				class Weather5 : Weather5
				{
					overcast = 0.67;
					lightingOvercast = 0.67;
					sky = "#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR = "DZ\data\data\sky_semicloudy_lco.paa";
					farCloud = "DZ\worlds\chernarusplus\data\Cloud_Stage20_Altostratus_sky.paa";
					cloud = "DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip = 0.0;
					horizon = "DZ\worlds\chernarusplus\data\Horizont_Stage02_FoggyHills_sky.paa";
					horizonClip = 0.0;
					alpha = 0;
					bright = 0;
					speed = 0;
					size = 0;
					height = 0;
					through = 0.3;
					godrayStrength = 0;
					diffuse = 0;
					cloudDiffuse = 0;
					waves = 0;
				};
				class Weather6 : Weather6
				{
					overcast = 0.78;
					lightingOvercast = 1;
					sky = "#(argb,8,8,3)color(0.141176,0.141176,0.141176,1.0,CO)";
					skyR = "DZ\data\data\sky_mostlycloudy_lco.paa";
					farCloud = "DZ\worlds\chernarusplus\data\Sky_Stage30_Stratocumulus_sky.paa";
					cloud = "DZ\worlds\chernarusplus\data\Cloud_Stage30_Nimbostratus_sky.paa";
					cloudClip = 0.0;
					horizon = "DZ\worlds\chernarusplus\data\Cloud_Stage00_Transparent_sky.paa";
					horizonClip = 0.0;
					alpha = 0;
					bright = 0;
					speed = 0;
					size = 0;
					height = 0;
					through = 0;
					godrayStrength = 0;
					diffuse = 0;
					cloudDiffuse = 0;
					waves = 0;
				};
				class Weather7 : Weather7
				{
					overcast = 0.86;
					lightingOvercast = 1;
					sky = "#(argb,8,8,3)color(0.141176,0.141176,0.141176,1.0,CO)";
					skyR = "DZ\data\data\sky_mostlycloudy_lco.paa";
					farCloud = "DZ\worlds\chernarusplus\data\Sky_Stage30_Stratocumulus_sky.paa";
					cloud = "DZ\worlds\chernarusplus\data\Cloud_Stage30_Nimbostratus_sky.paa";
					cloudClip = 0.0;
					horizon = "DZ\worlds\chernarusplus\data\Cloud_Stage00_Transparent_sky.paa";
					horizonClip = 0.0;
					alpha = 0;
					bright = 0;
					speed = 0;
					size = 0;
					height = 0;
					through = 0;
					godrayStrength = 0;
					diffuse = 0;
					cloudDiffuse = 0;
					waves = 0;
				};
				class Weather8 : Weather8
				{
					overcast = 1.01;
					lightingOvercast = 1;
					sky = "#(argb,8,8,3)color(0.141176,0.141176,0.141176,1.0,CO)";
					skyR = "DZ\data\data\sky_mostlycloudy_lco.paa";
					farCloud = "DZ\worlds\chernarusplus\data\Sky_Stage30_Stratocumulus_sky.paa";
					cloud = "DZ\worlds\chernarusplus\data\Cloud_Stage31_Nimbostratus_sky.paa";
					cloudClip = 0.0;
					horizon = "DZ\worlds\chernarusplus\data\Cloud_Stage00_Transparent_sky.paa";
					horizonClip = 0.0;
					alpha = 0;
					bright = 0;
					speed = 0;
					size = 0;
					height = 0;
					through = 0;
					godrayStrength = 0;
					diffuse = 0;
					cloudDiffuse = 0;
					waves = 0;
				};
			};
			class VolFog
			{
				CameraFog = 0.0;
				UseDynamic = 1;
			};
		};
		spaceObject = "DZ\Data\data\milkyway.p3d";
		spaceObjectRotationPreOffset[] = { 0,0,0 };
		spaceObjectRotationOffset[] = { 0,0,0 };
		spaceTexture0 = "DZ\Data\data\milkyway_left_co.paa";
		spaceTexture1 = "DZ\Data\data\milkyway_right_co.paa";
		atmosphereObject = "DZ\Data\data\atmosphere.p3d";
		atmosphereTexture = "DZ\worlds\chernarusplus\data\Sky_Stage01_Clear_sky.paa";
		farCloudObject = "DZ\Data\data\obloha.p3d";
		farCloudObjectRotationAxis[] = { 0,1,0 };
		farCloudObjectRotationSpeed = 3;
		cloudObject = "DZ\Data\data\cloudObject.p3d";
		cloudObjectRotationAxis[] = { 0,1,0 };
		cloudObjectRotationSpeed = 9;
		horizonObject = "DZ\Data\data\horizont.p3d";
		horizonObjectRotationAxis[] = { 0,1,0 };
		horizonObjectRotationSpeed = 0;
		class Names
		{
			// class Settlement_Chernogorsk
			// {
			// 	name = "Черногорск";
			// 	position[] = { 6778.619,2321.774 };
			// 	type = "Capital";
			// };
		};
		class Ambient
		{
			class BigInsects
			{
				radius = 20;
				cost = "(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species {};
			};
			class BigInsectsAquatic
			{
				radius = 20;
				cost = "(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				class Species {};
			};
			class SmallInsects
			{
				radius = 3;
				cost = "(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species {};
			};
			class NightInsects
			{
				radius = 3;
				cost = "(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species {};
			};
			class WindClutter
			{
				radius = 10;
				cost = "((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindGrass2
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindRock1
					{
						probability = "0.4 * hills";
						cost = 1;
					};
					class FxCrWindLeaf1
					{
						probability = "0.2 * trees";
						cost = 1;
					};
					class FxCrWindLeaf2
					{
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					class FxCrWindLeaf3
					{
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};
			class NoWindClutter
			{
				radius = 15;
				cost = 8;
				class Species
				{
					class FxWindPollen1
					{
						probability = 1;
						cost = 1;
					};
					class FxCrWindLeaf1
					{
						probability = "0.2 * trees";
						cost = 1;
					};
					class FxCrWindLeaf2
					{
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					class FxCrWindLeaf3
					{
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};
		};
	};
};