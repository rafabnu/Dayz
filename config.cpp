class CfgPatches
{
	class Ice_Carabiner
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgMods
{
	class Ice_Carabiner
	{
		dir="Ice_Carabiner";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Ice_Carabiner";
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
					"Ice_Carabiner/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Ice_Carabiner/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Ice_Carabiner/scripts/5_mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class Carabiner: Clothing
	{
		scope=2;
		displayName="Carabiner";
		descriptionShort="Carabiner by Rafa";
		model="\Ice_Carabiner\Carabiner.p3d";
		lootCategory="Crafted";		
		inventorySlot[]=
		{
			"Belt_Back"
		};
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Belt"
		};
		weight=500;
		itemSize[]={1,1};
		hiddenSelections[]=
		{
			"Carabiner"
		};
		attachments[]=
		{
			"Climbing"
			
		};
		absorbency=0.1;
		heatIsolation=0;
		repairableWithKits[]={3};
		repairCosts[]={25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Ice_Carabiner\data\Carabiner.rvmat"
							}
						};
						
						{
							0.69999999,
							
							{
								"Carabiner\data\Carabiner.rvmat"
							}
						};
						
						{
							0.5,
							
							{
								"Carabiner\data\Carabiner_damage.rvmat"
							}
						};
						
						{
							0.30000001,
							
							{
								"Carabiner\data\Carabiner_damage.rvmat"
							}
						};
						
						{
							0,
							
							{
								"Carabiner\data\Carabiner_destruct.rvmat"
							}
						}
					};
				};
			};
		};		
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Inventory_Base;
	class Ice_Climbing_Axe: Inventory_Base
	{
		scope=2;
		displayName="Ice Climbing Axe";
		descriptionShort="Ice Climbing Axe create by Rafa";	
		model="\Ice_Carabiner\Ice_Climbing.p3d";
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
			"Climbing"	
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
								"Ice_Carabiner\data\Ice_Climbing.rvmat"
							}
						};
						
						{
							0.69999999,
							
							{
								"Ice_Carabiner\data\Ice_Climbing.rvmat"
							}
						};
						
						{
							0.51,
							
							{
								"Ice_Carabiner\data\Ice_Climbing_damage.rvmat"
							}
						};
						
						{
							0.30000001,
							
							{
								"Ice_Carabiner\data\Ice_Climbing_damage.rvmat"
							}
						};
						
						{
							0.01,
							
							{
								"Ice_Carabiner\data\Ice_Climbing_destruct.rvmat"
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyClimbing: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Climbing"
		};
		//model="\Ice_Carabiner\Ice_Climbing.p3d";
		model="\Ice_Carabiner\proxys\Ice_Proxy.p3d";
	};
};
class cfgSlots
{
	class Slot_Climbing
	{
		name="Climbing";
		displayName="Climbing";
		ghostIcon="";
	};
};
