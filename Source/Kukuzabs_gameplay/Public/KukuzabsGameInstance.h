// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <atomic>
#include "KukuzabsGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class KUKUZABS_GAMEPLAY_API UKukuzabsGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:
	int32 MaxLoadedSubLevels;
	std::atomic<int> LoadedSubLevelsCounter;

protected:
	UFUNCTION(Category = "Check", BlueprintCallable)
	void SetupMaxLoadedSubLevels(const int32 MaxLoadedSubLevelsToSetup);
	UFUNCTION(Category = "Check", BlueprintCallable)
	bool CheckIfAllSubLevelsLoaded();
	
};
