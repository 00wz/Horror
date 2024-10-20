// Fill out your copyright notice in the Description page of Project Settings.


#include "Utils.h"

#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISense_Sight.h"

void UUtils::SetSightRadius(UAIPerceptionComponent* PerceptionComponent, float SightRadius, float LoseSightRadius)
{
	const FAISenseID SenseIdFilter = UAISense::GetSenseID(UAISense_Sight::StaticClass());
	UAISenseConfig_Sight* SightConfiguration =
		Cast<UAISenseConfig_Sight>(PerceptionComponent->GetSenseConfig(SenseIdFilter));

	if(SightConfiguration)
	{
		SightConfiguration->SightRadius = SightRadius;
		SightConfiguration->LoseSightRadius = LoseSightRadius;
	}
}

FVector UUtils::GetRandomVectorOnCircle(float Radius)
{
	FVector result = FMath::VRand();
	result = FVector{ result.X, result.Y, 0.0f };
	result.Normalize();
	result *= Radius;
	return result;
}

bool UUtils::ContainsImplementation(TArray<UObject*> Array, TSubclassOf<UInterface> Interface)
{
	for (auto Element : Array)
	{
		if(Element->IsA(Interface->StaticClass()))
		{
			return true;
		}
	}
	return false;
}
