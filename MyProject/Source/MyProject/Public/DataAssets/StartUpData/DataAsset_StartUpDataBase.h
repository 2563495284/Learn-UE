// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"

class UMyGameplayAbility;
class UMyAbilitySystemComponent;
class UGameplayEffect;
/**
 *
 */
UCLASS()
class MYPROJECT_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()
public:
	virtual void GiveToAbilitySystemComponent(UMyAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
protected:
	UPROPERTY(EditAnywhere, Category = "StartUpData")
	TArray<TSubclassOf<UMyGameplayAbility>> ActivateOnGivenAbilities;

	UPROPERTY(EditAnywhere, Category = "StartUpData")
	TArray<TSubclassOf<UMyGameplayAbility>> ReactiveAbilities;

	UPROPERTY(EditAnywhere, Category = "StartUpData")
	TArray<TSubclassOf<UGameplayEffect>> StartUpGameplayEffects;

	void GrantAbilities(const TArray<TSubclassOf<UMyGameplayAbility>>& InAbilitiesToGive, UMyAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);

};
