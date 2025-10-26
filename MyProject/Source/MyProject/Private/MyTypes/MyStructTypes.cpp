// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTypes/MyStructTypes.h"
#include "AbilitySystem/Abilities/PlayerGameplayAbility.h"

bool FMyPlayerAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}
