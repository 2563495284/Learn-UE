// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/MyBaseCharacter.h"
#include "AbilitySystemComponent.h"
#include "PlayerCharacter.generated.h"
#define ATTRIBUTE_ACCESSORS(APlayerCharacter, bHasFlashlight)
#define ATTRIBUTE_ACCESSORS(APlayerCharacter, bIsEquipped)
UCLASS()
class MYPROJECT_API APlayerCharacter : public AMyBaseCharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "Flashlight")
	FGameplayAttributeData bHasFlashlight;
	ATTRIBUTE_ACCESSORS(UUA_FlashlightAttributes, bHasFlashlight)

		UPROPERTY(BlueprintReadOnly, Category = "Flashlight")
	FGameplayAttributeData bIsEquipped;
	ATTRIBUTE_ACCESSORS(UUA_FlashlightAttributes, bIsEquipped)
};
