// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DelegateContainer.h"
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

	/*
	 * Set sight radius for PerceptionComponent
	 */
	UFUNCTION(BlueprintCallable, Category = "HorrorUtils")
	static void SetSightRadius(UAIPerceptionComponent* PerceptionComponent, float SightRadius, float LoseSightRadius);

	/*
	 * Returns a random point on a circle centered at point 0 and with radius Radius located in the XY plane
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "HorrorUtils")
	static FVector GetRandomVectorOnCircle(float Radius);

	/*
	 * Returns true if at least one element of the array implements the interface Interface
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "HorrorUtils")
	static bool ContainsImplementation(TArray<UObject*> Array, TSubclassOf<UInterface> Interface);

	/*
	 * Returns true if this actor has been rendered "recently", with a tolerance in seconds to define what "recent" means.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "HorrorUtils")
	static bool WasRecentlyRendered(AActor* Actor, float Tolerance );
	
	/*
	 *[Do not use it! It doesn't always work]
	 * Binds a delegate function to an Action defined in the project settings.
	 * (Deletes old bindings to the specified action!)
	 */
	UFUNCTION(BlueprintCallable, Category = "HorrorUtils")
	static void BindActorToInput(AActor* Listener, const FName ActionName, const EInputEvent KeyEvent,
		bool ExecuteWhenPaused, FUserInputEvent Func);
};
