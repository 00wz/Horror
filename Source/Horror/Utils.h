// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Perception/AIPerceptionComponent.h"
#include "Utils.generated.h"

/**
 * 
 */
UCLASS()
class HORROR_API UUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "HorrorUtils")
	static void SetSightRadius(UAIPerceptionComponent* PerceptionComponent, float SightRadius, float LoseSightRadius);
};
