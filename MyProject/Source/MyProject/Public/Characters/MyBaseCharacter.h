// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "MyBaseCharacter.generated.h"
class UMyGameplayAbility;
class UMyAbilitySystemComponent;
class UDataAsset_StartUpDataBase;
UCLASS()
class MYPROJECT_API AMyBaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyBaseCharacter();
	//~ Begin IAbilitySystemInterface Interface.
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~ End IAbilitySystemInterface Interface

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilitySystem")
	UMyAbilitySystemComponent* MyAbilitySystemComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpDataBase> CharacterStartUpData;

	void GrantAbilities(const TArray<TSubclassOf<UMyGameplayAbility>>& InAbilitiesToGive, UMyAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);


protected:
	FORCEINLINE UMyAbilitySystemComponent* GetWarriorAbilitySystemComponent() const { return MyAbilitySystemComponent; }

};
