// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MyBaseCharacter.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"
// Sets default values
AMyBaseCharacter::AMyBaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

	MyAbilitySystemComponent = CreateDefaultSubobject<UMyAbilitySystemComponent>(TEXT("WarriorAbilitySystemComponent"));
}

UAbilitySystemComponent* AMyBaseCharacter::GetAbilitySystemComponent() const
{
	return GetWarriorAbilitySystemComponent();
}

// Called when the game starts or when spawned
void AMyBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (MyAbilitySystemComponent)
	{
		MyAbilitySystemComponent->InitAbilityActorInfo(this, this);

		ensureMsgf(!CharacterStartUpData.IsNull(), TEXT("Forgot to assign start up data to %s"), *GetName());
	}

}

