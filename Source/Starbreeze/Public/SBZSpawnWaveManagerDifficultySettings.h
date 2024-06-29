#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnWaveSettings.h"
#include "SBZSpawnWaveManagerDifficultySettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZSpawnWaveManagerDifficultySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSpawnWaveSettings> SpawnWaveSettingsArray;
    
    STARBREEZE_API FSBZSpawnWaveManagerDifficultySettings();
};

