class CfgPatches
{
	class Carabiner
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Belts",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgMods
{
	class Carabiner
	{
		dir="Carabiner";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Carabiner";
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
					"Carabiner/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Carabiner/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Carabiner/scripts/5_mission"
				};
			};
		};
	};
};
class cfgSlots
{
	class Slot_IceTool
	{
		name="IceTool";
		displayName="IceTool";
		ghostIcon="";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyGloves: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Gloves"
		};		
		model="\Carabiner\proxy\Gloves.p3d";
	};
	class ProxyAttachment;
	class ProxyIceTool: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"IceTool"
		};		
		model="\Carabiner\proxy\IceTool_slot.p3d";
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
		model="\Carabiner\Carabiner.p3d";			
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
		weight=110;
		itemSize[]={1,1};
		attachments[]=
		{
			"gloves",
			"IceTool"
		};
		absorbency=0.1;
		heatIsolation=0;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"Carabiner"
		};
		hiddenSelectionsTextures[]=
		{
			"\Carabiner\data\Carabiner_co.paa"
		};
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
								"Carabiner\data\Carabiner.rvmat"
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
		class Inventory_Base;
		class IceTool: Inventory_Base
		{
			inventorySlot[]=
			{
				"IceTool"
			};		
		};
		class Gloves: Inventory_Base
		{
			inventorySlot[]=
			{
				"Gloves"
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
};
