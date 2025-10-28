// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NativeGameplayTags.h"

namespace MyGameplayTags {
	/* Input Tags*/
	MYPROJECT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipFlashlight);
	MYPROJECT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipFlashlight);
	/* Player Tags*/
	MYPROJECT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Flashlight);
	MYPROJECT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Flashlight);
	MYPROJECT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_State_Equipped_Flashlight);
}