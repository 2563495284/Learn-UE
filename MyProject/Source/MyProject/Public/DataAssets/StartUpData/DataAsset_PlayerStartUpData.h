// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "MyTypes/MyStructTypes.h"
#include "DataAsset_PlayerStartUpData.generated.h"

/**
 *
 */
UCLASS()
class MYPROJECT_API UDataAsset_PlayerStartUpData : public UDataAsset_StartUpDataBase
{
	GENERATED_BODY()
protected:
	virtual void GiveToAbilitySystemComponent(UMyAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);

private:
	UPROPERTY(EditAnywhere, Category = "StartUpData", meta = (TitleProperty = "InputTag"))
	TArray<FMyPlayerAbilitySet> HeroStartUpAbilitySets;

};
