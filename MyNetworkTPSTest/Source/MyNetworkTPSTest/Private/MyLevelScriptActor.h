// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "MyLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class AMyLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

public:
		UFUNCTION(BlueprintCallable,Category="MyTest")
			void SetWindowedResolution();

		UFUNCTION(BlueprintCallable, Category = "MyTest")
			void Destiny();
};
