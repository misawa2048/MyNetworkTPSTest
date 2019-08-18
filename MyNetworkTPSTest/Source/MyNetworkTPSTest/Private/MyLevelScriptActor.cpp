// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLevelScriptActor.h"
#include "Engine.h"
//#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

#define D(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT(x));}

void AMyLevelScriptActor::SetWindowedResolution() {
	UGameUserSettings* settings = GEngine->GetGameUserSettings();
	settings->SetScreenResolution(FIntPoint(640, 400));
	settings->SetFullscreenMode(EWindowMode::Windowed);
	settings->ApplySettings(true);
	UKismetSystemLibrary::PrintText(GetWorld(),FText::AsCultureInvariant(L"Done"));
}

void AMyLevelScriptActor::Destiny() {
}
