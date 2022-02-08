modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Carabiner", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 					"dz/anims/anm/player/ik/clothing/belts/nylon_KnifeSheath.anm");
			
		pType.AddItemInHandsProfileIK("Ice_Climbing", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,				"dz/anims/anm/player/ik/gear/Hatchet.anm"); 
	};	
};