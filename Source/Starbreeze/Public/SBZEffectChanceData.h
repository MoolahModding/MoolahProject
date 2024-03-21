#pragma once
#include "CoreMinimal.h"
#include "ESBZSeasonalEventEffectType.h"
#include "SBZEffectChanceData.generated.h"

USTRUCT(BlueprintType)
struct FSBZEffectChanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZSeasonalEventEffectType> EffectTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    STARBREEZE_API FSBZEffectChanceData();
};

