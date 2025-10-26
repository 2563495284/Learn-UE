// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/MyGameplayAbility.h"

//void UMyAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InInputTag)
//{
//	if (!InInputTag.IsValid())
//	{
//		return;
//	}
//	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
//	{
//		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag))continue;
//
//		TryActivateAbility(AbilitySpec.Handle);
//	}
//}
//
//void UMyAbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
//{
//}
