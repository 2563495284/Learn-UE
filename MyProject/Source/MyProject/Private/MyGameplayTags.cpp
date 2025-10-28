// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameplayTags.h"
namespace MyGameplayTags {
	/* Input Tags*/
	UE_DEFINE_GAMEPLAY_TAG(InputTag_EquipFlashlight, "InputTag.EquipFlashlight");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_UnequipFlashlight, "InputTag.UnequipFlashlight");

	/* Player Tags*/
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Flashlight, "Player.Ability.Equip.Flashlight");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unequip_Flashlight, "Player.Ability.Unequip.Flashlight");
	UE_DEFINE_GAMEPLAY_TAG(Player_State_Equipped_Flashlight, "Player.State.Equipped.Flashlight");

}