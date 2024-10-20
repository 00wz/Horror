// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class HORROR_API IInteractable
{
	GENERATED_BODY()
public:
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact();
public:
};
