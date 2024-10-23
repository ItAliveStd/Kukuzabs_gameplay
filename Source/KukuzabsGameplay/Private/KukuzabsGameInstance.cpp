// Fill out your copyright notice in the Description page of Project Settings.


#include "KukuzabsGameInstance.h"

void UKukuzabsGameInstance::SetupMaxLoadedSubLevels(const int32 MaxLoadedSubLevelsToSetup)
{
    MaxLoadedSubLevels = MaxLoadedSubLevelsToSetup;
}

bool UKukuzabsGameInstance::CheckIfAllSubLevelsLoaded()
{
    LoadedSubLevelsCounter++;
    if (LoadedSubLevelsCounter == MaxLoadedSubLevels)
    {
        LoadedSubLevelsCounter = 0;
        return true;
    }
    return false;
}

