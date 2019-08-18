// Fill out your copyright notice in the Description page of Project Settings.


#include "Engine.h"
//#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "MyNetworkGameModeBase.h"

void AMyNetworkGameModeBase::SetWindowedResolution(int _x, int _y) {
	UGameUserSettings* settings = GEngine->GetGameUserSettings();
	settings->SetScreenResolution(FIntPoint(_x, _y));
	settings->SetFullscreenMode(EWindowMode::Windowed);
	settings->ApplySettings(true);
	UKismetSystemLibrary::PrintText(GetWorld(), FText::AsCultureInvariant(L"Done"));
}
