#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnWaveSquadOrderLimits.generated.h"

USTRUCT(BlueprintType)
struct FSBZSpawnWaveSquadOrderLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderCountLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrderCooldown;
    
    STARBREEZE_API FSBZSpawnWaveSquadOrderLimits();
};

