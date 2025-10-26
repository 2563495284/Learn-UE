// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
UENUM()
enum class ESuccessType :uint8
{
	Successful,
	Failed
};
UENUM(BlueprintType)
enum class EAbilityActivationPolicy :uint8
{
	OnTrriggered,
	OnGiven
};