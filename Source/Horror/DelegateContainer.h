// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DelegateContainer.generated.h"

UDELEGATE()
	DECLARE_DYNAMIC_DELEGATE(FUserInputEvent);

/**
 * Used to bind user events to Action Mappings. See: UUtils::BindActorToInput
 */
UCLASS()
class HORROR_API UDelegateContainer : public UObject
{
	GENERATED_BODY()
public:
	FUserInputEvent InputEvent;

	void CallEvent();
};
