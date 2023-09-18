#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnSignificance.h"
#include "SBZPawnPlatformSpawnSettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZPawnPlatformSpawnSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSpawnSignificance AllowedSpawnSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopulationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumSpawnsPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumDestroysPerFrame;
    
    STARBREEZE_API FSBZPawnPlatformSpawnSettings();
};

