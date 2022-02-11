class CfgPatches
{
	class IceTool
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee"
		};
	};
};
class CfgMods
{
	class IceTool
	{
		dir="IceTool";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="IceTool";
		credits=""; 
		author="";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"IceTool/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"IceTool/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"IceTool/scripts/5_mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class IceTool: Inventory_Base
	{
		scope=2;
		displayName="Ice Climbing Axe";
		descriptionShort="Ice Climbing Axe";
		model="\IceTool\IceTool.p3d";
		build_action_type=10;
		dismantle_action_type=74;
		repairableWithKits[]={4};
		repairCosts[]={18};
		rotationFlags=17;
		weight=1133;
		itemSize[]={2,4};
		fragility=0.0099999998;
		inventorySlot[]=
		{
			"IceTool"
		};
		lootCategory="Tools";
		lootTag[]=
		{
			"Work",
			"Forester",
			"Camping"
		};
		itemInfo[]=
		{
			"Axe"
		};
		hiddenSelections[]=
		{
			"IceTool"
		};
		hiddenSelectionsTextures[]=
		{
			"\IceTool\data\IceTool_co.paa"
		};
		openItemSpillRange[]={20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"IceTool\data\IceTool.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IceTool\data\IceTool.rvmat"
							}
						},
						
						{
							0.51,
							
							{
								"IceTool\data\IceTool_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IceTool\data\IceTool_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IceTool\data\IceTool_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeHatchet";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeHatchet_Heavy";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeHatchet_Heavy";
				range=3.3;
			};
		};
		isMeleeWeapon=1;
		suicideAnim="woodaxe";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
				class WoodHammer_SoundSet
				{
					soundSet="WoodHammer_SoundSet";
					id=11161;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
		};
	};
};

