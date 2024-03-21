#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZCookingDifficultyDurations.generated.h"

USTRUCT(BlueprintType)
struct FSBZCookingDifficultyDurations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval UnderCookedInterval;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval CookedInterval;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval OverCookedInterval;
    
    STARBREEZE_API FSBZCookingDifficultyDurations();
};

