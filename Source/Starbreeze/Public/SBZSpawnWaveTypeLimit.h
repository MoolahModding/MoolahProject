#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnWaveTypeLimit.generated.h"

USTRUCT(BlueprintType)
struct FSBZSpawnWaveTypeLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KilledCooldown;
    
    STARBREEZE_API FSBZSpawnWaveTypeLimit();
};

