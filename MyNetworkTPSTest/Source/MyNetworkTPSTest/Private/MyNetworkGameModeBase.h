// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyNetworkGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class AMyNetworkGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "MyTest")
		void SetWindowedResolution(int _x=640, int _y=400);
};
